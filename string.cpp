#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    set<int> seen;

    for (int i = 0; i < n; ++i) {
        while (seen.count(sequence[i])) {
            sequence[i]++;
        }
        seen.insert(sequence[i]);
    }

    for (int i = 0; i < n; ++i) {
        cout << sequence[i] << " ";
    }
    cout << endl;

    return 0;
}