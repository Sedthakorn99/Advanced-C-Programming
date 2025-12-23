#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    int A[10] = {10,2,7,4,9,5,3,1,6,8}, X;

    for (const auto &x : A) {
        cout << x << " ";
    };
    sort(begin(A), end(A), greater<int>());
    cout << "\nAfter sorting (Descending order): ";
    for (const auto &x : A) {
        cout << x << " ";
    };

}   