'''
Name               : Divyansh Dhaundiyal
University Roll no : 2021197
Section            : K
Q1. Write a python program to accept the cost price of a bike and display the road tax to be paid
according to following criteria:
Cost price (in Rs) Tax
>100000 15%
>50000 and <=100000 10%
<=50000 5%
'''
print("\t\t\t\t\t************INPUT*************\n")
cp=int(input("Enter cost price : "))
print("\t\t\t\t\t************OUTPUT*************\n")
if cp>100000:
    rtax=cp*0.15
    cp=cp+rtax
elif cp>50000 and cp<=100000:
    rtax=cp*0.10
    cp=cp+rtax
elif cp<=50000:
    rtax=cp*0.05
    cp=cp+rtax
print("The road tax is : ",rtax)
print("Total price of the bike including the road tax is : ",cp)