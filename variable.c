// char, short, int, long => 정수 (저장 할 수 있는 크기가 다름)
// float , doubl 실수
// void 형태가 없는 자료형 (포인터 사용할때,함수의 반환 값 표현시 사용 )

// int num1; 
// int count;
// int Num1;
// int NUM1; 
// int count3 
// int 3count; 사용 못함
// int _3count;
// int _3
// int byte_count;
// int _count;
// int int; 사용 못함
// int long; 사용 못함
// int for; 사용 못함;

#include <stdio.h>

/*
int main(){
    int num1;
    int num2;
    int num3;

    num1=10;
    num2=20;
    num3=30;

    printf("%d %d %d \n", num1, num2, num3);

    return 0; 


}
*/

/*
int main(){
    int num1,num2,num3;
         // int형 이니까 int로 했고 int아니면 다른 것으로 바꿈
    num1=10;
    num2=20;
    num3=30;

    printf('%d %d %d \n', num1,num2,num3);

    return 0;
}

//변수 여러개
*/


// 변수 선언하면서 값 할당

/*
    int num1= 10;
    int num2=20, num3=30;
*/
int main(){



    int num1=10, num2=20, num3=30;

    printf("%d %d %d \n", num1, num2, num3);
    return 0;

    //변수 선언하면서 값 할당하는 것을 초기화 한다함
    //printf 함수에서 문자열 리터럴을 나타내는 것은 큰 따옴표(")입니다. 하지만 여러분의 코드에서 작은 따옴표(')를 사용하였습니다.
}
