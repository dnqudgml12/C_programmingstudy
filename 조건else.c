#include <stdio.h>
 
int main()
{
    int num1 = 5;
 
    if (num1 == 10)
    {
        printf("10입니다.\n");
    }
    else    // if의 조건식이 만족하지 않을 때 코드를 실행
    {
        printf("10이 아닙니다.\n");    // num1은 10이 아니므로 "10이 아닙니다."가 출력됨
    }

main3(); 
main333();
main4444();
main555();
main5555();
mainfirst();
mainsecond();
mainthird();
mainifelseifelse();
ifelse();
    return 0;
}


#include <stdio.h>

int main3()
{
    int num1 = 10;

    if (num1 == 10)
    {
        printf("10입니다.\n");
    }
    else;    // else에 세미콜론을 붙이면 안 됨
    {
        printf("10이 아닙니다.\n");    // else에 세미콜론을 붙였으므로 
                                      // if의 결과와는 관계 없이 항상 실행됨
    }

    return 0;
}


#include <stdio.h>
 
int main333()
{
    int num1 = 10;
 
    if (num1 == 10)
        printf("10입니다.\n");
    else
        printf("10이 아닙니다.\n");    // 실행할 코드가 한 줄이라면 중괄호 생략
 
    return 0;
}

#include <stdio.h>

 int main4444()
{
    int num1 = 10;
 
    if (num1 == 10)
    {    // if로 실행할 코드가 두 줄 이상이라면 중괄호로 묶어줌
        printf("if 조건문\n");
        printf("10입니다.\n");
    }
    else
    {    // else로 실행할 코드가 두 줄 이상이라면 중괄호로 묶어줌
        printf("else\n");
        printf("10이 아닙니다.\n");
    }
 
    return 0;
}


#include <stdio.h>
 
int main555()
{
    if (2)    // 0이 아니므로 참
        printf("참\n");
    else
        printf("거짓\n");
 
    return 0;
}

#include <stdio.h>
 
int main5555()
{
    if (0)    // 0이므로 거짓
        printf("참\n");
    else
        printf("거짓\n");
 
    return 0;
}


#include <stdio.h>

int mainfirst()
{
    int num1 = 10;
    int num2 = 20;

    if (num1 == 10 && num2 == 20)    // num1이 10이면서 num2이 20일 때
        printf("참\n");
    else
        printf("거짓\n");

    return 0;
}



#include <stdio.h>

int mainsecond()
{
int num1 = 10;
int num2 = 20;

if (num1 == 10)
{
    if (num2 == 20)    // if 조건문 안에 if 조건문이 들어감
    {
        printf("참\n");
    }
    else
    {
        printf("거짓\n");
    }
}
else
{
    printf("거짓\n");
}

    return 0;
}


#include <stdio.h>

int mainthird()
{
int num1 = 10;
int num2 = 20;

if (num1 == 10)
    if (num2 == 20)
        printf("참\n");
    else
        printf("거짓\n");
else
    printf("거짓\n");

    return 0;
}


#include <stdio.h>

int mainifelseifelse()
{
    char c1 = 'c';

    if (c1 == 'a')
        printf("a\n");
    else if (c1 == 'b')
        printf("b\n");
    else if (c1 == 'c')
        printf("c\n");
    else if (c1 == 'd')
        printf("d\n");
    else
        printf("x\n");

    return 0;
}



#include <stdio.h>

int ifelse(){
int num1 = 10;
int num2 = 20;
int num3 = 30;

if (num1 == 10)        // 조건식이 참
{
    printf("10\n");    // 출력
}
if (num2 == 20)        // 조건식이 참
{
    printf("20\n");    // 출력
}
if (num3 == 30)        // 조건식이 참
{
    printf("30");      // 출력
}

    /*
    int num1 = 10;
int num2 = 20;
int num3 = 30;

if (num1 == 10)         // 조건식이 참
{
    printf("10\n");     // 출력
}
else if (num2 == 20)    // 조건식을 검사하지 않고 건너뜀
{
    printf("20\n");
}
else if (num3 == 30)    // 조건식을 검사하지 않고 건너뜀
{
    printf("30");
}
    */
/*
int num1 = 5;
int num2 = 20;
int num3 = 30;

if (num1 == 10)         // 조건식이 거짓
{
    printf("10\n");
}
else if (num2 == 20)    // 조건식이 참
{
    printf("20\n");     // 출력
}
else if (num3 == 30)    // 조건식을 검사하지 않고 건너뜀
{
    printf("30");
}
*/

return 0 ;

}


