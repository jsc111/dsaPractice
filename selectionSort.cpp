#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v) {
    for (int i = 0; i < v.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(v[i], v[minIndex]);
        }
    }
}

void printArray(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {42,64,2,5,72,44,10};
    

    cout << "Original array: ";
    printArray(v);

    selectionSort(v);

    cout << "Sorted array: ";
    printArray(v);

    return 0;
}
