#include <bits/stdc++.h>
using namespace std;

void segregate(vector<int>& arr) {
    int lo = 0, hi = arr.size() - 1;

    while (hi >= lo) {
      
        if (arr[lo] % 2 != 0) {
            if (arr[hi] % 2 == 0) {
              
                swap(arr[lo], arr[hi]);
                lo++;
                hi--;
            } else {
                hi--;
            }
        } else {
            lo++;
        }
    }
}

// Driver Code
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    segregate(arr);
    for (int x : arr)
        cout << x << " ";
    return 0;
}