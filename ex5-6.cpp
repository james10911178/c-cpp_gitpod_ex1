#include <iostream>
 
int day(int &year, int &month);
 
int main()
{
    int year{};
    int month{};
    std::cout << "请输入年和月(空格隔开):";
    std::cin >> year >> month; 
    std::cout << "该月天数:" << day(year, month) << '\n'; 
    return 0;
}
 
int day(int &year, int &month)
{
    int t{};
     
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        t = 31;
         
    else if(month == 2)
    {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            t = 29;
             
        else
            t = 28;
    }
     
    else
        t = 30;
         
    return t;
}