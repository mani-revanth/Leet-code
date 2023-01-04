class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& a, int k) {
        unordered_map<int,unordered_map<int,int>>m;
        map<int,int>m1;
        int i,j,l,n,x,y,z,t;
        n=a.size();
        for(i=0;i<n;i++)
        {
            if(m[a[i][0]][a[i][1]]==0)
            {
                m1[a[i][0]]++;
                m[a[i][0]][a[i][1]]=1;
            }
        }
        unordered_map<int,int>m2;
        for(auto b=m1.begin();b!=m1.end();b++)
            m2[(*b).second]++;
        vector<int>v;
        for(i=0;i<k;i++)
            v.push_back(m2[i+1]);
        return v;
    }
};