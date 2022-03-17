#include<stdio.h>
int main(){
    int a, b, product;
    a=32,b=5;
/*
    ++x
x++
--x
x--

x = 16 
x >> 1
x >> 2
x << 1
*/

    printf("a =%d \n",a);
    printf("++a =%d \n",++a); // a++ ==> a= a+1 
    printf("a++ =%d \n",a++);
    //a = a++;


    printf("a++ =%d \n",a);

    printf("a =%d \n",a);
    a = ++a;


    printf("++a =%d \n",a);


}