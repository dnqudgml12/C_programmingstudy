#include <stdio.h>
#include <stdbool.h>    // bool, true, false�� ���ǵ� ��� ����
 
int main()
{
    bool b1 = true;
 
    if (b1 == true)        // b1�� true���� �˻�
        printf("��\n");    // b1�� true�̹Ƿ� ���� ��µ�
    else
        printf("����\n");
        mainrr();
 
    return 0;
}



#include <stdio.h>
 
int mainrr()
{
    unsigned char num1 = 1;    //   1: 0000 0001
 
    printf("%u\n", num1 << 1);    //   2: 0000 0010: 2
    printf("%u\n", num1 << 2);    //   4: 0000 0100: 2^2
    printf("%u\n", num1 << 3);    //   8: 0000 1000: 2^3
    printf("%u\n", num1 << 4);    //  16: 0001 0000: 2^4
    printf("%u\n", num1 << 5);    //  32: 0010 0000: 2^5
    printf("%u\n", num1 << 6);    //  64: 0100 0000: 2^6
    printf("%u\n", num1 << 7);    // 128: 1000 0000: 2^7

    return 0;
}


/*
switch (��ư)
{
case 1:    // �ݶ� ��ư
    �ݶ� ������
    break;
case 2:    // ���̴� ��ư
    ���̴ٸ� ������
    break;
case 3:    // ȯŸ ��ư
    ȯŸ�� ������
    break;
default: 
    �������� �ʴ� �޴�
    break;
}
*/