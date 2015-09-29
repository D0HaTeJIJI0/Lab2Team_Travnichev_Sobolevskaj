#include <iostream>
#include <math.h>
using namespace std;
const float pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899; 

inline double myPi(double);
void assert(float);

int main()
{
    //cout << "Enter an epselon:\t";
    double epselon;
    //cin >> epselon;
    //cout << "\nmyPi is:\t" << myPi(epselon);
    assert(0.1);
    assert(0.01);
    assert(0.001);
    assert(0.0003);
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

void assert(float eps)
{
    if (fabs(myPi(eps)-pi) <= eps) cout << "OK\n";
    else cout << "FAIL\n";
}
