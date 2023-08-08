#include <stdio.h>
#include <stdlib.h>    // atoi 함수가 선언된 헤더 파일

int main1()
{
    char *s1 = "283";   // "283"은 문자열
    int num1;

    num1 = atoi(s1);        // 문자열을 정수로 변환하여 num1에 할당

    printf("%d\n", num1);   // 283

    return 0;
}

/*
283a → 283
283a30 → 283
283! → 283
283!30 → 283
a30 → 0
!30 → 0
abc → 0
!@# → 0

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main12()
{
    char s1[31];
    int num1;
    int num2;
    float num3;
    char *end;

    scanf("%[^\n]", s1);

   // Convert string to integer (hexadecimal)
    num1 = (int)strtol(s1, &end, 16);
    // Convert string to integer
    num2 = (int)strtol(end, &end, 10);
    // Convert string to float
    num3 = strtof(end, NULL);
    

    printf("0x%x\n", num1);
    printf("%d\n", num2);
    printf("%f\n", num3);

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s1[10];
    char s2[20];
    int num1;
    float num2;

    scanf("%d %f", &num1, &num2);

    sprintf(s1,"%d",num1);
    sprintf(s2,"%f",num2);

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}