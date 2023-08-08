#include <stdio.h>

int main()
{
    printf("%d\n", 1 % 3);    // 1: 1을 3으로 나누면 몫은 0 나머지는 1
    printf("%d\n", 2 % 3);    // 2: 2를 3으로 나누면 몫은 0 나머지는 2
    printf("%d\n", 3 % 3);    // 0: 3을 3으로 나누면 몫은 1 나머지는 0
    printf("%d\n", 4 % 3);    // 1: 4를 3으로 나누면 몫은 1 나머지는 1
    printf("%d\n", 5 % 3);    // 2: 5를 3으로 나누면 몫은 1 나머지는 2
    printf("%d\n", 6 % 3);    // 0: 6을 3으로 나누면 몫은 2 나머지는 0
    mainfloat();
    main77();
    main777();
    main3multi();
    return 0;
}


#include <stdio.h>
#include <math.h>    // fmod 함수가 선언된 헤더 파일

int mainfloat()
{
    // 실수의 나머지 연산은 fmod, fmodf, fmodl 함수를 사용

    double num1 = 10.843;
    double num2 = 3.79;
    printf("%f\n", fmod(num1, num2));    // 3.263000

    float num3 = 10.843f;
    float num4 = 3.79f;
    printf("%f\n", fmodf(num3, num4));    // 3.263000

    long double num5 = 10.843l;
    long double num6 = 3.79l;
    printf("%Lf\n", fmodl(num5, num6));    // 3.263000

    return 0;
}


#include <stdio.h>
 
int main77()
{
    int num1 = 7;
 
    num1 = num1 % 2;    // num1에서 2를 나눈 뒤 나머지를 구하여 다시 num1에 저장
 
    printf("%d\n", num1);    // 1
 
    return 0;
}


#include <stdio.h>
 
int main777()
{
    int num1 = 7;
 
    num1 %= 2;    // num1에 2를 나눈 뒤 나머지를 구하여 다시 num1에 저장
 
    printf("%d\n", num1);    // 1
 
    return 0;
}


#include <stdio.h>
 
int main3multi()
{
    int num1 = 15;
    int num2 = 27;
    int num3 = 3;
 
    num1 %= num3;
    num2 %= num3;
 
    printf("%d\n", num1);
    printf("%d\n", num2);
 
    return 0;
}