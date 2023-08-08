#include <stdio.h>

/*
int main()
{
    int num1 = 0;
    int size;

    //size = sizeof num1;    // 변수 num1의 자료형 크기를 구함
    // size= sizeof(num1);
    //size= sizeof int //잘못된 방법
    size= sizeof(int);
    printf("num1의 크기: %d\n", size);

    return 0;
}
*/
/*
sizeof 표현식
sizeof(자료형)
sizeof(표현식)

이번에는 자료형(타입)의 크기를 바이트(byte) 단위로 구하는 sizeof 연산자에 대해 알아보겠습니다. 먼저 sizeof 연산자는 다음과 같은 형식으로 사용합니다.
*/


#include <stdio.h>

int main()
{
    printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
        sizeof(char),        // 1: sizeof로 char 자료형의 크기를 구함
        sizeof(short),       // 2: sizeof로 short 자료형의 크기를 구함
        sizeof(int),         // 4: sizeof로 int 자료형의 크기를 구함
        sizeof(long),        // 4: sizeof로 long 자료형의 크기를 구함
        sizeof(long long)    // 8: sizeof로 long long 자료형의 크기를 구함
    );

    return 0;
}

//char: 1, short: 2, int: 4, long: 4, long long: 8

