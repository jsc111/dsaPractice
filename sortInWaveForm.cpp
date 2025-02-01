// SORTED WAVE FORM IS SOMETHING LIKE: 
// arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] ....



// Naive approach
// O(n log n)
// A idea is to use sorting. First sort the input array, then swap all adjacent elements.
#include<bits/stdc++.h>

using namespace std;

void sortWaveForm(vector<int> v){
    
    sort(v.begin(), v.end()-1);

    for(int i = 0; i< v.size()-1; i+=2){
        swap(v[i], v[i+1]);
    }

    for(auto x: v){
        cout<<x<<" ";
    }

}

int main(){
    vector<int> v = {10, 23, 54, 12, 646, 13, 90};

    sortWaveForm(v);

    return 0;
}

