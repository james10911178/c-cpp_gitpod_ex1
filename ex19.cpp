//主函式輸入 輸入 a degree C ，其中自定義一函式，溫度轉換，輸出  b degree F
#include <iostream>

using namespace std;

int add(int x){
    return (x*9/5)+32;
}
int main()
{
    int x=25;
    cout<< "華氏溫度=  " << add(x) << endl;
    
    return 0;
}