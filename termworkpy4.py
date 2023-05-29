'''
Name               : Divyansh Dhaundiyal
University Roll no : 2021197
Section            : K
Q4. Write a Python program to find the sum of the following series:
1+2^2/2!+3^3/3!+…….+n^n/n!
'''
print("\t\t\t\t\t************INPUT*************\n")
n=int(input("Enter n : "))
sum=0
fact=1 
for i in range(1,n+1):
    fact=fact*i
    sum=sum+(i*i/fact)
print("\t\t\t\t\t************OUTPUT*************\n")
print("Sum of series is :",sum)