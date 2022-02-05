#include <iostream>
using namespace std;

int silnia(int a);

int main()
{
	int a;
	cout << "Podaj liczbe a: ", cin >> a;
	cout << silnia(a);
}

int silnia(int a)
{
	if (a < 2)
		return 1;

	return a * silnia(a - 1);

}