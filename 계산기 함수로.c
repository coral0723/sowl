def func():
   while(1):
       a1=input("첫번째 정수를 입력하시오:")
       if f_a(a1)==0:
           print("종료되었습니다.")
           break
       elif f_a(a1)==1:
           while a1.isalpha():
               a1=input("첫번째 정수를 다시 입력하시오:")
       c=input("연산자를 입력하시오:")
       if c_(c)==0:
           print("종료되었습니다.")
           break
       elif c_(c)==1:
           while c not in ('+','-','*','/'):
               c=input("연산자를 다시 입력하시오:")
       a2=input("두번째 정수를 입력하시오:")
       if s_a(a2)==0:
           print("종료되었습니다.")
           break
       elif s_a(a2)==1:
           while a2.isalpha():
               a2=input("두번째 정수를 다시 입력하시오:")
       if cal(c)==1:
           with open("값.txt",'a')as file:
               file.write(str(sum_(a1,c,a2))+" ")
       elif cal(c)==2:
           with open("값.txt",'a')as file:
               file.write(str(sub_(a1,c,a2))+" ")
       elif cal(c)==3:
           val=mul_(a1,c,a2)
           with open("값.txt",'a')as file:
               file.write(str(mul_(a1,c,a2))+" ")
       elif cal(c)==4:
           with open("값.txt",'a')as file:
               file.write(str(div_(a1,c,a2))+" ")
       elif cal(c)==5:
           continue

def f_a(b1):
    if b1=='e':
        return 0
    elif b1.isalpha():
        return 1

def c_(b):
    if b not in ('+','-','*','/'):
        if b=='e':
            return 0
        else:
            return 1
          
def s_a(b2):
    if b2=='e':
        return 0
    elif b2.isalpha():
        return 1
        
def cal(x):
    if x=='+':
        return 1
    elif x=='-':
        return 2
    elif x=='*':
        return 3
    elif x=='/':
        return 4
    else:
        return 5
        
def sum_(a1,c,a2):
    result=int(a1)+int(a2)
    return result

def sub_(a1,c,a2):
    result=int(a1)-int(a2)
    return result

def mul_(a1,c,a2):
    result=int(a1)*int(a2)
    return result

def div_(a1,c,a2):
    result=int(a1)/int(a2)
    return result

func()

