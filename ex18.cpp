//主函式輸入 輸入 a ，其中自定義一函式，時間換算，輸出  b 小時 c 分
#include <iostream>

using namespace std;

int add(int a){
    return a/60;
}
int ad(int a){
    return a % 60;
}
int main()
{
    int a=301;
    cout<< add(a) << "時"<< ad(a) << "分" <<endl;

    return 0;
}