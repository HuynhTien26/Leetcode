#include <iostream>
using namespace std;
int main() {
    int a[] = {2, 7, 11, 15};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 9;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                cout << "[" << a[i] << "," << a[j] << "]" << endl;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "Not have number plus diploma 9 " <<endl;
    }
return 0;
}

