
// https://www.geeksforgeeks.org/program-print-substrings-given-string/

// C++ program to find all the
// substrings of given string
#include <bits/stdc++.h>
using namespace std;

// Function to find all substrings
vector<string> findSubstrings(string &s) {

    // to store all substrings
    vector<string> res;

    for(int i = 0; i < s.length(); i++) {
        for(int j = i; j < s.length(); j++) {
            
            // substr function takes starting index
            // and length as parameters
            res.push_back(s.substr(i, j-i+1));
        }
    }

    return res;
}

int main() {
    string s = "abc";
    vector<string> res = findSubstrings(s);
    for(auto i:res) {
        cout<< i <<" ";
    }
    return 0;
}
