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


/*

#include <stdio.h>
#include <string.h>  // strcmp 함수를 사용하기 위해 필요

int main() {
    char str1[31], str2[31];
    
    // 두 문자열을 공백으로 구분하여 입력받기
    scanf("%30s %30s", str1, str2);

    // strcmp 함수로 두 문자열을 비교하고 그 값을 출력
    printf("%d\n", strcmp(str1, str2));

    return 0;
}

//리눅스 환경
*/