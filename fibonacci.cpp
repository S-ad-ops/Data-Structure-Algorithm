#include <iostream>
using namespace std;

int main() {
    int n = 10;   // number of terms
    int a = 0, b = 1;

    cout << "Fibonacci Series up to " << n << " terms:" << endl;

    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    cout << endl;
    return 0;
}
