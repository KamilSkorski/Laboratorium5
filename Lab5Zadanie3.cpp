#include <iostream>
using namespace std;

int fib(int a);

int main()
{
    int a;
    cout << "Podaj numer wyrazu ciagu: ", cin >> a;
    cout << fib(a);
}

int fib(int a)
{
    if (a == 0)
        return 0;
    if (a < 3)
        return 1;
    return fib(a - 2) + fib(a - 1);
}