#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;

    // 높이 입력 받기
    scanf("%d", &n);

    // 각 줄에 대해
    for (int i = 1; i <= n; i++) {
        // 공백 출력
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // 줄 바꾸기
        printf("\n");
    }

    return 0;
}

/*
int main()
{
    for (int i = 0; i < 5; i++)    // 5번 반복. 바깥쪽 루프는 세로 방향
    {
        for (int j = 0; j < 5; j++)    // 5번 반복. 안쪽 루프는 가로 방향
        {
            printf("j:%d ", j);        // j값 출력
        }

        printf("i:%d\\n", i);      // i값 출력, 개행 문자 모양도 출력
        printf("\n");              // 가로 방향으로 숫자를 모두 출력한 뒤 다음 줄로 넘어감
    }

    return 0;
}
*/