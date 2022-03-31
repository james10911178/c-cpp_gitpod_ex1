#include<stdio.h>
int main(){
    int a, b;
    printf("你的年齡=> ");
    scanf("%d", &a);
    printf("你朋友的年齡=> ");
    scanf("%d", &b);
    if( a > b){
        printf(" 你比較老 \n");
    }else
    printf(" 你朋友比較老 \n");

return 0;
}