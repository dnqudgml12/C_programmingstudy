#include <stdio.h>
 
int main()
{
    int num1 = 10;
 
    if (num1 == 10)    // num1�� 10�̸� 

    // if (num1 == 10);    // if ���ǹ� ������ �����ݷ��� ���̸� �� ��
    {
        printf("10�Դϴ�.\n");    // "10�Դϴ�."�� ���
    }

    single();
    singlesecond();
    doublesecond();
    ifmain();
    maininput();
     maininputsecond();
 
    return 0;
}



#include <stdio.h>
 
int single()
{
    int num1 = 10;
 
    if (num1 == 10)
        printf("10�Դϴ�.\n");    // ������ �ڵ尡 �� ���̶�� �߰�ȣ ����
 
    return 0;
}


#include <stdio.h>
 
int singlesecond()
{
    int num1 = 5;
 
    if (num1 == 10)
        printf("if ���ǹ�\n");    // if���� �߰�ȣ�� �����ϸ� ù ��° �ٸ� �����
        printf("10�Դϴ�.\n");    // �߰�ȣ�� �����Ƿ� if�� ����ʹ� ���� ���� �׻� �����
 
    return 0;
}


#include <stdio.h>
 
int doublesecond()
{
    int num1 = 10;
 
    if (num1 == 10)
    {   // if�� ������ �ڵ尡 �� �� �̻��̶�� �߰�ȣ�� ������
        printf("if ���ǹ�\n");
        printf("10�Դϴ�.\n");
    }
 
    return 0;
}


#include <stdio.h>


int ifmain(){


    float num1= 0.1f;
    char c1 = 'a';

    if (num1==0.1f){

        printf("0.1�Դϴ�.\n");
    }

    if (c1=='a')
    printf("a�Դϴ�.\n");

    if (c1==97){
        printf("a�Դϴ�.\n");


    }

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>


int maininput(){

    int num1;

    scanf("%d",&num1); // �Է¹��� ���� ������ ����

    if (num1==10){

        printf("10�Դϴ�.\n");
    }

    if (num1==20){
        printf("20�Դϴ�.\n");
    }

    return 0;

}


#include <stdio.h>
 
int maininputsecond()
{
    char c1 = 'k';
 
    if (c1 == 'k')
    {
        printf("k�Դϴ�.\n");
    }
 
    return 0;
}