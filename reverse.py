n=int(input("number you want to reverse:"))
rem=0
rev=0
while n>0:
  rem=n%10
  rev=rev*10+rem
  n//=10
print("the reverse is:",rev)
