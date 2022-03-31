#include<stdio.h>

using namespace std;

int main()
{
    int a,i;

    printf(" please unput a numder \n");
    scanf("%d",&a);
    if(0 > a > 60){
        printf(" 不及格 \n");
    }else
    printf(" 及格 \n");

    return 0;
}