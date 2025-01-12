print("Data Abstraction refers to providing only essential information to the outside world and hiding their background details")
from abc import ABC,abstractmethod
class abtractcls(ABC):
      @abstractmethod
      def loan(self):pass
      @abstractmethod
      def credit(self):pass
      @abstractmethod
      def login(self):pass
class extendcls(abtractcls):
      def login(self):
           print("Login...")
           pass
      def credit(self):
           print("Credit..")
      def loan(self):
            print('loan...')
      def deposit(self):
            print("disposit")
customer =extendcls()  
customer.credit()
customer.loan()
customer.login()
customer.deposit()  
print("Abtract class in method s only declare no define")  
print("Abstract class in extends class is must override Abstract class in methods")
