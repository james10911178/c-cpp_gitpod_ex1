#include<stdio.h>
int main(){
    int a, b, c;
    printf("A=> ");
    scanf("%d", &a);
    printf("B=> ");
    scanf("%d", &b);
    printf("兩數之和=> ");
    scanf("%d", &c);
    if( a+b==c ){
        printf(" right \n");
    }else
    printf(" error \n");

return 0;
}