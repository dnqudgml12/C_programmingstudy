#include <stdio.h>

int main()
{
    int num1;
    int num2;

    num1 = 1 + 2;    // 1에 2를 더해서 num1에 저장
    num2 = 1 - 2;    // 1에서 2를 빼서 num2에 저장

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1
    main1();
    main4();
    main44();

    return 0;
}

#include <stdio.h>

int main1()
{
    float num1;
    float num2;

    num1 = 1.0f + 0.456789f;    // 1.0에 0.456789를 더해서 num1에 저장
    num2 = 1.0f - 0.456789f;    // 1.0에서 0.456789를 빼서 num2에 저장

    printf("%f\n", num1);    // 1.456789
    printf("%f\n", num2);    // 0.543211

    return 0;
}

#include <stdio.h>

int main2()
{
    int num1 = 1;
    int num2 = 1;

    num1 = num1 + 2;    // num1에 2를 더한 뒤 다시 num1에 저장
    num2 = num2 - 2;    // num2에서 2를 뺀 뒤 다시 num2에 저장

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    return 0;
}


#include <stdio.h>

int main4()
{
    int num1 = 1;
    int num2 = 1;

    num1 += 2;    // num1에 2를 더한 뒤 다시 num1에 저장(2를 증가시킴)
    num2 -= 2;    // num2에서 2를 뺀 뒤 다시 num2에 저장(2를 감소시킴)

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    return 0;
}


#include <stdio.h>

int main44()
{
    int num1 = 1;
    int num2 = 1;

    num1 += 2;    // num1에 2를 더한 뒤 다시 num1에 저장(2를 증가시킴)
    num2 -= 2;    // num2에서 2를 뺀 뒤 다시 num2에 저장(2를 감소시킴)

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    return 0;
}