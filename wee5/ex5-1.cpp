#include<stdio.h>
int main(){
    int a, b;
    printf("A=> ");
    scanf("%d", &a);
    printf("B=> ");
    scanf("%d", &b);
    if( a > b){
        printf(" 最大值是A \n");
    }else
    printf(" 最大值是B \n");

return 0;
}