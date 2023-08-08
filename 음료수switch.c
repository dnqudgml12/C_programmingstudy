#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char memu;

    scanf("%c", &memu);

    switch (memu)
    {
    case 'f':
        printf("환타\n");
        break;
    case 'c':
        printf("콜라\n");
        break;
    case 'p':
        printf("포카리스웨트\n");
        break;
    default:
        printf("판매하지 않는 메뉴\n");
        break;
    }

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
}*/