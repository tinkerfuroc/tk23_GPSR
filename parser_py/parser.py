from antlr4 import *
if '.' in __name__:
    from .gpsrLexer import gpsrLexer
    from .gpsrParser import gpsrParser
    from .gpsrCustomVisitor import gpsrCustomVisitor
else:
    from gpsrLexer import gpsrLexer
    from gpsrParser import gpsrParser
    from gpsrCustomVisitor import gpsrCustomVisitor

# parse

def parse(s: str, debug=False):
    inputstream = InputStream(s)
    lexer = gpsrLexer(inputstream)
    if not debug:
        lexer.removeErrorListeners()
    stream = CommonTokenStream(lexer)
    parser = gpsrParser(stream)
    tree = parser.instruction()
    if parser.getNumberOfSyntaxErrors() > 0:
        print("syntax errors")
        return None
    else:
        vinterp = gpsrCustomVisitor()
        vinterp.visit(tree)
        return vinterp.tasks


if __name__ == '__main__':
    print(parse('meet robert at the dishwasher and follow him', True)[0])
    # print(parse('greet john at the sofa and take him to his cab', True)[0])
    print(parse('robot please go to the desk meet robin and accompany her', True)[0])
    while True:
        command = input()
        print(parse(command, True)[0])
