// Rotate array 
// GFG 
// https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// approach 2  Using temporary array ( T.C -o(n) , S.C- (O(n))  )

//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    
    void solve(vector<int>& arr, int d){
        
        int n = arr.size();
        
        // Handle d > n condition
        d %= n;
        
        vector<int>temp(n);
        
        for(int i =0 ;i<n-d;i++){
            temp[i] = arr[d+i];
        }
        
        for(int i =0 ;i<d ;i++){
            temp[n-d+i] =  arr[i];
        }
        
        for(int i =0 ;i<n;i++){
            arr[i] = temp[i];
        }
        
    }
    
    
    void rotateArr(vector<int>& arr, int d) {
        // code here
        solve(arr ,d);
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        // calling rotateArr() function
        ob.rotateArr(arr, d);

        // printing the elements of the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends