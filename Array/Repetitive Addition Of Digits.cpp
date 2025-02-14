//Repetitive Addition Of Digits
//GFG
//https://www.geeksforgeeks.org/problems/repetitive-addition-of-digits2221/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//Aproach 1   T.C - O(nLogn) S.C - O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  int solve(int n){
      int sum = 0;
      while(n>0){
          int temp = n %10;
          n = n /10 ;
          sum+=temp;
      }
      
      if(sum > 9){
          solve(sum);
      }
      else{
          return sum;
      }
      
  }
    int singleDigit(int n) {
        // code here
      return solve(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.singleDigit(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends