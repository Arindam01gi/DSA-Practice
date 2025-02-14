//Remove All Occurrences of Element
//GFG
//https://www.geeksforgeeks.org/remove-element/

//Aproach 1   T.C - O(nLogn) S.C - O(1)

#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& arr, int ele){
    int n = arr.size();
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == ele){
            count++;
        }
    }
    return n-count;
  
}


int main() {
    vector<int> arr = {0, 1, 3, 0, 2, 2, 4, 2};
    int ele = 2;
    cout << removeElement(arr, ele) << endl;
    return 0;
}