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
    def __init__(self, type=0, string="") -> None:
        self.type = type
        self.string = string

class Task:
    def __init__(self) -> None:
        self.task_type = 0
        self.keywords = []


class gpsrCustomVisitor(gpsrVisitor):
    def __init__(self):
        super.__init__()
        self.tasks = []


    # Visit a parse tree produced by gpsrParser#beacon_to_beacon.
    def visitBeacon_to_beacon(self, ctx:gpsrParser.Beacon_to_beaconContext):
        task = Task()
        task.task_type = Task_type.GUIDE

        task.keywords.append(Keyword(type=KeywordType.BEACON, string=ctx.getChild(3).getText()))
        task.keywords.append(Keyword(type=KeywordType.BEACON, string=ctx.getChild(5).getText()))
        self.tasks.append(task)
        return self.visitChildren(ctx)
    

    # Visit a parse tree produced by gpsrParser#beacon_to_beacon_guide_to.
    def visitBeacon_to_beacon_guide_to(self, ctx:gpsrParser.Beacon_to_beacon_guide_toContext):
        task = Task()
        task.task_type = Task_type.GUIDE

        task.keywords.append(Keyword(type=KeywordType.BEACON, string=ctx.getChild(3).getText()))
        beacon2 = self.visit(ctx.getChild(5))
        task.keywords.append(Keyword(type=KeywordType.BEACON, string=beacon2))
        self.tasks.append(task)

        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#beacon_to_beacon_gobeacon_guideto.
    def visitBeacon_to_beacon_gobeacon_guideto(self, ctx:gpsrParser.Beacon_to_beacon_gobeacon_guidetoContext):
        task = Task()
        task.task_type = Task_type.GUIDE

        task.keywords.append(Keyword(type=KeywordType.BEACON, string=ctx.getChild(3).getText()))
        beacon2 = self.visit(ctx.getChild(ctx.getChildCount() - 1))
        task.keywords.append(Keyword(type=KeywordType.BEACON, string=beacon2))
        self.tasks.append(task)
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#beacon_to_beacon_gdwhere.
    def visitBeacon_to_beacon_gdwhere(self, ctx:gpsrParser.Beacon_to_beacon_gdwhereContext):
        task = Task()
        task.task_type = Task_type.GUIDE

        task.keywords.append(Keyword(type=KeywordType.BEACON, string=ctx.getChild(3).getText()))
        beacon2 = self.visit(ctx.getChild(ctx.getChildCount() - 1))
        task.keywords.append(Keyword(type=KeywordType.BEACON, string=beacon2))
        self.tasks.append(task)
        return self.visitChildren(ctx)


    # Visit a parse tree produced by gpsrParser#guideto.
    def visitGuideto(self, ctx:gpsrParser.GuidetoContext):
        return ctx.getChild(3).getText()


    # Visit a parse tree produced by gpsrParser#gobeacon.
    def visitGobeacon(self, ctx:gpsrParser.GobeaconContext):
        return ctx.getChild(2).getText()


    # Visit a parse tree produced by gpsrParser#beacon_to_beacon_gdwhere.
    def visitBeacon_to_beacon_gdwhere(self, ctx:gpsrParser.Beacon_to_beacon_gdwhereContext):
        return ctx.getChild(5).getText()