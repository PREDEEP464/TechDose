#include <iostream>
using namespace std;

int toggleBits(int n, int i) {
    return n ^ (1 << i-1);
}

int main() {
    int n, i;

    cin >> n;
    
    cin >> i;
    
    int result = toggleBits(n, i);
    
    cout << "Original number: " << n << endl;
    cout << "After toggling the " << i << "-th bit: " << result << endl;
    
    return 0;
}