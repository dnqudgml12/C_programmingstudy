/*
char c1 = 'a';
char c1 = 'Hello, world!';    // 잘못된 사용법. 작은따옴표는 문자 하나만 묶을 수 있음
unsigned short magic = 'BA';    // 변수에 2 바이트값 저장
*/

/*
#include <stdio.h>
 
int main()
{
    char c1 = 'a';    // 문자 변수를 선언하고 문자 a를 저장
    char c2 = 'b';    // 문자 변수를 선언하고 문자 b를 저장
 
    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("%c, %d\n", c1, c1);    // a, 97: a의 ASCII 코드값은 97
    printf("%c, %d\n", c2, c2);    // b, 98: b의 ASCII 코드값은 98
 
    return 0;
}


#include <stdio.h>

int main()
{
    char c1 = 97;    // a의 ASCII 코드값 97 저장
    char c2 = 98;    // b의 ASCII 코드값 98 저장

    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("%c, %d\n", c1, c1); // a, 97
    printf("%c, %d\n", c2, c2); // b, 98

    return 0;
}
*/

#include <stdio.h>

int main()
{
    char c1 = 0x61;    // a의 ASCII 코드값 0x61 할당
    char c2 = 0x62;    // b의 ASCII 코드값 0x62 할당

    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정수 값이 출력됨
    // %x로 출력하면 16진수로 출력됨
    printf("%c, %d, 0x%x\n", c1, c1, c1);    // a, 97, 0x61
    printf("%c, %d, 0x%x\n", c2, c2, c2);    // b, 98, 0x62
    main1();
    main2();
    main3();
    main4();
    return 0;
}

#include <stdio.h>

int main1()
{
    char c1 = '0';    // 문자 0을 저장
    char c2 = 0;      // 숫자 0을 저장

    printf("%c %d\n", c1, c1);    // 0 48: 문자 상태로 0이 출력됨
                                  // 문자 0의 ASCII 코드 48이 출력됨

    printf("%c %d\n", c2, c2);    // 0: ASCII 코드 0은 널문자이므로 아무것도 출력되지 않음
                                  // 정수 0이 출력됨

    return 0;
}


#include <stdio.h>

int main2()
{
    printf("%c %d\n", 'a' + 1, 'a' + 1);    // b 98: a는 ASCII 코드값 97이고, 
                                            // 97에 1을 더하여 98이 되었으므로 b가 출력됨

    printf("%c %d\n", 97 + 1, 97 + 1);      // b 98: ASCII 코드값 97에 1을 더하여 98이 되었으므로 
                                            // b가 출력됨

    return 0;
}


#include <stdio.h>

int main3()
{
    char c1 = 'a';           // 문자 a 할당
    char c2 = 'b';           // 문자 b 할당 
    char lineFeed = '\n';    // 제어 문자 \n 할당

    printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);    // 제어 문자도 %c로 출력할 수 있음

    return 0;
}


#include <stdio.h>

int main4()
{
    char lineFeed = '\n';    // 제어 문자 \n 할당

    printf("%d 0x%x\n", lineFeed, lineFeed);    // 10 0xa: 제어 문자의 ASCII 코드 출력

    return 0;
}