#include <iostream>

using namespace std;

int f(int n){
    if(n==1){
        return 1;
    }else{
        return n + f(n-1);
        
    }
    return 1;
}

int main()
{
    int n = 15;
    
    printf("%d! = %d \n",n,f(n));
    cout<<"Hello World";
    
    return 0;
}