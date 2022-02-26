#include <iostream>
using namespace std;

int divide(const int a, const int b = 2)
{
    int r;
    r = a / b;
    return (r);
}

int main()
{
    cout << divide(12) << '\n';
    cout << divide(20, 4) << '\n';
}