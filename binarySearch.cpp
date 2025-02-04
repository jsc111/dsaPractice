#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int num, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (v[mid] == num)
            return mid;

        if (v[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> v = {12, 53, 32, 63, 1, 43, 16, 2, 75, 21, 64};

    sort(v.begin(), v.end());

    int result = binarySearch(v, 5, 0, v.size() - 1);

    if (result == -1) {
        cout << "The element is not present in the given array.";
    } else {
        cout << "The element is present at location: " << result;
    }

    return 0;
}
