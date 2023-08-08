#include <stdio.h>
 
int main()
{
    int num1 = 11;
    float num2 = 4.4f;
 
    printf("%f\n", num1 + num2);    // 15.400000: 정수와 실수 덧셈. 정수는 실수로 변환됨
    printf("%f\n", num1 - num2);    // 6.600000: 정수와 실수 뺄셈. 정수는 실수로 변환됨
    printf("%f\n", num1 * num2);    // 48.400002: 정수와 실수 곱셈. 정수는 실수로 변환됨
    printf("%f\n", num1 / num2);    // 2.500000: 정수와 실수 나눗셈. 정수는 실수로 변환됨
    main2();
    mainmini();
    mainchar();
    maincharacter();
    return 0;
}


#include <stdio.h>
 
int main2()
{
    long long num1 = 123456789000;
    int num2 = 10;
 
    // int보다 long long이 자료형 크기가 크므로 long long으로 변환됨
    printf("%lld\n", num1 + num2);    // 123456789010
    printf("%lld\n", num1 - num2);    // 123456788990
    printf("%lld\n", num1 * num2);    // 1234567890000
    printf("%lld\n", num1 / num2);    // 12345678900
 
    return 0;
}


#include <stdio.h>
 
int mainmini()
{
    float num1 = 11.0f;
    float num2 = 5.0f;
 
    int num3 = num1 / num2;    // 실수에서 실수를 나누어 2.2가 나왔지만 
                               // 정수 자료형에는 2만 저장되고 0.2는 버려짐
 
    printf("%d\n", num3);    // 2
 
    return 0;
}

#include <stdio.h>
 
int mainchar()
{
    char num1 = 28;
    int num2 = 1000000002;
 
    char num3 = num1 + num2;    // char보다 큰 숫자는 저장할 수 없음
                                // 28 + 2만 남고 앞 자릿수는 버려짐
 
    printf("%d\n", num3);    // 30
  
    return 0;
}

#include <stdio.h>

int maincharacter()
{
    char c1 = 'a';
    unsigned char num2 = c1;

    printf("%c\n", num2);

    return 0;
}