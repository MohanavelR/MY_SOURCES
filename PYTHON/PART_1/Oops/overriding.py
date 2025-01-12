class Emplyee:
    def WorkHours(self):
        print('Month -60 hours')
class Trainee(Emplyee):
    def WorkHours(self):
        print('Month -80 hours')
trainee=Trainee()
trainee.WorkHours()