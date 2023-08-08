#include <stdio.h>

int main()
{
    int num1 = 10;

    printf("%p\n", &num1);    // 008AF7FC: num1의 메모리 주소를 출력
                              // 컴퓨터마다, 실행할 때마다 달라짐

    main1();
    maintwosum();

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1()
{
    int *numPtr1;
    int **numPtr2;
    int num1;

    scanf("%d", &num1);

    numPtr1=&num1;
    numPtr2=&numPtr1;
    /*
    
    numPtr1 = &num1;

num1의 주소값을 numPtr1 포인터 변수에 저장합니다. 이로써, numPtr1은 num1을 가리키는 포인터가 됩니다.
numPtr2 = &numPtr1;

numPtr1의 주소값을 numPtr2 포인터 변수에 저장합니다. 이로써, numPtr2는 numPtr1을 가리키는 포인터의 포인터가 됩니다.
이렇게 되면, **numPtr2는 결국 num1의 값을 가리키게 됩니다. 따라서, printf("%d\n", **numPtr2); 코드에서 num1의 값을 출력하게 됩니다.
    */


    printf("%d\n", **numPtr2);

    return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int maintwosum()
{
    int num1;
    int num2;

    int *numPtr1 = malloc(sizeof(int));
    int *numPtr2 = malloc(sizeof(int));


    scanf("%d %d", &num1, &num2);

    *numPtr1 = num1;
    *numPtr2 = num2;

    printf("%d\n", *numPtr1 + *numPtr2);

    free(numPtr1);
    free(numPtr2);

    return 0;
}

/*
int *numPtr1 = malloc(sizeof(int));

malloc 함수를 사용하여 int의 크기만큼의 메모리를 동적으로 할당하고, 이 메모리의 주소를 numPtr1에 저장합니다. 이렇게 하면, numPtr1은 동적으로 할당된 메모리를 가리키게 됩니다.
int *numPtr2 = malloc(sizeof(int));

마찬가지로 malloc 함수를 사용하여 int의 크기만큼의 메모리를 동적으로 할당하고, 이 메모리의 주소를 numPtr2에 저장합니다.
이후, *numPtr1 = num1;와 *numPtr2 = num2; 코드를 통해 각 포인터가 가리키는 메모리 주소에 num1과 num2의 값을 저장하게 됩니다.

마지막에 free(numPtr1);와 free(numPtr2);를 통해 동적으로 할당한 메모리를 해제합니다.
*/