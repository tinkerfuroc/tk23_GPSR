# tk23_GPSR

## ANLTR usage

1. Visit **https://www.antlr.org/download.html**, download **https://www.antlr.org/download/antlr-4.13.1-complete.jar**.

2. Execute the following command under the root directory of the project:

   ```bash
   java -jar ./antlr-4.13.1-complete.jar -Dlanguage=Cpp gpsr.g4 -visitor -no-listener -o ./parser
   ```

   * This will overwrite existing `gpsrBaseVisitor.h` and `gpsrBaseVisitor.cpp`. Inherit the `BaseVisitor` class and put your code there, in an individual file like `gpsrExtVisitor.h`.

