//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string>v;
        S+=".";
        string ss="", ans="";
        for(auto &b: S){
            if(b=='.'){v.push_back(ss); ss.clear();}
            else{ss+=b;}
        }
        for(int i=v.size()-1; i>=0; i--){ans+=v[i]+".";}
        ans.pop_back();
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends