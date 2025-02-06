#include<bits/stdc++.h>
using namespace std;

int partitionIndex(vector<int> &arr, int low, int high){
    int pivot = arr[low];  
    int i = low;  
    int j = high; 

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        
        while(arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;  
}

void qs(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = partitionIndex(arr, low, high);  
        qs(arr, low, pIndex - 1);  
        qs(arr, pIndex + 1, high); 
    }
}

vector<int> quickSort(vector<int> arr){
    qs(arr, 0, arr.size() - 1);  
    return arr;
}

int main() {
    vector<int> arr = {21, 53, 64, 2, 86, 23, 3, 7, 14};  
    
    vector<int> sortedArr = quickSort(arr);

    
    cout << "Sorted Array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
