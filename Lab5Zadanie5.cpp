#include <iostream>
using namespace std;

float ciag(int a);

int main()
{
	int a;
	cout << "Podaj numer ciagu: ", cin >> a;
	cout << ciag(a);
}

float ciag(int a)
{
	if (a == 1)
	{
		return 1;
	}
	if (a == 2)
	{
		return 0.5;
	}
	if (a > 2)
	{
		return -ciag(a - 1) * ciag(a - 2);
	}
}
