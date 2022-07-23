// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int longestSubsequence(int n, int a[])
    {
        // code here
        int ma =0;
        unordered_map<int,int> m;
        for(int i=-0;i<n;i++){
            int l=0;
            if(m[a[i]-1]){
                l =m[a[i]-1];
            }
            
            if(m[a[i]+1] && m[a[i]+1] > l){
                l =m[a[i]+1];
            }
            
            m[a[i]] = l+1;
            ma = max(ma,m[a[i]]);
        }
        return ma;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends
