#include <iostream>
using namespace std;

typedef struct Time{
    int hr;
    int min;
} ttime;

ttime convert(ttime t1){
    
    if(t1.hr = 14 && 16){
        printf("下午茶時間");
    }else if(t1.min = 20){
        printf("下午茶時間");
    }else
    printf("不是下午茶時間");
    
    return t1;  
}
int main() {
    ttime t1, t;
   
    t1.hr = 2;
    t1.min = 60;
    t1 = convert(t1);
    printf(" correct time expression  =  %d hr %d min \n",t1.hr,t1.min);
}