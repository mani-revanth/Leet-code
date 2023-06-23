//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    void fun(vector<vector<int>> &v1,int i,int j,vector<vector<char>>&a,int n,int m)
    {
        if((i>=0 && i<n) && (j>=0 && j<m))
        {
            if(v1[i][j]==0 && a[i][j]=='1')
            {
                v1[i][j]=1;
                fun(v1,i+1,j,a,n,m);
                fun(v1,i,j+1,a,n,m);
                fun(v1,i-1,j,a,n,m);
                fun(v1,i,j-1,a,n,m);
                fun(v1,i-1,j-1,a,n,m);
                fun(v1,i-1,j+1,a,n,m);
                fun(v1,i+1,j-1,a,n,m);
                fun(v1,i+1,j+1,a,n,m);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& a) {
        int n=a.size(),m=a[0].size(),k=0;
        vector<vector<int>>v1(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v1[i][j]==0 && a[i][j]=='1')
                {
                    k++;
                    fun(v1,i,j,a,n,m);
                }
            }
        }
        return k;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends