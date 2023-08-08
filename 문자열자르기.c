
/*
#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일

int main1()
{
    char s1[30] = "The Little Prince";  // 크기가 30인 char형 배열을 선언하고 문자열 할당

    char *ptr = strtok(s1, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

    while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
    {
        printf("%s\n", ptr);          // 자른 문자열 출력
        ptr = strtok(NULL, " ");      // 다음 문자열을 잘라서 포인터를 반환
    }

    return 0;
}
*/

/*
The
Little
Prince

 ptr = strtok(ptr, " ");

 The
The
The
The
...
*/

#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일

int main1(){

    char s1[61];
    scanf("%s",s1);

    char *ptr= strtok(s1,".");
    while (ptr !=NULL)
    {
        printf("%s\n", ptr);          // 자른 문자열 출력
        ptr = strtok(NULL, ".");      // 다음 문자열을 잘라서 포인터를 반환
    }
        return 0;
}




#include <stdio.h>
#include <string.h>    // strchr 함수가 선언된 헤더 파일

int main(){

char s1[1001];

scanf("%[^\n]s",s1);

 char *ptr= strtok(s1," .,");
 //공백, 점, 콤마를 기준으로 문자열을 자름
int count=0;
    while (ptr != NULL) {   // strtok 함수의 반환 값이 NULL이 아닌 동안 반복
        if (strcmp(ptr, "the") == 0) {  // ptr이 the일 때
            count++;                    // count를 1 증가시킴
        }
        ptr = strtok(NULL, " .,");   // 다음 토큰을 얻음
    }
printf("%d\n",count);
return 0;
}