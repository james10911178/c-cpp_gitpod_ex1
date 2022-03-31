#include<stdio.h>

using namespace std;

int main()
{
    int a;

    printf(" please unput a score \n");
    scanf("%d",&a);
    if( 89 < a && a < 101 ){
        printf(" A \n");
    }else if( 79 < a && a < 90 ){
        printf(" B \n ");
    }else if( 69 < a && a < 80 ){
        printf(" C \n");
    }else if( 59 < a && a < 70 ){
        printf(" D \n");
    }else
    printf(" E \n");

    return 0;
}