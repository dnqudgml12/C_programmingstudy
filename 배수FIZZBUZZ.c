#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(){

    int a,b;
    scanf("%d %d", &a,&b);


    for (a;  a<=b;a++){

        if ( a%5==0 && a %11 ==0){
                printf("%s", "FiZZBUZZ\n");
        }
        


        else if ( a %11 ==0){
                printf("%s", "BUZZ\n");
        }

        else if         ( a%5==0){

            printf("%s", "FiZZ\n");
        }

        else{

        printf("%d\n", a);
        }

    }
    return 0 ;
}

/*
5와 11로 모두 나누어 떨어지면 "FiZZBUZZ"를 출력
5로만 나누어 떨어지면 "FiZZ"를 출력
11로만 나누어 떨어지면 "BUZZ"를 출력
위의 모든 조건에 해당하지 않으면 숫자를 출력

*/

