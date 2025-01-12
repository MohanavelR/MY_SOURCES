class Nokia:
    company="Nokia India"
    website='www.nokia.com'
    def contact(self):
        print("Address : salem,edappadi.")
class Nokia100(Nokia):
    def __init__(self):
        self.name='nokia100'
        self.year=2003
    def details(self):
        print("Mobile Name :",self.name)
        print("Year        :",self.year)    
        print("Company     :",self.company)
        print("Website     :",self.website)
mobile=Nokia100()
mobile.details()
mobile.contact()                