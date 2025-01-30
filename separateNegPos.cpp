#include<bits/stdc++.h>

using namespace std;

void segregatedNegPos(vector<int> v){

    stable_partition(v.begin(), v.end(), [](auto a){return a < 0;});

    for(int num: v){
        cout<<num<<" ";
    }
}

int main(){
    vector<int> v = {4,-1,6,-23,7,2,-7,-3,2};
    
    segregatedNegPos(v);
    
    return 0;
}