// Wave Array
//GFG
// https://www.geeksforgeeks.org/problems/wave-array-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//Aproach 1   T.C - O(nLogn) S.C - O(1)


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// #include <algorithm>


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to sort the array into a wave-like array.
    void solve(vector<int>& arr){
        
        sort(arr.begin(),arr.end());
        for(int i =0 ;i<arr.size()-1;i+=2){
            swap(arr[i],arr[i+1]);
        }
        
    }
    
    
    void convertToWave(vector<int>& arr) {
        // code here
        int n = arr.size();
        solve(arr);
    }
};

//{ Driver Code Starts.

int main() {

    int t, n;
    cin >> t; // Input testcases
    cin.ignore();
    while (t--) // While testcases exist
    {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        sort(a.begin(), a.end());
        Solution ob;
        ob.convertToWave(a);

        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";

        cout << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends


//Approach 2 T.C - O(n) S.C- O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// #include <algorithm>


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to sort the array into a wave-like array.
    void solve(vector<int>& arr){
        for(int i =0 ;i <arr.size();i+=2){
            
            if(i > 0 && arr[i] < arr[i-1]){
                swap(arr[i-1],arr[i]);
            }
            
            if(i<arr.size()-1 && arr[i] < arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
            
            
        }
    }
    
    
    
    void convertToWave(vector<int>& arr) {
        // code here
        
        solve(arr);
    }
};

//{ Driver Code Starts.

int main() {

    int t, n;
    cin >> t; // Input testcases
    cin.ignore();
    while (t--) // While testcases exist
    {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        sort(a.begin(), a.end());
        Solution ob;
        ob.convertToWave(a);

        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";

        cout << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends