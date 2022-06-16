#include <iostream>
using namespace std;

typedef struct Time{
    int hr;
    int min;
    int sec;
    int ms;
} ttime;

ttime convert(ttime t){
    if(t.ms > 1000){
        int temp;
        temp = t.ms % 1000;
        t.sec = t.sec + (t.ms)/1000;
        t.ms  = temp;
    }
    if(t.sec > 60){
        int temp;
        temp = t.sec % 60;
        t.min = t.min + (t.sec)/60;
        t.sec = temp;
    }
    if(t.min > 60){
        int temp;
        temp = t.min % 60;
        t.hr = t.hr + (t.min)/60;
        t.min = temp;
    }
    
    
   
    return t;  
}
int main() {
    ttime t1, t;
   
    t1.hr = 2;
    t1.min = 60;
    t1.sec = 60;
    t1.ms  = 1200;
    t1 = convert(t1);
    printf(" correct time expression  =  %d hr %d min %d sec  %d ms \n",t1.hr,t1.min,t1.sec,t1.ms);
}