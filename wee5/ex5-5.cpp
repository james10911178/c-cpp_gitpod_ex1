#include<stdio.h>

int main(){
    int a;
    printf("輸入年分 \n");
    scanf("%d",&a);
    if( a%400==0 || ( a%4==0 && a%100!=0 ) ){
        printf("閏年");
    }else
        printf("不是閏年");
    return 0;
}