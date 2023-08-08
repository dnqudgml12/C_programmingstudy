/*
#include <stdio.h>

int main()
{

   char s1[] = "Beethoven\n9th\nSymphony";

    
    
    printf("%s\n", s1);

    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char s1[10];    // 크기가 10인 char형 배열을 선언
    //글ㅈ 수가 10개인거

    printf("문자열을 입력하세요: ");
    scanf("%s", s1);     // 표준 입력을 받아서 배열 형태의 문자열에 저장

    printf("%s\n", s1);  // 문자열의 내용을 출력

    return 0;
}
*/

/*
int num1;
char s1[10];

scanf("%d", &num1);    // 일반 변수일 때는 변수 앞에 &를 붙임
scanf("%s", s1);       // 배열은 앞에 &을 붙이지 않음

*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(){
    char s1[31], s2[31],s3[31],s4[31];

    scanf("%s %s %s %s",s1,s2,s3,s4);  // 공백까지 포함하여 문자열 입력받기
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    printf("%s\n", s4);

    return 0 ;

}


#include <stdio.h>
#include <string.h>    // strlen 함수가 선언된 헤더 파일

int mainstr()
{
    char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
    char s2[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당

    printf("%d\n", strlen(s1));    // 5: strlen 함수로 문자열의 길이를 구함
    printf("%d\n", strlen(s2));    // 5: strlen 함수로 문자열의 길이를 구함

    return 0;
}



#include <stdio.h>
#include <string.h>    // strlen 함수가 선언된 헤더 파일

int main(){

    char s1[31];

    scanf("%s",s1);

    printf("%d\n", strlen(s1));

    return 0;

    
}

#include <stdio.h>
#include <string.h>  // strcmp 함수를 사용하기 위해 필요

int main() {
    char str1[31], str2[31];
    
    // 두 문자열을 공백으로 구분하여 입력받기
    scanf("%s %s", str1, str2);

    // strcmp 함수로 두 문자열을 비교
    if (strcmp(str1, str2) == 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }

    return 0;
}
