#include <iostream>
using namespace std;

inline double myPi(double);

int main()
{
    cout << "Enter an epselon:\t";
    double epselon;
    cin >> epselon;
    cout << "\nmyPi is:\t" << myPi(epselon);
    system("pause");
    return 0;
}

double myPi(double eps)
{
    int n = 1;
    double ans = 0,member = 1;
    while ((eps/10.0) < member)
    {
        if (n%4 == 1) ans += member;
        else ans -= member;
        n = n+2;
        member = 1.0/(n);
    }
    return 4*ans;
}
