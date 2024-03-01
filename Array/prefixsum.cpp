#include<bits/stdc++.h>
using namespace std;

int maxOccurrence(vector<int>& l, vector<int>& r, int n) {
    vector<int> arr(1000, 0);

    for (int i = 0; i < n; i++) {
        arr[l[i]]++;
        arr[r[i] + 1]--;        
    }

    int maxm = arr[0], res = 0;

    for (int i = 1; i < 1000; i++) {
        arr[i] += arr[i-1];
        if (maxm < arr[i]) {
            maxm = arr[i];
            res = i;
        }
    }

    return res;    
}

int main() {
    vector<int> L = {1, 2, 5, 15};
    vector<int> R = {5, 8, 7, 18};

    int n = L.size();

    cout << maxOccurrence(L, R, n) << endl;

    return 0;
}
