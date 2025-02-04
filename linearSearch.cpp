#include<bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> v, int num){
    
    for(int i=0; i<v.size(); i++){
        if(num == v[i]){
            return i;
        }
    }

    return -1;
}


int main(){
    vector<int> v = {1,2,53,64,23,75,23,5,6,4,75,3};

    if(linearSearch(v,5) == -1){
        cout<<"The element is not present in the give array";
    } 
    else{
        cout<<"The element is present at location: "<<linearSearch(v,5);
    }



    return 0;
}