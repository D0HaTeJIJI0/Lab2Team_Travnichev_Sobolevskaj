#include <iostream>
using namespace std;

inline int amountOfZero(int);

int main()
{
    cout << "Enter a number:\t";
    int number;
    cin >> number;
    cout << "Amount of zero in the end of the number! is:\t" << amountOfZero(number); 
    system("pause");
    return 0;
}

int amountOfZero(int num)
{
    int ans = 0, divider = 5;
    while (num > 0)
    {
        ans += num/divider;
        num /= divider;
    }
    return ans;
}
