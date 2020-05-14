while(1):
    a1=input("정수를 입력하시오:")
    if a1=='e':
        print("종료되었습니다.")
        break;
    while a1.isalpha():
        a1=input("정수를 다시 입력하시오:")
    c=input("연산자를 입력하시오:")
    if c=='e':
        print("종료되었습니다.")
        break;
    while c.isalpha():
        c=input("연산자를 다시 입력하시오:")
    a2=input("정수를 입력하시오:")
    if a2=='e':
        print("종료되었습니다.")
        break;
    while a2.isalpha():
        a2=input("정수를 다시 입력하시오:")

    if c=='+':
        result=int(a1)+int(a2)
    elif c=='-':
        result=int(a1)-int(a2)
    elif c=='*':
        result=int(a1)*int(a2)
    elif c=='/':
        result=int(a1)/int(a2)
    else:
        continue

    print(result)
