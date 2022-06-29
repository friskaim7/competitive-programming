#include <iostream>
using namespace std;

bool isLeapYear(int X)
{
    if(X <= 1917)
        return (X % 4 == 0);
    return ((X % 400 == 0) || ((X % 4 == 0) && (X % 100 !=0)));
}

string DayOfProgrammer(int Y)
{
    if (Y == 1918)
        return "26.09." + to_string(Y);
    if(isLeapYear(Y))
        return "12.09." + to_string(Y);
    return "13.09." + to_string(Y);    
}

int main()
{
    int Y;
    cin >> Y;
    cout << DayOfProgrammer(Y) << endl;
    return 0;
}
