#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v;
    int number;
    for (int i = 0; i < N; i++) {
        cin >> number;
        v.push_back(number);
    }

    sort(v.begin(), v.end());

    int Q;
    cin >> Q;
    vector<int>::iterator low;
    for (int i = 0; i < Q; i++) {
        cin >> number;
        low = lower_bound(v.begin(), v.end(), number);
        int position = (low - v.begin() + 1);
        string text = (v.at(position - 1) == number && (position >=1 && position <= N)) ? "Yes " : "No ";
        cout << text << position << endl;
    }
    return 0;
}