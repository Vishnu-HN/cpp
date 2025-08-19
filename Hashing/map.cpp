#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre-compute frequencies
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    // Print all frequencies
    cout << "\nFrequencies of elements:\n";
    for (auto it : m) {
        cout << it.first << " --> " << it.second << endl;
    }

    // Queries
    int q;
    cout << "\nEnter total number of queries: ";
    cin >> q;

    while (q--) {
        int num;
        cout << "Enter the number you want to check: ";
        cin >> num;

        // Fetch frequency
        cout << num << " appears " << m[num] << " times in array\n";
    }

    return 0;
}
