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
    
    # Visit a parse tree produced by gpsrParser#from_beacon_to_room.
    def visitFrom_beacon_to_room(self, ctx:gpsrParser.From_beacon_to_roomContext):
        task = Task()
        task.task_type = Task_type.FOLLOW
        self.tasks.append(task)
        
        beacon = Keyword()
        beacon.type = KeywordType.BEACON
        beacon.string = ctx.getChild(3).getText()
        self.tasks[-1].keywords.append(beacon)
        
        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(5).getText()
        self.tasks[-1].keywords.append(room)
        
    # Visit a parse tree produced by gpsrParser#from_beacon_to_room_indirect.
    def visitFrom_beacon_to_room_indirect(self, ctx:gpsrParser.From_beacon_to_room_indirectContext):
        task = Task()
        task.task_type = Task_type.FOLLOW
        self.tasks.append(task)
        
        beacon = Keyword()
        beacon.type = KeywordType.BEACON
        beacon.string = ctx.getChild(3).getText()
        self.tasks[-1].keywords.append(beacon)
        
        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(7).getChild(1).getText()
        self.tasks[-1].keywords.append(room)
    
    # Visit a parse tree produced by gpsrParser#from_beacon_to_where.
    def visitFrom_beacon_to_where(self, ctx:gpsrParser.From_beacon_to_whereContext):
        task = Task()
        task.task_type = Task_type.FOLLOW
        self.tasks.append(task)
        
        beacon = Keyword()
        beacon.type = KeywordType.BEACON
        beacon.string = ctx.getChild(0).getChild(2).getText()
        self.tasks[-1].keywords.append(beacon)