#include<iostream>



using namespace std;

int main()
{
    int i, j;
    for(j=1;j<8;j++){
        for(i=7;i>=j;i--){
        printf("%d",j);
        //cout << i << "*" << j << "= " << i*j <<" " ;
        }
        cout << endl;
    }

    return 0;
}