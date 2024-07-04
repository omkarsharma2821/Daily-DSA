#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(int N, vector<int> C) {
    stack<int> chocolateStack;
    vector<int> result;

    for (int i = 0; i < N; ++i) {
        if (C[i] == 0) {
            if (!chocolateStack.empty()) {
                result.push_back(chocolateStack.top());
                chocolateStack.pop();
            }
        } else {
            chocolateStack.push(C[i]);
        }
    }

    return result;
}

int main() {
    int N;
    cin >> N;
    vector<int> C(N);
    for (int i = 0; i < N; ++i) {
        cin >> C[i];
    }

    vector<int> result = solution(N, C);

    for (int chocolates : result) {
        cout << chocolates << endl;
    }

    return 0;
}
