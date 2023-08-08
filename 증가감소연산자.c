#include <stdio.h>

int main()
{
    int num1 = 4;

    num1++;    // 정수형 변수의 값을 1 증가시킴
    num1++;    // 2개 하니까 두번 더하네

    //num=num+1 num +=1

    printf("%d\n", num1);    // 2

    main2();
    main3();
    main4();
    main5();
    main55();
    main6();
    main66();

    return 0;
}


#include <stdio.h>

int main2()
{
    int num1 = 2;

    num1--;    // 정수형 변수의 값을 1 감소시킴
    //num1 = num1 - 1; num-=1

    printf("%d\n", num1);    // 1

    return 0;
}


#include <stdio.h>

int main3()
{
    float num1 = 2.1f;
    float num2 = 2.1f;

    num1++;    // 실수형 변수의 값을 1 증가시킴
    num2--;    // 실수형 변수의 값을 1 감소시킴

    printf("%f %f\n", num1, num2);    // 3.100000 1.100000

    return 0;
}

#include <stdio.h>

int main4()
{
    char c1 = 'b';
    char c2 = 'b';

    c1++;    // 문자 자료형 변수의 값을 1 증가시킴, 'c'로 바뀜
    c2--;    // 문자 자료형 변수의 값을 1 감소시킴, 'a'로 바뀜

    printf("%c %c\n", c1, c2);    // c a: b에서 1 증가시켰으므로 c, b에서 1 감소시켰으므로 a

    return 0;
}

#include <stdio.h>

int main5()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = num1++;    // num1의 값을 num3에 할당한 뒤 num1의 값을 1 증가시킴
    num4 = num2--;    // num2의 값을 num4에 할당한 뒤 num2의 값을 1 감소시킴

    printf("%d %d\n", num3, num4);    // 2 2

    return 0;
}

#include <stdio.h>

int main55()
{
    int num1 = 2;
    int num2 = 2;

    printf("%d %d\n", num1++, num2--);    // 2 2: num1, num2의 값을 먼저 출력한 뒤 증감 연산자 동작
    printf("%d %d\n", num1, num2);        // 3 1: 증감 연산자가 동작한 결과

    return 0;
}

#include <stdio.h>

int main6()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = ++num1;    // num1의 값을 1 증가시킨 뒤 num3에 할당
    num4 = --num2;    // num2의 값을 1 감소시킨 뒤 num4에 할당

    printf("%d %d\n", num3, num4);    // 3 1

    return 0;
}

#include <stdio.h>

int main66()
{
    int num1 = 2;
    int num2 = 2;

    printf("%d %d\n", ++num1, --num2);    // 3 1: 증감 연산자가 먼저 동작한 뒤 num1, num2의 값을 출력
    printf("%d %d\n", num1, num2);        // 3 1: 앞과 같은 값이 출력됨

    return 0;
}