#include <iostream>
using namespace std;

typedef struct Time{
    int hr;
    int min;
} ttime;

ttime convert(ttime t){
    if(t.min > 60){
        int temp;
        temp = t.min % 60;
        t.hr = t.hr + (t.min)/60;
        t.min = temp;
    }
    if(t.hr < 15 && t.min < 20 || t.hr > 15 && t.min > 20){
        printf("不是下午茶時間");
    }else
    printf("下午茶時間");
    
    return t;  
}
int main() {
    ttime t1, t;
   
    t1.hr = 14;
    t1.min = 20;
    t1 = convert(t1);
    printf(" correct time expression  =  %d hr %d min \n",t1.hr,t1.min);
}