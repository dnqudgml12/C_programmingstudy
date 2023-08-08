#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
    int size;

    // 행렬의 크기를 입력 받습니다.
    scanf("%d", &size);

    // 단위행렬을 출력합니다.
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) { // 주대각선의 경우
                printf("1 ");
            } else { // 주대각선이 아닌 경우
                printf("0 ");
            }
        }
        //printf("\n");
    }

    return 0;
}


/*
for (int i = 0; i < size; i++)는 행을 나타내는 반복문입니다. i는 행의 인덱스를 나타냅니다.

내부의 for (int j = 0; j < size; j++)는 열을 나타내는 반복문입니다. j는 열의 인덱스를 나타냅니다.
*/