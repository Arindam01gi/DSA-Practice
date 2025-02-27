//https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
//Aproach 1   T.C - O(n^2) S.C - O(1)



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        
        int n = s1.size();
        
        for(int i =0;i < n;i++){
            
            if(s1==s2)
            return true;
            
            char last = s1.back();
            s1.pop_back();
            s1 = last + s1;
 
        }
        
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution sol;
        int result = sol.areRotations(s1, s2);
        if (result) {
            cout << "true" << endl;

        } else {
            cout << "false" << endl;
        }
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends


/***  We need to check better approach because its take time complexity O(n^2) */