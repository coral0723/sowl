while(1):
    a1=input("정수를 입력하시오:")
    while a1=='c':
        a1=input("정수를 입력하시오:")
    if a1=='e':
        print("종료되었습니다.")
        break;
    c=input("연산자를 입력하시오:")
    while c=='c':
        c=input("연산자를 입력하시오:")
    if c=='e':
        print("종료되었습니다.")
        break;
    a2=input("정수를 입력하시오:")
    while a2=='c':
        a2=input("정수를 입력하시오:")
    if a2=='e':
        print("종료되었습니다.")
        break;

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

