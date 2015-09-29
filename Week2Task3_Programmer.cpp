#include <iostream>
using namespace std;

inline int amountOfZero(int);
void assert(int, int);

int main()
{
    //cout << "Enter a number:\t";
    int number;
    //cin >> number;
    //cout << "Amount of zero in the end of the number! is:\t" << amountOfZero(number);
    assert(5, 1);
    assert(25, 6);
    assert(125, 31);
    assert(75, 18);
    assert(1, 0);
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

void assert(int num, int answer)
{
    if (answer == amountOfZero(num)) cout << "OK\n";
    else cout << "FAIL\n";
}
