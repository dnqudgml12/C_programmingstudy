#include <stdio.h>
#include <fcntl.h> // _setmode
#include <io.h>    // _setmode
#include <windows.h> // _setmode

void clearBuffer() {
    while (getchar() != '\n');  // 입력 버퍼 비우기
}

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT); // stdout을 Unicode 모드로 설정
    wprintf(L"한글 출력 테스트\n");

    unsigned int b = -1;
    printf("b 에 들어있는 값을 unsigned int 로 해석했을 때 값 : %u \n", b);

    main2();
    main3();
    main4();
    main5();
    return 0;
}

int main2() {
    unsigned int b = 4294967295;
    printf("b : %u \n", b);

    b++;
    printf("b : %u \n", b);
    return 0;
}

int main3() {
    char a;
    a = 'a';
    printf("a 의 값과 들어있는 문자는? : 값 : %d , 문자 : %c \n", a, a);
    return 0;
}

int main4() {
    double celsius;

    printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
    printf("섭씨 온도를 입력해 주세요 : ");
    scanf("%lf", &celsius);

    clearBuffer();  // 입력 버퍼 비우기

    printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 * celsius / 5 + 32);
    return 0;
}

int main5() {
    char ch;
    short sh;
    int i;
    long lo;
    float fl;
    double du;

    printf("char 형 변수 입력 : ");
    scanf("%c", &ch);
    clearBuffer();  // 입력 버퍼 비우기

    printf("short 형 변수 입력 : ");
    scanf("%hd", &sh);
    clearBuffer();  // 입력 버퍼 비우기

    printf("int 형 변수 입력 : ");
    scanf("%d", &i);
    clearBuffer();  // 입력 버퍼 비우기

    printf("long 형 변수 입력 : ");
    scanf("%ld", &lo);
    clearBuffer();  // 입력 버퍼 비우기

    printf("float 형 변수 입력 : ");
    scanf("%f", &fl);
    clearBuffer();  // 입력 버퍼 비우기

    printf("double 형 변수 입력 : ");
    scanf("%lf", &du);

    printf("char : %c , short : %d , int : %d , long : %ld , float : %f , double : %lf \n", ch, sh, i, lo, fl, du);
    return 0;
}


    /* 이번 강의 정리 

    1. char 은 1 바이트(byte) 정수를 저장하는 타입으로, 주로 문자를 저장하는데 사용된다.
    2. 각 문자들은 아스키 테이블이란 표를 통해 특정 정수와 대응되어 있다.
    3. scanf() 를 통해 사용자로 부터 데이터를 입력 받을 수 있다.
    4. %c 는 문자, %d 는 정수, %f 는 실수 float, %lf 는 실수 double 을 받는다.

    */