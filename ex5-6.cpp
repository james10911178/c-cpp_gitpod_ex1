#include <stdio.h>
int main(){
    int a ,b;
 
    printf( "輸入年分 \n");
    scanf( "%d",&a);
    printf("輸入月分 \n");
    scanf("%d",&b);
    if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12){
        printf("31");
         
    }else if(b == 2)
    
        if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
            printf("29");
             
        }else
            printf("28");
    else
        printf("30");
         
    return 0;
}