#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main1()
{
    char word[30];               // 단어를 저장할 배열
    int length;                  // 문자열 길이
    bool isPalindrome = true;    // 회문 판별값을 저장할 변수, 초깃값은 true

    printf("단어를 입력하세요: ");
    scanf("%s", word);

    length = strlen(word);    // 문자열의 길이를 구함
    
    // 0부터 문자열 길이의 절반만큼 반복
    for (int i = 0; i < length / 2; i++)
    {
        // 왼쪽 문자와 오른쪽 문자를 비교하여 문자가 다르면
        if (word[i] != word[length - 1 - i])
        {
            // 회문이 아님
            isPalindrome = false;
            break;
        }
    }

    printf("%d\n", isPalindrome);    // 회문 판별값 출력

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS  // Visual Studio
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void del_space(char s[])
{
	char* str = (char*)malloc(sizeof(s));
	int i, k = 0;

	for (i = 0; i < strlen(s); i++)
		if (s[i] != ' ') str[k++] = s[i];

	str[k] = '\0';
	strcpy(s, str);
    free(str);  // 메모리 해제
}

int main(){

    char s1[31];
    int length;
    bool isPalindrome = true; 

    scanf("%[^\n]s",s1);

    del_space(s1);
    
    length=strlen(s1);

        // 0부터 문자열 길이의 절반만큼 반복
    for (int i = 0; i < length / 2; i++)
    {
        // 왼쪽 문자와 오른쪽 문자를 비교하여 문자가 다르면
        if (s1[i] != s1[length - 1 - i])
        {
            // 회문이 아님
            isPalindrome = false;
            break;
        }
    }

    printf("%d\n", isPalindrome);    // 회문 판별값 출력
    



    return 0;


}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

    int n;
    char s1[11];

    scanf("%d %s",&n,s1 );

    if (strlen(s1)<n){
        printf("%s","wrong");
    }else{

        for (int i=0; i<strlen(s1) - n+1;i++){

            /*
            여기서 i는 문자열 s1의 시작 인덱스를 나타냅니다.
strlen(s1) - n + 1는 반복의 최대 횟수를 결정합니다. 예를 들어, 문자열이 "hello"이고 n이 3이면 "hel", "ell", "llo"의 3개 조합을 출력해야 합니다. 이 때, 시작 인덱스는 0, 1, 2 총 3개가 됩니다. 그래서 문자열의 길이에서 n을 뺀 다음 1을 더해 반복의 최대 횟수를 얻습니다.
            */
            for(int j=i;j<n+i; j++){
                printf("%c",s1[j]);

                /*
                j는 현재 조합에서 출력할 문자의 인덱스를 나타냅니다.
j의 초기 값은 i로 설정되어 있습니다. 즉, 외부 for-loop에서 설정된 시작 인덱스부터 시작합니다.
j < n+i는 조합의 끝 인덱스를 결정합니다. 예를 들어, i가 1이고 n이 3이면 "ell"을 출력해야 합니다. 이 경우, j의 값은 1, 2, 3을 순차적으로 가지게 되어 "e", "l", "l"을 순서대로 출력합니다.
                */
            }
            printf("\n");

        }


    }

//첫번째 for문은 전체 반복 횟수를 위한 것
// 두번째 for문은 한줄에 n개의 글자를 출력 하기 위한 것
    return 0;


}