#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Left aligned triangle
    cout << "Left Side Triangle:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    // Right aligned triangle
    cout << "\nRight Side Triangle:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++)
            cout << "  ";
        for(int k = 1; k <= i; k++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
