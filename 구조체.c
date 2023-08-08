#include <stdio.h>

struct Dashboard {
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;
};

int main()
{
    struct Dashboard d1;
   

    d1.speed = 80;
    d1.fuel = 'F';
    d1.mileage = 5821.442871;
    d1.engineTemp = 200;
    d1.rpm = 1830;
    

    printf("Speed: %dkm/h\n", d1.speed);
    printf("Fuel: %c\n", d1.fuel);
    printf("Mileage: %fkm\n", d1.mileage);
    printf("Engine temp: %d℃\n", d1.engineTemp);
    printf("RPM: %d\n", d1.rpm);

    return 0;
}

/*

#include <stdio.h>

struct Dashboard {
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;
};

int main()
{
    struct Dashboard d1 = {80, 'F', 5821.442871, 200, 1830}; // 이렇게 초기화 할 수 있습니다.

    printf("Speed: %dkm/h\n", d1.speed);
    printf("Fuel: %c\n", d1.fuel);
    printf("Mileage: %.2fkm\n", d1.mileage);   // 소수점 2자리까지 출력하도록 수정
    printf("Engine temp: %d℃\n", d1.engineTemp);
    printf("RPM: %d\n", d1.rpm);

    return 0;
}
*/

#include <stdio.h>


typedef struct  {
    int speed;
    char fuel;
    float mileage;
    int engineTemp;
    int rpm;
} Dashboard;



int main()
{
    Dashboard d1;
   

    d1.speed = 80;
    d1.fuel = 'F';
    d1.mileage = 5821.442871;
    d1.engineTemp = 200;
    d1.rpm = 1830;
    

    printf("Speed: %dkm/h\n", d1.speed);
    printf("Fuel: %c\n", d1.fuel);
    printf("Mileage: %fkm\n", d1.mileage);
    printf("Engine temp: %d℃\n", d1.engineTemp);
    printf("RPM: %d\n", d1.rpm);

    return 0;
}