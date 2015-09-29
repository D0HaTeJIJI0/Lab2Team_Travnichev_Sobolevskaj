#include <iostream>
#include <math.h>
using namespace std;

inline float mySin(float,float);
void assert(float, float);

int main()
{
	//cout << "Enter x:\t";
	float x;
	//cin >> x;
	//cout << "\nEnter accurace epselon:\t";
	float epselon;
	//cin >> epselon;
	//cout << "\nmySin(x):\t" << mySin(x,epselon);
	assert(3.14, 0.001);
	assert(1, 0.01);
	assert(3467, 2);
	assert(123456, 0.1);
	assert(1234566756, 0.000001);
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

void assert(float x, float eps)
{
	if (fabs (mySin(x, eps) - sin(x)) <= eps)
		cout << "OK\n";
	else cout << "FAIL\n";
	
}
