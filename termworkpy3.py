'''
Name               : Divyansh Dhaundiyal
University Roll no : 2021197
Section            : K
Q3. Write a python program to print x^y without using library function.
'''
print("\t\t\t\t\t************INPUT*************\n")
x=int(input("Enter base : "))
y=int(input("Enter power : "))
power=1
for i in range(y):
    power=power*x
print("\t\t\t\t\t************OUTPUT*************\n")
print(power)