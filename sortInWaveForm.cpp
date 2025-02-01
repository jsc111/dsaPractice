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



// Approach 2:
// The idea is based on the fact that if we make sure that all even positioned (at index 0, 2, 4, ..) elements are greater than their adjacent odd elements, we don’t need to worry about oddly positioned elements. 

#include<bits/stdc++.h>

using namespace std;

void sortWaveForm(vector<int> v){
    
    for (int i = 0; i < v.size(); i+=2)
    {
        // If current even element is smaller than previous
        if (i>0 && v[i-1] > v[i] )
            swap(v[i], v[i-1]);

        // If current even element is smaller than next
        if (i<v.size()-1 && v[i] < v[i+1] )
            swap(v[i], v[i + 1]);
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
