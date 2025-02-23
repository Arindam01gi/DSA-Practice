//Missing Range
//GFG
// https://www.geeksforgeeks.org/problems/missing-ranges-of-numbers1019/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//Aproach 1   T.C - O(nLogn) S.C - O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> missingRanges(vector<int> &arr, int lower, int upper) {
        // code here
        int n = arr.size();
        vector<vector<int>>res;
        
        if(lower < arr[0]){
            res.push_back({lower,arr[0]-1});
        }
        
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]> 1){
                res.push_back({arr[i]+1, arr[i+1]-1});
            }
        }
        
        if(n>0 && upper > arr[n-1]){
            res.push_back({arr[n-1]+1 ,upper});
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        Solution ob;
        getline(cin, str);
        int lower = stoi(str);
        getline(cin, str);

        int upper = stoi(str);
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;

        int x;
        while (ss >> x)
            arr.push_back(x);
        vector<vector<int>> res = ob.missingRanges(arr, lower, upper);
        if (res.empty()) {
            cout << "[]" << endl;
        } else {
            for (const vector<int> &v : res) {
                cout << v[0] << " " << v[1] << endl;
            }
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends