#include <stdio.h>
 
int main()
{
    int num1 = 10;
 
    printf("%d\n", num1 == 10);    // 1: num1�� 10�� ������
    printf("%d\n", num1 != 5);     // 1: num1�� 5�� �ٸ���
 
    printf("%d\n", num1 > 10);     // 0: num1�� 10���� ū��
    printf("%d\n", num1 < 10);     // 0: num1�� 10���� ������
 
    printf("%d\n", num1 >= 10);    // 1: num1�� 10���� ũ�ų� ������
    printf("%d\n", num1 <= 10);    // 1: num1�� 10���� �۰ų� ������

    main1();
    main2();
    main333();
    main444();
    main555();
    main5555();
 
    return 0;
}


#include <stdio.h>
 
int main1()
{
    int num1 = 5;
    int num2;
 
    if (num1)          // num1�� ���̸� 
        num2 = 100;    // num2�� 100�� �Ҵ�
    else               // num1�� �����̸�
        num2 = 200;    // num2�� 200�� �Ҵ�
 
    printf("%d\n", num2); // 100: num1�� 5�̹Ƿ� ��. num2���� 100�� �Ҵ��
 
    return 0;
}

/*
#include <stdio.h> 

int main()
{
    int num1 = 5;
    int num2;
 
    num2 = num1 ? 100 : 200;    // num1�� ���̸� num2�� 100�� �Ҵ�, �����̸� num2�� 200�� �Ҵ�
 
    printf("%d\n", num2);    // 100: num1�� 5�̹Ƿ� ��. num2���� 100�� �Ҵ��
 
    return 0;
}
*/

#include <stdio.h>
 
int main2()
{
    int num1 = 10;
    int num2;
 
    num2 = num1 == 10 ? 100 : 200; // num1�� 10�̸� num2�� 100�� �Ҵ�, 10�� �ƴϸ� num2�� 200�� �Ҵ�
 
    printf("%d\n", num2);    // 100: num1�� 10�̹Ƿ� num2���� 100�� �Ҵ��
 
    return 0;
}


#include <stdio.h>
 
int main333()
{
    int num1 = 10;
 
    if (num1 == 10)    // num1�� 10�� ������ �˻�
        printf("10�Դϴ�.\n");
 
    if (num1 != 5)     // num1�� 5�� �ٸ��� �˻�
        printf("5�� �ƴմϴ�.\n");
 
    if (num1 > 10)     // num1�� 10���� ū�� �˻�
        printf("10���� Ů�ϴ�.\n");
 
    if (num1 < 10)     // num1�� 10���� ������ �˻�
        printf("10���� �۽��ϴ�.\n");
 
    if (num1 >= 10)    // num1�� 10���� ũ�ų� ������ �˻�
        printf("10���� ũ�ų� �����ϴ�.\n");
 
    if (num1 <= 10)    // num1�� 10���� �۰ų� ������ �˻�
        printf("10���� �۰ų� �����ϴ�.\n");
 
    return 0;
}

#include <stdio.h>
 
int main444()
{
    float num1 = 0.1f;
    char c1 = 'a';
 
    if (num1 >= 0.09f)   // num1�� �Ǽ� 0.09���� ũ�ų� ������ �˻�
        printf("0.09���� ũ�ų� �����ϴ�.\n");
 
    if (c1 == 'a')       // c1�� ���� a�� ������ �˻�
        printf("a�Դϴ�.\n");
 
    if (c1 == 97)        // c1�� ���� 97�� ������ �˻�
        printf("97�Դϴ�.\n");
 
    if (c1 < 'b')        // c1�� ���� b���� ������ �˻�
        printf("b���� �۽��ϴ�.\n");
    
    return 0;
}


#include <stdio.h>

int main555()
{
    int num1 = 5;

    // �Լ� �ȿ��� ���� ������ ���
    printf("%s\n", num1 == 10 ? "10�Դϴ�." : "10�� �ƴմϴ�."); // num1�� 5�̹Ƿ� "10�� �ƴմϴ�."
                                                                // ���

    return 0;
}

#include <stdio.h>
 
int main5555()
{
    float num1 = 1.2f;
 
    printf("%f\n", num1 > 2.0f ? 3.0f : 4.0f);
 
    return 0;
}