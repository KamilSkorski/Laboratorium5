#include <iostream>
using namespace std;

void Binarne(int liczba)
{
    if (liczba > 0)
        Binarne(liczba / 2);
        cout << liczba % 2;
}


int main()
{
    int liczba;
    cout << "Podaj liczbe do zamiany: ", cin >> liczba;
    Binarne(liczba);

}

