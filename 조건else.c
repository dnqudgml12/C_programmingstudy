#include <stdio.h>
 
int main()
{
    int num1 = 5;
 
    if (num1 == 10)
    {
        printf("10�Դϴ�.\n");
    }
    else    // if�� ���ǽ��� �������� ���� �� �ڵ带 ����
    {
        printf("10�� �ƴմϴ�.\n");    // num1�� 10�� �ƴϹǷ� "10�� �ƴմϴ�."�� ��µ�
    }

main3(); 
main333();
main4444();
main555();
main5555();
mainfirst();
mainsecond();
mainthird();
mainifelseifelse();
ifelse();
    return 0;
}


#include <stdio.h>

int main3()
{
    int num1 = 10;

    if (num1 == 10)
    {
        printf("10�Դϴ�.\n");
    }
    else;    // else�� �����ݷ��� ���̸� �� ��
    {
        printf("10�� �ƴմϴ�.\n");    // else�� �����ݷ��� �ٿ����Ƿ� 
                                      // if�� ����ʹ� ���� ���� �׻� �����
    }

    return 0;
}


#include <stdio.h>
 
int main333()
{
    int num1 = 10;
 
    if (num1 == 10)
        printf("10�Դϴ�.\n");
    else
        printf("10�� �ƴմϴ�.\n");    // ������ �ڵ尡 �� ���̶�� �߰�ȣ ����
 
    return 0;
}

#include <stdio.h>

 int main4444()
{
    int num1 = 10;
 
    if (num1 == 10)
    {    // if�� ������ �ڵ尡 �� �� �̻��̶�� �߰�ȣ�� ������
        printf("if ���ǹ�\n");
        printf("10�Դϴ�.\n");
    }
    else
    {    // else�� ������ �ڵ尡 �� �� �̻��̶�� �߰�ȣ�� ������
        printf("else\n");
        printf("10�� �ƴմϴ�.\n");
    }
 
    return 0;
}


#include <stdio.h>
 
int main555()
{
    if (2)    // 0�� �ƴϹǷ� ��
        printf("��\n");
    else
        printf("����\n");
 
    return 0;
}

#include <stdio.h>
 
int main5555()
{
    if (0)    // 0�̹Ƿ� ����
        printf("��\n");
    else
        printf("����\n");
 
    return 0;
}


#include <stdio.h>

int mainfirst()
{
    int num1 = 10;
    int num2 = 20;

    if (num1 == 10 && num2 == 20)    // num1�� 10�̸鼭 num2�� 20�� ��
        printf("��\n");
    else
        printf("����\n");

    return 0;
}



#include <stdio.h>

int mainsecond()
{
int num1 = 10;
int num2 = 20;

if (num1 == 10)
{
    if (num2 == 20)    // if ���ǹ� �ȿ� if ���ǹ��� ��
    {
        printf("��\n");
    }
    else
    {
        printf("����\n");
    }
}
else
{
    printf("����\n");
}

    return 0;
}


#include <stdio.h>

int mainthird()
{
int num1 = 10;
int num2 = 20;

if (num1 == 10)
    if (num2 == 20)
        printf("��\n");
    else
        printf("����\n");
else
    printf("����\n");

    return 0;
}


#include <stdio.h>

int mainifelseifelse()
{
    char c1 = 'c';

    if (c1 == 'a')
        printf("a\n");
    else if (c1 == 'b')
        printf("b\n");
    else if (c1 == 'c')
        printf("c\n");
    else if (c1 == 'd')
        printf("d\n");
    else
        printf("x\n");

    return 0;
}



#include <stdio.h>

int ifelse(){
int num1 = 10;
int num2 = 20;
int num3 = 30;

if (num1 == 10)        // ���ǽ��� ��
{
    printf("10\n");    // ���
}
if (num2 == 20)        // ���ǽ��� ��
{
    printf("20\n");    // ���
}
if (num3 == 30)        // ���ǽ��� ��
{
    printf("30");      // ���
}

    /*
    int num1 = 10;
int num2 = 20;
int num3 = 30;

if (num1 == 10)         // ���ǽ��� ��
{
    printf("10\n");     // ���
}
else if (num2 == 20)    // ���ǽ��� �˻����� �ʰ� �ǳʶ�
{
    printf("20\n");
}
else if (num3 == 30)    // ���ǽ��� �˻����� �ʰ� �ǳʶ�
{
    printf("30");
}
    */
/*
int num1 = 5;
int num2 = 20;
int num3 = 30;

if (num1 == 10)         // ���ǽ��� ����
{
    printf("10\n");
}
else if (num2 == 20)    // ���ǽ��� ��
{
    printf("20\n");     // ���
}
else if (num3 == 30)    // ���ǽ��� �˻����� �ʰ� �ǳʶ�
{
    printf("30");
}
*/

return 0 ;

}


