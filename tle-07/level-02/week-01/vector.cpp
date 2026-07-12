#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    // three ways to define vectors
    vector<int> arr;
    vector<int> arr1(3);
    vector<int> arr2(3,0); // this {0, 0, 0}

    // push_back v/s emplace_back
    arr1.push_back(10);
    arr1.emplace_back(20); // this much faster
    /* 
       `emplace_back` is often faster than `push_back` 
       because it constructs objects directly in the 
       container’s memory, avoiding temporary object 
       creation and the subsequent copy/move constructor 
       calls. While `push_back` requires a fully constructed 
       object (potentially creating a temporary) and then 
       moves/copies it.
    */
    return 0;
}
