#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = (long long)n * (n + 1) / 2;

    if (sum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        vector<int> set1, set2;
        long long target = sum / 2;
        
        for (int i = n; i >= 1; i--) {
            if (target >= i) {
                set1.push_back(i);
                target -= i;
            } else {
                set2.push_back(i);
            }
        }

        cout << set1.size() << endl;
        for (size_t i = 0; i < set1.size(); ++i) {
            cout << set1[i] << " ";
        }
        cout << endl;

        cout << set2.size() << endl;
        for (size_t i = 0; i < set2.size(); ++i) {
            cout << set2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

