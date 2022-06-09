#include <iostream>
using namespace std;
typedef struct Distance{
    int m;
    int cm;
} distances;

distances add(distances d1,distances d2){
    distances d = d1;
    
    d.m = d1.m + d2.m;
    d.cm = d1.cm + d2.cm;
    
    if(d.cm > 100){
        int temp;
        temp = d.cm % 100;
        d.m = d.m + (d.cm)/100;
    }
    
    return d;
}
int main() {
         distances d1, d2, d;
   
    d1.m = 2 ;
    d1.cm = 220 ;
    d2.m = 3 ;
    d2.cm = 200 ;
    d = add(d1,d2);
    printf("this distance =  %d m  %d cm \n",d.m,d.cm);
}