#*******************************************************************
# TriangleChecker.py              Author: Caleb Shimomura
# Checks whether three integers supplied by the user can make
# a triangle in at least one configuration.
#
#*******************************************************************


#sides = input("Enter three numbers to see if they can make a triangle:")
#print(len(sides))
#print(sum(sides))

#find min number, find max number, if max-min>middle, no triangle

a = int(input("Enter the length of the first side: "))
while a < 1:
    a = int(input("Enter the length of the first side: "))
b = int(input("Enter the length of the second side: "))
while b < 1:
    b = int(input("Enter the length of the second side: "))
c = int(input("Enter the length of the third side: "))
while c < 1:
    c = int(input("Enter the length of the third side: "))

d=[a,b,c]
maxList = max(d)
d.remove(maxList)
minList = min(d)
d.remove(minList)

if maxList-minList < sum(d):
    print(a, " and ", b, " and ", c, " make a valid triangle.")
else:
    print(a, " and ", b, " and ", c, " do not make a valid triangle.")