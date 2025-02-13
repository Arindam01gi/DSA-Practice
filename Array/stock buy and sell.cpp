//Stock Buy and Sell
//GFG
//https://www.geeksforgeeks.org/problems/adding-one2529/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//Aproach 1   T.C - O(n^2) S.C - O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        // code here
        int index = arr.size()-1;
        while(index >=0 && arr[index]==9){
            arr[index--]=0;
        }
        
        if(index < 0){
            arr.insert(arr.begin(),1,1);
        }else{
            arr[index]++;
        }
        
        return arr;
    }
}

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        Solution ob;
        vector<int> result = ob.addOne(nums);

        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

//Aproach 2   T.C - O(n) S.C - O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int max_profit = 0;
        int minSoFar = prices[0];
        
        for(int i =1;i<prices.size();i++){
            minSoFar = min(minSoFar,prices[i]);
            
            max_profit = max(max_profit,prices[i]-minSoFar);
        }
        
        return max_profit;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> prices;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            prices.push_back(number);
        }

        Solution ob;
        int ans = ob.maximumProfit(prices);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends