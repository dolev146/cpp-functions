// function example
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int r;
    r = a + b;
    return r;
}

int subtraction (int a , int b)
{
    int r;
    r = a-b;
    return r;
}

int main()
{
    int z, x = 5 ,y = 9 ;
    z = addition(5, 3);
    cout << "the result is " << z << "\n";
    z = subtraction( 7 , 2 );
    cout << "the first reuslt is " << z << "\n";
    cout << "the first reuslt is " << subtraction(3,1) << "\n";
    z = 4 + subtraction(x,y);
    cout << "the fourth result is" << z << '\n';

}