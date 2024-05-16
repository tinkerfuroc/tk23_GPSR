from gpsrVisitor import *
import enum

class Task_type(enum.Enum):
    FIND_PEOPLE = 0
    FIND_OBJECT = 1
    GUIDE = 2
    FOLLOW = 3
    FOLLLOW_OUT = 4
    INCOMPLETE = 5
    MANIPULATION = 6
    COMPLEX_MANIPULATION = 7
    PARTY_HOST = 8

class KeywordType(enum.Enum):
    ROOM = 0
    BEACON = 1
    TALK_MESSAGE = 2

class Keyword:
    def __init__(self) -> None:
        self.type = 0
        self.string = ""

class Task:
    def __init__(self) -> None:
        self.task_type = 0
        self.keywords = []


class gpsrCustomVisitor(gpsrVisitor):
    def __init__(self):
        super.__init__()
        self.tasks = []
    