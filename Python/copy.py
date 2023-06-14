from shutil import copyfile
from sys import exit 
source = input("Enter source file with full path: ")
target = input("Enter target file with full path: ")
try: 
     copyfile(source , target) 
     print("Content of file xyz.txt is copied to file abc.txt")
except IOError as e:
    print("Unable to copy file. %s" %e)
