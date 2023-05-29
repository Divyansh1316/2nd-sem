'''
Name               : Divyansh Dhaundiyal
University Roll no : 2021197
Section            : K
Q5. Write a Python program that iterates the integers from 1 to 50. For multiples of three print
"3multiple" instead of the number and for multiples of five print "5multiple ". For numbers that
are multiples of three and five, print "multipleof3and4 ".
'''
print("\t\t\t\t\t************OUTPUT*************\n")
for num in range(1, 51):
    if num % 3 == 0 and num % 5 == 0:
        print("multipleof3and4", end=" ")
    elif num % 3 == 0:
        print("3multiple", end=" ")
    elif num % 5 == 0:
        print("5multiple", end=" ")
    else:
        print(num, end=" ")