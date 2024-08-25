#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    } else {
        queue<int> evens, odds;

        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                evens.push(i);
            } else {
                odds.push(i);
            }
        }

        while (!evens.empty()) {
            cout << evens.front() << " ";
            evens.pop();
        }

        while (!odds.empty()) {
            cout << odds.front() << " ";
            odds.pop();
        }

        cout << endl;
    }

    return 0;
}

