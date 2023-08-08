#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(){

    int a;
    scanf("%d",&a);
/*
    do //먼저
    {
           a-=1200;
        printf("%d \n",a);
    } while (a>0);

*/
while (a>0)    {
         a-=1200; 
         if (a<0){
            break;
         } 
        printf("%d \n",a);
       
        
        
    }

    return 0;



}