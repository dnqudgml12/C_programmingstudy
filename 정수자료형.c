#include <stdio.h>

/*
int main()
{
    char num1 = -10;           // 1바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    short num2 = 30000;        // 2바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    int num3 = -1234567890;    // 4바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    long num4 = 1234567890;    // 4바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
    long long num5 = -1234567890123456789;     // 8바이트 부호 있는 정수형으로 변수를 
                                               // 선언하고 값 할당

    // char, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    // -10 30000 -1234567890 1234567890 -1234567890123456789

    return 0;
}
*/

int main()
{
    unsigned char num1 = 200;                          // 1바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned short num2 = 60000;                       // 2바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned int num3 = 4123456789;                    // 4바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned long num4 = 4123456789;                   // 4바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned long long num5 = 12345678901234567890;    // 8바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    // unsigned char, unsigned short, unsigned int는 %u로 출력하고 
    // unsigned long은 %lu, unsigned long long은 %llu로 출력
    printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);
    // 200 60000 4123456789 4123456789 12345678901234567890

    return 0;
}