from gpsrVisitor import *
from gpsrParser import gpsrParser
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
    IDENTIFY = 9    # alternatives of fndppl that involve recognizing traits


class KeywordType(enum.Enum):
    ROOM = 0
    BEACON = 1
    TALK_MESSAGE = 2
    ANSWER = 3
    GESTURE = 4
    GENDER = 5
    POSE = 6
    NAME = 7


class Keyword:
    def __init__(self, type=0, string="") -> None:
        self.type : KeywordType = type
        # For task type IDENTIFY, this can be left blank if the task is to
        self.string : str = string

    def __str__(self) -> str:
        return '(' + self.type.name + ', '  + self.string + ')'

class Task:
    def __init__(self, task_type=0) -> None:
        self.task_type : Task_type = task_type
        self.keywords : list[str] = []
    
    def __str__(self) -> str:
        return self.task_type.name + ' [' + ','.join([str(i) for i in self.keywords]) + ']'


class gpsrCustomVisitor(gpsrVisitor):
    def __init__(self):
        super(gpsrVisitor, self).__init__()
        self.tasks = []


    """
    GUIDE
    """
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


    # Visit a parse tree produced by gpsrParser#gdwhere.
    def visitGdwhere(self, ctx:gpsrParser.GdwhereContext):
        return ctx.getChild(5).getText()


    """
    FIND PEOPLE
    """
    # Visit a parse tree produced by gpsrParser#talk_to_whowhere.
    def visitTalk_to_whowhere(self, ctx:gpsrParser.Talk_to_whowhereContext):
        task = Task()
        task.task_type = Task_type.FIND_PEOPLE
        self.tasks.append(task)

        self.visit(ctx.getChild(0)) # visit 'talk'
        self.visit(ctx.getChild(1)) # visit 'whoWhere'
        return None
    
    # Visit a parse tree produced by gpsrParser#find_talk_in_room.
    def visitFind_talk_in_room(self, ctx:gpsrParser.Find_talk_in_roomContext):
        task = Task()
        task.task_type = Task_type.FIND_PEOPLE
        self.tasks.append(task)

        self.visit(ctx.getChild(0))

        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(1).getText()
        self.tasks[-1].keywords.append(room)

        self.visit(ctx.getChild(2))
        return None
    
    # Visit a parse tree produced by gpsrParser#go_room_talk.
    def visitGo_room_talk(self, ctx:gpsrParser.Go_room_talkContext):
        task = Task()
        task.task_type = Task_type.FIND_PEOPLE
        self.tasks.append(task)

        self.visit(ctx.getChild(1))     #  findp

        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(0).getChild(2).getText()
        self.tasks[-1].keywords.append(room)

        self.visit(ctx.getChild(2))     # talk
        return None

    """
    TASKS WE CANNOT DO IN FIND PEOPLE
    """
    # Visit a parse tree produced by gpsrParser#tell_name_beacon.
    def visitTell_name_beacon(self, ctx:gpsrParser.Tell_name_beaconContext):
        task = Task()
        task.task_type = Task_type.IDENTIFY
        self.tasks.append(task)

        name = Keyword()
        name.type = KeywordType.NAME
        name.string = ""

        beacon = Keyword()
        beacon.type = KeywordType.BEACON
        beacon.string = ctx.getChild(0).getText()

        self.tasks[-1].keywords.append(name)
        self.tasks[-1].keywords.append(beacon)

        return None


    # Visit a parse tree produced by gpsrParser#tell_gender_beacon.
    def visitTell_gender_beacon(self, ctx:gpsrParser.Tell_gender_beaconContext):
        task = Task()
        task.task_type = Task_type.IDENTIFY
        self.tasks.append(task)

        gender = Keyword()
        gender.type = KeywordType.GENDER
        gender.string = ""

        beacon = Keyword()
        beacon.type = KeywordType.BEACON
        beacon.string = ctx.getChild(0).getText()

        self.tasks[-1].keywords.append(gender)
        self.tasks[-1].keywords.append(beacon)

        return None


    # Visit a parse tree produced by gpsrParser#tell_pose_beacon.
    def visitTell_pose_beacon(self, ctx:gpsrParser.Tell_pose_beaconContext):
        task = Task()
        task.task_type = Task_type.IDENTIFY
        self.tasks.append(task)

        pose = Keyword()
        pose.type = KeywordType.POSE
        pose.string = ""

        beacon = Keyword()
        beacon.type = KeywordType.BEACON
        beacon.string = ctx.getChild(0).getText()

        self.tasks[-1].keywords.append(pose)
        self.tasks[-1].keywords.append(beacon)

        return None


    # Visit a parse tree produced by gpsrParser#tell_name_room.
    def visitTell_name_room(self, ctx:gpsrParser.Tell_name_roomContext):
        task = Task()
        task.task_type = Task_type.IDENTIFY
        self.tasks.append(task)

        name = Keyword()
        name.type = KeywordType.NAME
        name.string = ""

        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(0).getText()

        self.tasks[-1].keywords.append(name)
        self.tasks[-1].keywords.append(room)

        return None


    # Visit a parse tree produced by gpsrParser#tell_gender_room.
    def visitTell_gender_room(self, ctx:gpsrParser.Tell_gender_roomContext):
        task = Task()
        task.task_type = Task_type.IDENTIFY
        self.tasks.append(task)

        gender = Keyword()
        gender.type = KeywordType.GENDER
        gender.string = ""

        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(0).getText()

        self.tasks[-1].keywords.append(gender)
        self.tasks[-1].keywords.append(room)

        return None


    # Visit a parse tree produced by gpsrParser#tell_pose_room.
    def visitTell_pose_room(self, ctx:gpsrParser.Tell_pose_roomContext):
        task = Task()
        task.task_type = Task_type.IDENTIFY
        self.tasks.append(task)

        pose = Keyword()
        pose.type = KeywordType.POSE
        pose.string = ""

        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(0).getText()

        self.tasks[-1].keywords.append(pose)
        self.tasks[-1].keywords.append(room)

        return None


    # Visit a parse tree produced by gpsrParser#tell_gender_number.
    def visitTell_gender_number(self, ctx:gpsrParser.Tell_gender_numberContext):
        task = Task()
        task.task_type = Task_type.IDENTIFY
        self.tasks.append(task)

        gender = Keyword()
        gender.type = KeywordType.GENDER
        gender.string = ctx.getChild(1).getText()

        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(0).getText()

        self.tasks[-1].keywords.append(room)
        self.tasks[-1].keywords.append(gender)

        return None


    # Visit a parse tree produced by gpsrParser#tell_pose_number.
    def visitTell_pose_number(self, ctx:gpsrParser.Tell_pose_numberContext):
        task = Task()
        task.task_type = Task_type.IDENTIFY
        self.tasks.append(task)

        pose = Keyword()
        pose.type = KeywordType.POSE
        pose.string = ctx.getChild(1).getText()

        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(0).getText()

        self.tasks[-1].keywords.append(room)
        self.tasks[-1].keywords.append(pose)

        return None

    """
    UTILITY PARSERS
    """
    # Visit a parse tree produced by gpsrParser#answer_question.
    def visitAnswer_question(self, ctx:gpsrParser.Answer_questionContext):
        answer = Keyword()
        answer.type = KeywordType.ANSWER
        answer.string = ""
        self.tasks[-1].keywords.append(answer)
        return None
    
    # Visit a parse tree produced by gpsrParser#speak_to.
    def visitSpeak_to(self, ctx:gpsrParser.Speak_toContext):
        speak = ctx.getChild(0) # speak
        message = Keyword()
        message.type = KeywordType.TALK_MESSAGE
        message.string = speak.getChild(1).getText()

        self.tasks[-1].keywords.append(message)

        return None
    
    # Visit a parse tree produced by gpsrParser#whoWhere.
    def visitWhoWhere(self, ctx:gpsrParser.WhoWhereContext):
        gesture = Keyword()
        gesture.type = KeywordType.GESTURE
        gesture.string = ctx.getChild(0).getText()

        room = Keyword()
        room.type = KeywordType.ROOM
        room.string = ctx.getChild(1).getText()

        self.tasks[-1].keywords.append(gesture)
        self.tasks[-1].keywords.append(room)

        return None

    # Visit a parse tree produced by gpsrParser#find_gender.
    def visitFind_gender(self, ctx:gpsrParser.Find_genderContext):
        gender = Keyword()
        gender.type = KeywordType.GENDER
        gender.string = ctx.getChild(1).getText()

        self.tasks[-1].keywords.append(gender)

        return None


    # Visit a parse tree produced by gpsrParser#find_gesture.
    def visitFind_gesture(self, ctx:gpsrParser.Find_gestureContext):
        gesture = Keyword()
        gesture.type = KeywordType.GESTURE
        gesture.string = ctx.getChild(1).getText()

        self.tasks[-1].keywords.append(gesture)

        return None


    # Visit a parse tree produced by gpsrParser#find_pose.
    def visitFind_pose(self, ctx:gpsrParser.Find_poseContext):
        pose = Keyword()
        pose.type = KeywordType.POSE
        pose.string = ctx.getChild(1).getText()

        self.tasks[-1].keywords.append(pose)

        return None

    """
    FOLLOW
    """
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

        return None
        
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

        return None
    
    # Visit a parse tree produced by gpsrParser#from_beacon_to_where.
    def visitFrom_beacon_to_where(self, ctx:gpsrParser.From_beacon_to_whereContext):
        task = Task()
        task.task_type = Task_type.FOLLOW
        self.tasks.append(task)
        
        beacon = Keyword()
        beacon.type = KeywordType.BEACON
        beacon.string = ctx.getChild(0).getChild(2).getText()
        self.tasks[-1].keywords.append(beacon)

        return None


    """
    FOLLOWOUT
    """
    # Visit a parse tree produced by gpsrParser#beacon_to_room.
    def visitBeacon_to_room(self, ctx:gpsrParser.Beacon_to_roomContext):
        task = Task()
        task.task_type = Task_type.FOLLLOW_OUT
        self.tasks.append(task)
        
        name = Keyword()
        name.type = KeywordType.NAME
        name.string = ctx.getChild(0).getText()

        beacon = Keyword()
        beacon.type = KeywordType.BEACON
        beacon.string = ctx.getChild(1).getText()

        room = Keyword()
        room.type = KeywordType.BEACON
        room.string = ctx.getChild(ctx.getChildCount()-1).getChild(1).getText()

        self.tasks[-1].keywords.append(name)
        self.tasks[-1].keywords.append(beacon)
        self.tasks[-1].keywords.append(room)

        return None
    
    # Visit a parse tree produced by gpsrParser#beacon_to_back.
    def visitBeacon_to_back(self, ctx:gpsrParser.Beacon_to_backContext):
        task = Task()
        task.task_type = Task_type.FOLLLOW_OUT
        self.tasks.append(task)
        
        name = Keyword()
        name.type = KeywordType.NAME
        name.string = ctx.getChild(0).getText()

        beacon = Keyword()
        beacon.type = KeywordType.BEACON
        beacon.string = ctx.getChild(1).getText()


        self.tasks[-1].keywords.append(name)
        self.tasks[-1].keywords.append(beacon)
        self.tasks[-1].keywords.append(beacon) # follow and then guide back so destination is starting point

        return None

    """
    ALL THE TASKS WE CANNOT DO
    """
    # Visit a parse tree produced by gpsrParser#fndobj.
    def visitFndobj(self, ctx:gpsrParser.FndobjContext):
        task = Task()
        task.task_type = Task_type.FIND_OBJECT
        self.tasks.append(task)
        return None
    
    # Visit a parse tree produced by gpsrParser#incomplete.
    def visitIncomplete(self, ctx:gpsrParser.IncompleteContext):
        task = Task()
        task.task_type = Task_type.FIND_OBJECT
        self.tasks.append(task)
        return None
    
    # Visit a parse tree produced by gpsrParser#man.
    def visitMan(self, ctx:gpsrParser.ManContext):
        task = Task()
        task.task_type = Task_type.MANIPULATION
        self.tasks.append(task)
        return None

    # Visit a parse tree produced by gpsrParser#complexman.
    def visitComplexman(self, ctx:gpsrParser.ComplexmanContext):
        task = Task()
        task.task_type = Task_type.COMPLEX_MANIPULATION
        self.tasks.append(task)
        return None

    # Visit a parse tree produced by gpsrParser#partyhost.
    def visitPartyhost(self, ctx:gpsrParser.PartyhostContext):
        task = Task()
        task.task_type = Task_type.PARTY_HOST
        self.tasks.append(task)
        return None