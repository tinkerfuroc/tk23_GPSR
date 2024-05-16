from antlr4 import *
from gpsrLexer import gpsrLexer
from gpsrParser import gpsrParser
from gpsrCustomVisitor import gpsrCustomVisitor

def parse(s: str):
    inputstream = InputStream(s)
    lexer = gpsrLexer(inputstream)
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
    print(parse('meet Linda at the sink, follow her and go to the kitchen')[0])