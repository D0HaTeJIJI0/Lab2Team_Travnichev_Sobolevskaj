#include <iostream>
#include <math.h>
using namespace std;

inline float mySin(float,float);

int main()
{
	cout << "Enter x:\t";
	float x;
	cin >> x;
	cout << "\nEnter accurace epselon:\t";
	float epselon;
	cin >> epselon;
	cout << "\nmySin(x):\t" << mySin(x,epselon);
	system("pause");
	return 0;
}

inline float mySin(float x,float epselon)
{
	float answer = 0,member = x;
	int n = 1;
	while (fabs(member) > epselon)
	{
		if (n%4 == 1) answer += member;
		else answer -= member;
		member *= (x*x)/(++n)/(++n);
	}
	return answer;
}
