print("it is a process of Wrapping code and data together into a sigle unit  ")
class Library:
    def __init__(self,books):
        self.Books=books
    def ListBook(self):
        print("Available Books :")
        for book in self.Books:
            print(book)
    def Borrow_book(self,book):
        if book in self.Books:
            print("Borrowing Book ...")
            self.Books.remove(book)
        else:
            print("Not Available book...")
    def receive_book(self,book):
        print("You Have Receive Book")
        self.Books.append(book)        

lib=Library(["Html","Java","Python","C++"])

while True:
    print("""
     1.Available Book
     2.Borrow book
     3.receive book 
     4.exit    
""")
    choice=input("Enter Your Choice :")
    if choice=='1':
        lib.ListBook()
    elif choice=='2':
        book=input("Enter Book Name :").capitalize()
        lib.Borrow_book(book)
    elif choice=='3':
        book=input("Enter Book Name :").capitalize()
        lib.receive_book(book)                 
    elif choice=='4':
        exit(0)
    else:
        print("Invailed Choice....")    