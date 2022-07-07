// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int dp[1001][1001];
    int solve(string a,string b,string c,int n,int m,int l){
        if(l==0)return 1;
        if(dp[n][m]!=-1)return dp[n][m];
        int x=0;
        int y=0;
        if(n-1>=0&&a[n-1]==c[l-1])x=solve(a,b,c,n-1,m,l-1);
        if(m-1>=0&&b[m-1]==c[l-1])y=solve(a,b,c,n,m-1,l-1);
        return dp[n][m]=x|y;
    }
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        memset(dp,-1,sizeof(dp));
        return solve(A,B,C,A.size(),B.size(),C.size());
    }

};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}  // } Driver Code Ends
