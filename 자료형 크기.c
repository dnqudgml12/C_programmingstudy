/*
#include <stdio.h>

int main()
{
    float num1 = 0.0f;
    double num2 = 0.0;
    long double num3 = 0.0l;

    printf("float: %d, double: %d, long double: %d\n",
        sizeof(num1),     // 4: sizeof로 float 변수의 자료형 크기를 구함
        sizeof(num2),     // 8: sizeof로 double 변수의 자료형 크기를 구함
        sizeof(num3)      // 8: sizeof로 long double 변수의 자료형 크기를 구함
    );

    return 0;
}

/*
float는 4바이트, double과 long double은 8바이트입니다(64비트 리눅스, OS X에서는 long double이 16바이트이며 IEEE 754 4배정도 부동소수점입니다).
*/




#include <stdio.h>
#include <float.h>    // 실수 자료형의 양수 최솟값, 최댓값이 정의된 헤더 파일

int main()
{
    float num1 = FLT_MIN;           // float의 양수 최솟값
    float num2 = FLT_MAX;           // float의 양수 최댓값
    double num3 = DBL_MIN;          // double의 양수 최솟값
    double num4 = DBL_MAX;          // double의 양수 최댓값
    long double num5 = LDBL_MIN;    // long double의 양수 최솟값
    long double num6 = LDBL_MAX;    // long double의 양수 최댓값

    printf("%.40f %.2f\n", num1, num2);    // 0.0000000000000000000000000000000000000118 소수점이하 40자리
                                           // 340282346638528859811704183484516925440.00 소수점이하 2자리

    printf("%e %e\n", num3, num4);         // 2.225074e-308 1.797693e+308 
    printf("%Le %Le\n", num5, num6);       // 2.225074e-308 1.797693e+308
 
    return 0;
}


/*
double, long double 최소, 최댓값들은 소수점 이하 자리가 매우 길기 때문에 printf 함수에서 서식 지정자로 %e, %Le를 사용하여 지수 표기법으로 출력해보았습니다. 참고로 리눅스에서 LDBL_MIN, LDBL_MAX 값은 3.362103e-4932, 1.189731e+4932입니다.

*/