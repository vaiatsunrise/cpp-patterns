#include <iostream>
using namespace std;

int main() {
    int n = 5, num = 1;
    cout << "\nFloyd's Triangle:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            cout << num++ << " ";
        cout << endl;
    }
    return 0;
}
