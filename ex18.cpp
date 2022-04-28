//主函式輸入 輸入 a 小時 b 分， 其中自定義一函式，時間換算，輸出  x 分
#include <iostream>

using namespace std;

int add(int a,int b){
    return (a*60)+b;
}
int main()
{
    int a=2,b=50;
    cout<< add(a,b) << "分 "<< endl;

    return 0;
}