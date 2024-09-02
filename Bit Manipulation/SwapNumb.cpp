#include <iostream>
using namespace std;

void swapnum(int& a, int& b) 
{
    a ^= b;
    b ^= a;
    a ^= b;
}

int main() 
{
    int a = 45, b = 22;
    swapnum(a, b);
    cout << "Swapped a: " << a << ", b: " << b << endl;
    return 0;
}