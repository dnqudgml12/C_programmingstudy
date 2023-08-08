#include <stdio.h>
 
int main()
{
    int num1 = 10;
 
    printf("%d\n", num1 == 10);    // 1: num1이 10과 같은지
    printf("%d\n", num1 != 5);     // 1: num1이 5와 다른지
 
    printf("%d\n", num1 > 10);     // 0: num1이 10보다 큰지
    printf("%d\n", num1 < 10);     // 0: num1이 10보다 작은지
 
    printf("%d\n", num1 >= 10);    // 1: num1이 10보다 크거나 같은지
    printf("%d\n", num1 <= 10);    // 1: num1이 10보다 작거나 같은지

    main1();
    main2();
    main333();
    main444();
    main555();
    main5555();
 
    return 0;
}


#include <stdio.h>
 
int main1()
{
    int num1 = 5;
    int num2;
 
    if (num1)          // num1이 참이면 
        num2 = 100;    // num2에 100을 할당
    else               // num1이 거짓이면
        num2 = 200;    // num2에 200을 할당
 
    printf("%d\n", num2); // 100: num1이 5이므로 참. num2에는 100이 할당됨
 
    return 0;
}

/*
#include <stdio.h> 

int main()
{
    int num1 = 5;
    int num2;
 
    num2 = num1 ? 100 : 200;    // num1이 참이면 num2에 100을 할당, 거짓이면 num2에 200을 할당
 
    printf("%d\n", num2);    // 100: num1이 5이므로 참. num2에는 100이 할당됨
 
    return 0;
}
*/

#include <stdio.h>
 
int main2()
{
    int num1 = 10;
    int num2;
 
    num2 = num1 == 10 ? 100 : 200; // num1이 10이면 num2에 100을 할당, 10이 아니면 num2에 200을 할당
 
    printf("%d\n", num2);    // 100: num1이 10이므로 num2에는 100이 할당됨
 
    return 0;
}


#include <stdio.h>
 
int main333()
{
    int num1 = 10;
 
    if (num1 == 10)    // num1이 10과 같은지 검사
        printf("10입니다.\n");
 
    if (num1 != 5)     // num1이 5와 다른지 검사
        printf("5가 아닙니다.\n");
 
    if (num1 > 10)     // num1이 10보다 큰지 검사
        printf("10보다 큽니다.\n");
 
    if (num1 < 10)     // num1이 10보다 작은지 검사
        printf("10보다 작습니다.\n");
 
    if (num1 >= 10)    // num1이 10보다 크거나 같은지 검사
        printf("10보다 크거나 같습니다.\n");
 
    if (num1 <= 10)    // num1이 10보다 작거나 같은지 검사
        printf("10보다 작거나 같습니다.\n");
 
    return 0;
}

#include <stdio.h>
 
int main444()
{
    float num1 = 0.1f;
    char c1 = 'a';
 
    if (num1 >= 0.09f)   // num1이 실수 0.09보다 크거나 같은지 검사
        printf("0.09보다 크거나 같습니다.\n");
 
    if (c1 == 'a')       // c1이 문자 a와 같은지 검사
        printf("a입니다.\n");
 
    if (c1 == 97)        // c1이 정수 97과 같은지 검사
        printf("97입니다.\n");
 
    if (c1 < 'b')        // c1이 문자 b보다 작은지 검사
        printf("b보다 작습니다.\n");
    
    return 0;
}


#include <stdio.h>

int main555()
{
    int num1 = 5;

    // 함수 안에서 삼항 연산자 사용
    printf("%s\n", num1 == 10 ? "10입니다." : "10이 아닙니다."); // num1은 5이므로 "10이 아닙니다."
                                                                // 출력

    return 0;
}

#include <stdio.h>
 
int main5555()
{
    float num1 = 1.2f;
 
    printf("%f\n", num1 > 2.0f ? 3.0f : 4.0f);
 
    return 0;
}