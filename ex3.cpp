#include<stdio.h>
int main(){
    float a;
    printf("A=> ");
    scanf("%f", &a);
    printf("周長=%f\n", a*2*3.14);
    printf("面積=%f\n", a*a*3.14);
    return 0;
}