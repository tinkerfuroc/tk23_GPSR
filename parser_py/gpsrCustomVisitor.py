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
    ANSWER = 3
    GESTURE = 4
    GENDER = 5
    POSE = 6


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
        self.tasks : list[Task] = []
    


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
