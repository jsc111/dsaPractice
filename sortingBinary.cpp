// sortingBinary.cpp

// Check out Hoare’s Partition 

// Based on Quick sort
// 1) Initialize two index variables lo and hi: lo = 0, hi = size -1
// 2) Keep incrementing lo index until we see an odd number.
// 3) Keep decrementing hi index until we see an even number.
// 4) If lo < hi then swap arr[lo] and arr[hi]



#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[5] = {1,0,1,0,0};

    int lo = 0;
    int hi = size(arr)-1;

    while(lo < hi){
        while(arr[lo] == 0 && lo < hi)
            lo++;
        while(arr[hi] == 1 && hi > lo)
            hi--;

        if(lo < hi){
            swap(arr[hi], arr[lo]);
            lo++;
            hi--;
        }
    }

    for(auto x: arr){
        cout<<x<<" ";
    }

    return 0;
}