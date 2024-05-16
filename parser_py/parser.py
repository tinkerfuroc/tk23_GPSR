from posixpath import lexists
from antlr4 import *
from gpsrLexer import gpsrLexer
from gpsrParser import gpsrParser
from gpsrCustomVisitor import gpsrCustomVisitor

def parse(s: str):
    lexer = gpsrLexer(s)
    stream = CommonTokenStream(lexer)
    parser = gpsrParser(stream)
    tree = parser.start_()
    if parser.getNumberOfSyntaxErrors() > 0:
        print("syntax errors")
        return None
    else:
        vinterp = gpsrCustomVisitor()
        vinterp.visit(tree)
        return vinterp.tasks


if __name__ == '__main__':
    print(parse(''))