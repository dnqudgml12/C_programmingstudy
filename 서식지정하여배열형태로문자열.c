#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // sprintf 함수가 선언된 헤더 파일

int main()
{
    char s1[20];    // 크기가 20인 char형 배열을 선언

    sprintf(s1, "Hello, %s", "world!");    // "Hello, %s"로 서식을 지정하여 s1에 저장

    printf("%s\n", s1);    // Hello, world!: 문자열 s1 출력

    main1();

    return 0;
}

//Hello, world!

#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // sprintf 함수가 선언된 헤더 파일

int main1()
{
    char s1[30];    // 크기가 30인 char형 배열을 선언

    sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);    // 문자, 정수, 실수를 문자열로 만듦

    printf("%s\n", s1);    // a 10 3.200000 1.123456e-21: 문자열 s1 출력

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS    // sprintf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>     // sprintf 함수가 선언된 헤더 파일

int main()
{
    int number;
    char name[31], result[40];
    scanf("%d %s", &number,name);



    if (number==1){
        sprintf(result,"%d%s %s", number,"st",name);
    }
    else if (number==2){
        sprintf(result,"%d%s %s", number,"nd",name);
    }
        else if (number==3){
        sprintf(result,"%d%s %s", number,"rd",name);
    }
    else{
        sprintf(result, "%d%s %s", number,"th",name);
    }

/*
    scanf("%d %s", &number, name);

    switch (number)
    {
    case 1:
        sprintf(result, "%dst %s", number, name);
        break;
    case 2:
        sprintf(result, "%dnd %s", number, name);
        break;
    case 3:
        sprintf(result, "%drd %s", number, name);
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        sprintf(result, "%dth %s", number, name);
        break;
    }
이것도 됨
*/
    

    printf("%s\n", result);

    return 0;
}