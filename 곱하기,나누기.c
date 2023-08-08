#include <stdio.h>

int main()
{
    int num1;
    int num2;

    num1 = 2 * 3;    // 2에 3를 곱해서 num1에 저장
    num2 = 7 / 2;    // 7에서 2를 나누어서 num2에 저장

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3: 소수점을 사용하지 않고 최대한 나눌 수 있는 값이 3
    //main2();
    main3();
    main4();
    main77();
    main78();
    maintriangle();
    return 0;
}
/*
num1 = 1 / 0;    // 1을 0으로 나눔. 컴파일 에러 발생
mul_div_integer.c(9): error C2124: 0으로 나누기 또는 나머지 연산을 수행했습니다.
*/
#include <stdio.h>

int main2()
{
    int num1 = 1;
    int num2 = 0;
    int num3;
    
    num3 = num1 / num2;    // 1을 0으로 나눔. 실행 에러 발생

    printf("%d\n", num3);

    return 0;
}


#include <stdio.h>

int main3()
{
    float num1;
    float num2;

    num1 = 2.73f * 3.81f;    // 2.73에 3.81f을 곱해서 num1에 저장
    num2 = 7.0f / 2.0f;      // 7.0에서 2.0을 나누어서 num2에 저장

    printf("%f\n", num1);    // 10.401299
    printf("%f\n", num2);    // 3.500000

    //printf("%f\n", 2.73f * 3.81f);    // 10.401299: 실제 계산 값은 10.4013

    return 0;
}

#include <stdio.h>

int main4()
{
    float num1 = 1.0f;
    float num2 = 0.0f;
    float num3;

    num3 = num1 / num2;
    //num1 = 1 / 0;    // 1을 0으로 나눔. 컴파일 에러 발생

    printf("%f\n", num3);    // inf: 무한대

    return 0;
}


#include <stdio.h>

int main77()
{
    int num1 = 2;
    int num2 = 7;

    num1 = num1 * 3;    // num1에 3을 곱한 뒤 다시 num1에 저장
    num2 = num2 / 2;    // num2에서 2를 나눈 뒤 다시 num2에 저장

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3

    return 0;
}

#include <stdio.h>

int main78()
{
    int num1 = 2;
    int num2 = 7;

    num1 *= 3;    // num1에 3을 곱한 뒤 다시 num1에 저장
    num2 /= 2;    // num2에서 2를 나눈 뒤 다시 num2에 저장

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3

    return 0;
}

//삼각형
#include <stdio.h>

int maintriangle()
{
    int base = 20;
    int height = 16;
    int area;

    area = base*height/2;

    printf("%d\n", area);

    return 0;
}

