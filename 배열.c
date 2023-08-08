#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int numArr[5];
    int smallestNumber;

    scanf("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);

      int temp; // 두 값을 바꿀 때 사용할 변수

  int length= sizeof(numArr)/sizeof(int); //배열 길이값

for(int i=0; i<length-1;i++){ //첫번째 배열부터 순서대로 점검, 마지막 값은 뒤에 바꿀 숫자가 없으니 반복 안해줘도 됨.

for(int j=0; j<length-1;j++){ // >로하면 오름차순

if(numArr[j]>numArr[j+1]){  //첫번째값과 두번째 값을 비교했을때 두번째 값이 더 크면 서로 자리를 바꿔준다

temp = numArr[j];

numArr[j]=numArr[j+1];

numArr[j+1]=temp;

}

}

}



    smallestNumber=numArr[0];

    printf("%d\n", smallestNumber);

    return 0;
}

/*

1. 변수를 서로 바꾸는 방법

두개의 변수만 있으면 서로 바꿀수 없다. A=b ,b=a 즉 같은 값이 나오게 된다.

이때 하나의 변수를 추가해주면 서로 바꿀수 있다

예를들면

Int a=15;

Int b=10;이라는 두개의 변수값을 서로 바꾸고 싶을 때

Int temp; 변수값을 저장할 수 있는 temp변수를 추가한 뒤,

메인 함수 안에서 

temp = a; //temp값에 a를 넣어두고

a = b; //a의 값을 b의 값으로 변경한 뒤

b = temp; //b값에 a 값이 들어있는 temp를 넣어주면 된다.

너무쉽죠?ㅋㅋ

2.버블정렬

이웃한  두수를 비교하여 정렬하는 방법, 매번 반복이 일어나 비효율적이고 오래걸린다.

그러나 구현하는 게 매우 쉽다. 서로 자리를 바꾸기만 하면 되기 때문이다.
*/

// 전치행렬
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int matrix[5][5];

    scanf("%d %d %d %d %d", 
        &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
    scanf("%d %d %d %d %d", 
        &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
    scanf("%d %d %d %d %d", 
        &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
    scanf("%d %d %d %d %d", 
        &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
    scanf("%d %d %d %d %d", 
        &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);

int temp[5][5];

// 원래 matrix의 값을 임시 행렬 temp에 복사합니다.
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        temp[i][j] = matrix[i][j];
    }
}

// 임시 행렬 temp의 값을 기반으로 matrix의 값을 전치합니다.
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        matrix[j][i] = temp[i][j];
    }
}

// 전치된 matrix를 출력합니다.
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        printf("%d ", matrix[i][j]);  // 전치행렬도 temp 변수를 통해서 임의로 값을 넣은 뒤 
        // 배열 안에 순서 바꾸는 형식으로 한다.
    }
    printf("\n");
}

    return 0;
}



#include <stdio.h>



