#include<iostream>

using namespace std;

int main()
{
    int a ,b ,c;
    printf("a=> \n");
    scanf("%d",&a);
    printf("b=> \n");
    scanf("%d",&b);
    printf("c=> \n");
    scanf("%d",&c);
    if(a > b){
        if(b > c){ //a>b,b>c
            printf(" a > b > c \n");
        }else{
            if(a < c){
                printf(" c > a > b \n");
            }else{
                if(b < c){
                    printf("a > c > b \n");
                }
            }
        }
    }else{
        if ( a > c){ // b>a,a>c
              printf(" b > a > c \n");
        }else{
            if ( b > c){ // b>a,b>c,a<c 
                printf(" b > c > a \n");
            }else{
                if(b < c){
                    printf("c > b > a \n");
                }
            }
        }
    }
}