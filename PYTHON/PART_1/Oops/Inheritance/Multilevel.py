class Grandfather:
    def Home(self):
        print("Grandfather Home")
class Father(Grandfather)  :
    def bike(self):
        print("Father House")
class Son(Father):
    def Book(self):
        print("son Book")
son =Son()
son.bike()
son.Book()
son.Home()                
