//Alternate Positive Negative
//GFG
//https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//Aproach 1 - Two Pointers   T.C - O(n) S.C - O(n)


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        
        vector<int>pos,neg;
        
        for(int i =0 ;i<arr.size();i++){
            if(arr[i] >= 0){
                pos.push_back(arr[i]);
            }else{
                neg.push_back(arr[i]);
            }
        }
        
        
       int posIdx = 0, negIdx = 0;
       int i = 0;
       
       while(posIdx < pos.size() && negIdx < neg.size()){
           if(i%2== 0){
               arr[i++] = pos[posIdx++];
           }
           else{
               arr[i++] = neg[negIdx++];
           }
       }
       
        while (posIdx < pos.size())
            arr[i++] = pos[posIdx++];

        while (negIdx < neg.size())
            arr[i++] = neg[negIdx++];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends