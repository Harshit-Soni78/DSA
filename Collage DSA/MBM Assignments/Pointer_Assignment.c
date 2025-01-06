#include<stdio.h>
int main(){
    int a=5;
    int *p1=&a;
    int**p2=&p1;
    int***p3=&p2;
    printf("The value of a is %d\n",a);
    printf("The value of p1 (address of a) is %d\n",p1);
    printf("The value of a is %d\n",*p1);
    printf("The value of p2 is (Address of p1) %d\n",p2);
    printf("The value of address of a is %d\n",*p2);
    printf("The value of a is %d\n",**p2);
    printf("%d , %d ,%d , %d \n",***p3, **p3 , *p3 , p3);
return 0;
}