#include <iostream>
using namespace std;

int NWD(int a, int b)
{
	if (b != 0)
		return NWD(b, a % b);
	return a;
}

int main()
{
	int a, b;
	cout << "Podaj liczbe a: ", cin >> a;
	cout << "Podaj liczbe b: ", cin >> b;
	cout << "Najwiekszy wspolny dzielnik liczb a i b = " << NWD(a, b);
}

