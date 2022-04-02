#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("A=> ");
    scanf("%d", &a);
    printf("B=> ");
    scanf("%d", &b);
    printf("C=> ");
    scanf("%d", &c);
    printf("D=> ");
    scanf("%d", &d);
    if( a > b && a > c && a > d){
        printf(" A \n");
    }else if( b > a && b > c && b > d){
    printf(" B \n");
    }else if( c > a && c > b && a > d){
    printf(" C \n");
    }else
    printf(" D  \n");
return 0;
}