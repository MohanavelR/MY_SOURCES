
import threading
import time
def Message():
    print("Updating.....")
    time.sleep(3)
    print("Successfully updated in db....")
run=threading.Thread(target=Message)
run.start()
print("Waiting.....")
run.join()
print("Ok bye...")