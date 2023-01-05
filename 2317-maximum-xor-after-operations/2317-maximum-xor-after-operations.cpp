class Solution {
public:
        int maximumXOR(vector<int>& a) {
        long long int i,j,k,l,n,x,y,z,t;
        l=0;
        n=a.size();
        unordered_map<long long int,long long int>m;
        for(i=0;i<n;i++)
        {
            t=0;
            while(a[i])
            {
                if((a[i]%2)==1)
                    m[t]=1;
                a[i]=a[i]/2;
                t++;
            }
            if(t>l)
                l=t;
        }
        x=0;
        for(i=l-1;i>=0;i--)
        {
            if(m[i]==0)
                x=x*2+0;
            else
                x=x*2+1;
        }
        return x;
    }
};