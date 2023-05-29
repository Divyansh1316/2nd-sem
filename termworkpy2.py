'''
Name               : Divyansh Dhaundiyal
University Roll no : 2021197
Section            : K
Q2. Write a program in Python. A library charges a fine for every book returned late. For First
5 days the fine is 50 paisa/day, for 6-10 days fine is one rupee/day and above 10 daysfine
is 5 Rupees/ per day. If you return the book after 30 days your membership will be
cancelled. Write a program to accept the number of days the member is late to return the
book and display the fine or the appropriate message.
'''
print("\t\t\t\t\t************INPUT*************\n")
day=int(input("Enter number of days the member is late to return the book : "))
print("\t\t\t\t\t************OUTPUT*************\n")
if day<=5:
    fine=0.50*day
    print("Total fine is : Rs",fine)
elif (day>=6 and day<=10):
    fine=2.5+1*(day-5)
    print("Total fine is : Rs",fine)
elif (day>10 and day<=30):
    fine=2.5+5+5*(day-10)
    print("Total fine is : Rs",fine)
else:
    print("Membership cancelled")