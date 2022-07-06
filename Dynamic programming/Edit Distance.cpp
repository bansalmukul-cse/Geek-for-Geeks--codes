// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    
   int lcs(string s, string t, int m, int n) {
       int dp[m+1][n+1];
       for(int i=0; i<m+1; i++) {
           for(int j=0; j<n+1; j++) {
               if(i==0) {
                   dp[i][j] = j;
               }  
               if(j==0) {
                   dp[i][j] = i;
               }
           }
       }
       for(int i=1; i<m+1; i++) {
           for(int j=1; j<n+1; j++) {
               if(s[i-1] == t[j-1]) {
                   dp[i][j] = dp[i-1][j-1];
               }
               else {
                   dp[i][j] = 1 + min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
               }
           }
       }
       return dp[m][n];
   }
   int editDistance(string s, string t) {
       return lcs(s,t,s.size(),t.size());
   }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
