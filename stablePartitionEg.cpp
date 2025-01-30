// stable_partitio(start , end , partition_function)
// start:  the range of elements to reorder
// end:  the range of elements to reorder
// pfn:  User-defined predicate function object that 
// defines the condition to be satisfied if an element is to be classified.
// A predicate takes single argument and returns true or false.
// Return Value: 
// Returns an iterator to the beginning of the elements 
// for which the predicate is false.


#include<bits/stdc++.h>

using namespace std;

void rearrangeEvenOdd(vector<int> v){

    stable_partition(v.begin(), v.end(), [](auto a) {return a%2 == 0;});

    for(int num: v){
        cout<<num<<" ";
    }

}

int main(){

    vector<int> v = {12,11,53,27,23,54,34,75};

    rearrangeEvenOdd(v);

    return 0;
}