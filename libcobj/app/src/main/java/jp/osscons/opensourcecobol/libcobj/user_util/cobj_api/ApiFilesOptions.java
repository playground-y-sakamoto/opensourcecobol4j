package jp.osscons.opensourcecobol.libcobj.user_util.cobj_api;

import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.CommandLineParser;
import org.apache.commons.cli.DefaultParser;
import org.apache.commons.cli.Option;
import org.apache.commons.cli.Options;
import org.apache.commons.cli.ParseException;

/** cobj-apiコマンドのオプションを定義するクラス */
class ApiFilesOptions {
    /** cobj-apiコマンドによって生成されるJavaファイルに記述されるパッケージ名 */
    static String packageName;

    /** cobj-apiコマンドによって生成されるJavaファイルが配置されるディレクトリ名 */
    static String outputDir;

    static String filePath;

    /**
     * 入力されたオプションを取得する
     *
     * @param args コマンドラインから入力された文字列
     */
    static void getOptions(String[] args) {
        Options options = new Options();

        options.addOption(Option.builder("h").longOpt("help").build());
        options.addOption(Option.builder("java-package").longOpt("java-package").hasArgs().build());
        options.addOption(Option.builder("o").hasArgs().build());
        options.addOption(Option.builder("output-dir").longOpt("output-dir").hasArgs().build());
        options.addOption(Option.builder("v").longOpt("version").build());

        CommandLineParser parser = new DefaultParser();

        try {
            CommandLine cmd = parser.parse(options, args);
            int optionCount = 0;
            String outputDir;

            if (cmd.getOptions().length != 0) {
                for (Option option : cmd.getOptions()) {
                    switch (option.getOpt()) {
                        case "h":
                            printHelpMessage();
                            System.exit(0);
                            break;
                        case "v":
                            System.out.println("1.1.4");
                            System.exit(0);
                            break;
                        case "java-package":
                            if (!args[optionCount].contains("=")) {
                                System.err.println("error: Please check the usage of options.\n");
                                printHelpMessage();
                                System.exit(1);
                            }
                            String packageName = option.getValue();
                            setJavaPackage(packageName);
                            break;
                        case "output-dir":
                            if (!args[optionCount].contains("=")) {
                                System.err.println("error: Please check the usage of options.\n");
                                printHelpMessage();
                                System.exit(1);
                            }
                            outputDir = option.getValue();
                            setOutputDir(outputDir);
                            break;
                        case "o":
                            outputDir = option.getValue();
                            setOutputDir(outputDir);
                            optionCount++;
                            break;
                        default:
                            break;
                    }
                    optionCount++;
                }
                filePath = args[optionCount];
            } else {
                filePath = args[0];
            }
        } catch (ParseException e) {
            System.err.println("error: " + e.getMessage() + "\n");
            printHelpMessage();
            System.exit(1);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.err.println("error: Please check the usage of options.\n");
            printHelpMessage();
            System.exit(1);
        }
    }

    /** cobj-apiコマンドのヘルプメッセージを出力する */
    private static void printHelpMessage() {
        System.out.println("Usage: cobj-api [options] <json-file>");
        System.out.println();
        System.out.println("Arguments:");
        System.out.println(
                "  <json-file>: a json file generated by cobj with `-info-json-dir` option");
        System.out.println();
        System.out.println("Options:");
        System.out.println("  -h, --help\t\t\t\tDisplay this message");
        System.out.println(
                "  -java-package=<package name>\t\tSpecify the package name of the generated source"
                        + " code");
        System.out.println(
                "  -o <dir>, --output-dir=<dir>\t\tSet the output destination of the java file to"
                        + " an arbitrary destination");
        System.out.println("  -v, --version\t\t\t\tPrints the version of the cobj-api");
    }

    /**
     * 生成されるJavaファイルに記述されるパッケージ名を設定する
     *
     * @param packageName 生成されるJavaファイルに記述されるパッケージ名
     */
    static void setJavaPackage(String packageName) {
        ApiFilesOptions.packageName = packageName;
    }

    /**
     * 生成されるJavaファイルが配置されるディレクトリ名を設定する
     *
     * @param outputDir 生成されるJavaファイルが配置されるディレクトリ名
     */
    static void setOutputDir(String outputDir) {
        ApiFilesOptions.outputDir = outputDir;
    }
}
