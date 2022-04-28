//主函式輸入 高與寬，編寫程式，其中自定義一函式，算矩形面積
#include <iostream>

using namespace std;

int add(int x,int y){
    return x*y;
}
int main()
{
    int x=9,y=3;
    cout<< "面積= " << add(x,y) << endl;
    
    return 0;
}