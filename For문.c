
/*
#include <stdio.h>
int main(){
    int i ;

    for (i=0; i<=100; i++ ){
        printf("Hello, world!\n");
    }

    main11();

    return 0;
}
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);  // 이중 따옴표 사용

    for (; c<='z'; c++){
        printf("%c",c);  // 이중 따옴표 사용
    }

    return 0;
}
