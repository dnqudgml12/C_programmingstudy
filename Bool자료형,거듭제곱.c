#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일
 
int main()
{
    bool b1 = true;
 
    if (b1 == true)        // b1이 true인지 검사
        printf("참\n");    // b1이 true이므로 참이 출력됨
    else
        printf("거짓\n");
        mainrr();
 
    return 0;
}



#include <stdio.h>
 
int mainrr()
{
    unsigned char num1 = 1;    //   1: 0000 0001
 
    printf("%u\n", num1 << 1);    //   2: 0000 0010: 2
    printf("%u\n", num1 << 2);    //   4: 0000 0100: 2^2
    printf("%u\n", num1 << 3);    //   8: 0000 1000: 2^3
    printf("%u\n", num1 << 4);    //  16: 0001 0000: 2^4
    printf("%u\n", num1 << 5);    //  32: 0010 0000: 2^5
    printf("%u\n", num1 << 6);    //  64: 0100 0000: 2^6
    printf("%u\n", num1 << 7);    // 128: 1000 0000: 2^7

    return 0;
}


/*
switch (버튼)
{
case 1:    // 콜라 버튼
    콜라를 내보냄
    break;
case 2:    // 사이다 버튼
    사이다를 내보냄
    break;
case 3:    // 환타 버튼
    환타를 내보냄
    break;
default: 
    제공하지 않는 메뉴
    break;
}
*/