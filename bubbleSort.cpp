#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> &v){

    for(int i = v.size()-1; i>=0; i--){
        int swapped = 0;
        for(int j = 0; j< v.size()-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                swapped = 1; 
            }
        }

        if(swapped == 0)
            break;
    }

    for(auto x: v){
        cout<<x<<" ";
    }
}


int main(){

    vector<int> v = {12, 35, 23, 1, 6, 26, 9};

    bubbleSort(v);

    return 0;
}