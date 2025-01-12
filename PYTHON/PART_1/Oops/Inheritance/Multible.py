class Father:
    def fishing(self):
        print("Fishing...")
    def chess(self):
        print("playing from father")    
class Mother:
    def chess(self):
        print("playing from Mother")  
    def cook(self):
        print("cooking")
class Son(Father,Mother):
        def Ride(self):
             print("riding")
son=Son()
son.chess()
son.cook()
son.fishing()
son.Ride()             
