#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    int bit;
    cin >> bit;

    n = (n | (1<<bit));
    
    cout<<n;

    return 0;
}