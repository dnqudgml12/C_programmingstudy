
/*
#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
    int num1;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &num1);    // //���� 1�� ǥ�� �Է��� �޾Ƽ� ������ ����

    printf("%d\n", num1);    // ������ ������ ���
    main1();
    main3();
   
    return 0;
}
*/
/*
//     �� ù ��° �μ�
scanf("%d", &num1);    // ǥ�� �Է��� �޾Ƽ� ������ ����
//            �� �� ��° �μ�
printf("%d\n", num1);    // ������ ������ ���
*/

/*

#define _CRT_SECURE_NO_WARNINGS�� ���� �ʰ� scanf �Լ��� ����ϸ� ������ ���� ������ ������ �߻��մϴ�.
*/


#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main1()
{
    int num1, num2;

    printf("������ �� �� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);    // ���� �� �� �Է¹޾Ƽ� ���� �� ���� ����
    // ��� �����ؼ� �Է�

    printf("%d %d\n", num1, num2);    // ������ ������ ���

    return 0;
}



//�Ǽ� �Է�
#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main3()
{
    float num1;

    printf("�Ǽ��� �Է��ϼ���: ");
    scanf("%f", &num1);    // �Ǽ��� �Է¹޾Ƽ� ������ ����

    printf("%f\n", num1);    // ������ ������ ���

    return 0;
}

/*


double num1;
scanf("%lf", &num1);    // �ڷ����� double�� ���� %lf

long double num2;
scanf("%Lf", &num2);    // �ڷ����� long double�� ���� %Lf
*/

#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
    char c1;

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%c", &c1);    // ���ڸ� �Է¹޾Ƽ� ������ ����
    // ���� �ϳ��� �Է�

    printf("%c\n", c1);    // ������ ������ ���

    return 0;
}