#include <stdio.h>
 
int main()
{
    int num1 = 10;
 
    if (num1 == 10)    // num1이 10이면 

    // if (num1 == 10);    // if 조건문 끝에는 세미콜론을 붙이면 안 됨
    {
        printf("10입니다.\n");    // "10입니다."를 출력
    }

    single();
    singlesecond();
    doublesecond();
    ifmain();
    maininput();
     maininputsecond();
 
    return 0;
}



#include <stdio.h>
 
int single()
{
    int num1 = 10;
 
    if (num1 == 10)
        printf("10입니다.\n");    // 실행할 코드가 한 줄이라면 중괄호 생략
 
    return 0;
}


#include <stdio.h>
 
int singlesecond()
{
    int num1 = 5;
 
    if (num1 == 10)
        printf("if 조건문\n");    // if에서 중괄호를 생략하면 첫 번째 줄만 실행됨
        printf("10입니다.\n");    // 중괄호가 없으므로 if의 결과와는 관계 없이 항상 실행됨
 
    return 0;
}


#include <stdio.h>
 
int doublesecond()
{
    int num1 = 10;
 
    if (num1 == 10)
    {   // if로 실행할 코드가 두 줄 이상이라면 중괄호로 묶어줌
        printf("if 조건문\n");
        printf("10입니다.\n");
    }
 
    return 0;
}


#include <stdio.h>


int ifmain(){


    float num1= 0.1f;
    char c1 = 'a';

    if (num1==0.1f){

        printf("0.1입니다.\n");
    }

    if (c1=='a')
    printf("a입니다.\n");

    if (c1==97){
        printf("a입니다.\n");


    }

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>


int maininput(){

    int num1;

    scanf("%d",&num1); // 입력받은 값을 변수에 저장

    if (num1==10){

        printf("10입니다.\n");
    }

    if (num1==20){
        printf("20입니다.\n");
    }

    return 0;

}


#include <stdio.h>
 
int maininputsecond()
{
    char c1 = 'k';
 
    if (c1 == 'k')
    {
        printf("k입니다.\n");
    }
 
    return 0;
}