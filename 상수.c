/*         ↓ 상수
//const int con1 = 10; 
               //  ↑ 리터럴
*/          


#include <stdio.h>

int main()
{
    printf("%d\n", 10);                 // 10: 정수 리터럴
    printf("%f\n", 0.1f);               // 0.100000: 실수 리터럴
    printf("%c\n", 'a');                // a: 문자 리터럴
    printf("%s\n", "Hello, world!");    // Hello, world!: 문자열 리터럴
    main2();
    main3();
    main4();
    main6();
    main7();
 
    return 0;
}


#include <stdio.h>

int main2()
{
    printf("%d\n", 19);        // 19: 10진 정수 리터럴
    printf("0%o\n", 017);      // 017: 8진 정수 리터럴
    printf("0x%X\n", 0x1F);    // 0x1F: 16진 정수 리터럴

    return 0;
}


#include <stdio.h>

int main3()
{
    const int con1 = 1;         // 상수. 선언과 동시에 초기화
    const float con2 = 0.1f;    // 상수. 선언과 동시에 초기화
    const char con3 = 'a';      // 상수. 선언과 동시에 초기화

    printf("%d %f %c\n", con1, con2, con3);    // 1 0.100000 a

    return 0;
}

#include <stdio.h>

int main4()
{
    const int con1 = 1;

    /*con1 = 2;    // 상수에 값을 할당하면 컴파일 에러 발생 

const_assign_error.c(9): error C2166: l-value가 const 개체를 지정합니다.
*/
    /*
    int const con1 = 1;
float const con2 = 0.1f;
char const con3 = 'a';
    */

    printf("%d\n", con1);

    return 0;
}


#include <stdio.h>

int main6()
{
    printf("%ld\n", -10L);                       // long 크기의 정수 리터럴
    printf("%lld\n", -1234567890123456789LL);    // long long 크기의 정수 리터럴

    printf("%u\n", 10U);                         // unsigned int 크기의 정수 리터럴
    printf("%lu\n", 1234567890UL);               // unsigned long 크기의 정수 리터럴

    printf("%lu\n", 10UL);                       // unsigned long 크기의 정수 리터럴
    printf("%llu\n", 1234567890123456789ULL);    // unsigned long long 크기의 정수 리터럴

    return 0;
}


#include <stdio.h>

int main7()
{
    printf("0%lo\n", 017L);             // long 크기의 8진 정수 리터럴
    printf("0%lo\n", 017UL);            // unsigned long 크기의 8진 정수 리터럴
    printf("0x%lX\n", 0x7FFFFFL);       // long 크기의 16진 정수 리터럴
    printf("0x%lX\n", 0xFFFFFFFFUL);    // unsigned long 크기의 16진 정수 리터럴

    return 0;
}


#include <stdio.h>

