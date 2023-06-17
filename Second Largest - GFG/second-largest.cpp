//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	int max=0;
	int print2largest(int arr[], int n) {
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    int smax=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>smax && arr[i]!=max){
	            smax=arr[i];
	        }
	        
	    }
	    return smax==0?-1:smax;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends