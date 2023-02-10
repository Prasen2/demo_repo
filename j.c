#include<stdio.h>

int main(){
     int a,b;
     printf("Num1");
     scanf("%d", &a);
     printf("Num2");
     scanf("%d", &b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("Num1 %d", a);
    printf("Num1 %d", b);
     return 0;
}