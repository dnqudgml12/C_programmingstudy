/*
#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 정의된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "hello";                      // 문자열 포인터
    char *s2 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당

    strcpy(s2, s1);        // s1의 문자열을 s2로 복사

    printf("%s\n", s2);    // Hello

    free(s2);    // 동적 메모리 해제

    return 0;
}
*/

/*
//문자열 복사하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(){

    char s1[31];
    char s2[31];

    scanf("%s", s1);

    strcpy(s2,s1);
        printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;

    
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[40];

    scanf("%s",s1);

    strcat(s1,"th"); // 문자열 연결 함수


    printf("%s\n", s1);

    return 0;
}
*/

/*
arr[0] = 10;와 int x = arr[1]; 코드의 의미를 분석해보겠습니다.

arr[0] = 10;:

arr[0]은 배열 arr의 첫 번째 요소를 나타냅니다.
= 10;은 첫 번째 요소에 정수값 10을 할당하는 것을 의미합니다.
따라서, 이 코드는 배열 arr의 첫 번째 위치에 값을 10으로 변경합니다.
int x = arr[1];:

arr[1]은 배열 arr의 두 번째 요소를 나타냅니다.
int x는 정수형 변수 x를 선언합니다.
= arr[1];는 배열 arr의 두 번째 요소의 값을 변수 x에 할당합니다.
따라서, 이 코드는 배열 arr의 두 번째 요소의 값을 새로운 변수 x에 저장합니다.
예를 들어, 배열 arr이 {1, 2, 3, 4, 5}로 초기화되었다면, 이 두 코드 줄을 실행한 후의 상태는 아래와 같습니다:

배열 arr: {10, 2, 3, 4, 5}
변수 x: 2
*/
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    /*
    int arr[5] = {1, 2, 3, 4, 5}; 코드의 의미를 분석해보겠습니다.

int arr[5]:

int는 정수형 데이터를 저장하는 데 사용됩니다.
arr는 배열의 이름입니다.
[5]는 배열의 크기를 나타내며, 이 배열은 5개의 int 값을 저장할 수 있습니다.
= {1, 2, 3, 4, 5};:

=은 할당 연산자입니다. 이를 사용하여 배열 arr에 값을 초기화할 수 있습니다.
{1, 2, 3, 4, 5}는 배열의 초기 값들입니다.
이 코드는 배열 arr의 5개 위치에 순서대로 값을 할당합니다.
결과적으로, 이 코드는 크기가 5인 int형 배열 arr을 생성하고, 그 배열에 순서대로 1, 2, 3, 4, 5 값을 할당합니다.

이후에는 arr[0]을 사용하여 첫 번째 값을 (즉, 1) 접근하거나, arr[3]을 사용하여 네 번째 값을 (즉, 4) 접근할 수 있습니다.
    
    */

    int pos = 2; // 제거할 위치. 여기서는 3을 제거
    int i;

    for (i = pos; i < 4; i++) {
        arr[i] = arr[i+1];
    }
    // 마지막 값은 이제 중복되므로 0으로 설정 (또는 다른 값으로 설정)
    arr[4] = 0;

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
