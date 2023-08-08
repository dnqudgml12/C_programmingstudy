
/*
#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    printf("정수를 입력하세요: ");
    scanf("%d", &num1);    // //정수 1개 표준 입력을 받아서 변수에 저장

    printf("%d\n", num1);    // 변수의 내용을 출력
    main1();
    main3();
   
    return 0;
}
*/
/*
//     ↓ 첫 번째 인수
scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장
//            ↑ 두 번째 인수
printf("%d\n", num1);    // 변수의 내용을 출력
*/

/*

#define _CRT_SECURE_NO_WARNINGS를 넣지 않고 scanf 함수를 사용하면 다음과 같이 컴파일 에러가 발생합니다.
*/


#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main1()
{
    int num1, num2;

    printf("정수를 두 개 입력하세요: ");
    scanf("%d %d", &num1, &num2);    // 값을 두 개 입력받아서 변수 두 개에 저장
    // 띄어 쓰기해서 입력

    printf("%d %d\n", num1, num2);    // 변수의 내용을 출력

    return 0;
}



//실수 입력
#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main3()
{
    float num1;

    printf("실수를 입력하세요: ");
    scanf("%f", &num1);    // 실수를 입력받아서 변수에 저장

    printf("%f\n", num1);    // 변수의 내용을 출력

    return 0;
}

/*


double num1;
scanf("%lf", &num1);    // 자료형이 double일 때는 %lf

long double num2;
scanf("%Lf", &num2);    // 자료형이 long double일 때는 %Lf
*/

#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char c1;

    printf("문자를 입력하세요: ");
    scanf("%c", &c1);    // 문자를 입력받아서 변수에 저장
    // 문자 하나만 입력

    printf("%c\n", c1);    // 변수의 내용을 출력

    return 0;
}