#include <stdio.h>

int main()
{
    int  b,a[6] = {7,4,12,9,65,8};
    int *p;
    int  i;
    
    b = a[0];
    p = &b;
    printf("please input a num:\n");
    scanf("%d",&b);
    printf("b = %d \n",b);
    printf("b = %x \n",&b);
    
    printf("b = %d \n",p);
    printf("b = %x \n",p);
    
    p = a;
    for(i=0;i < 6;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
    for(i=0;i < 6;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
    return 0;
}
