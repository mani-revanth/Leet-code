class Solution {
public:
    string s1;
    bool check(int x,int y,int z,string s)
    {
        int l=0,len=s.length(),t=0;
        s1="";
        //cout<<x<<" "<<y<<" "<<z<<"\n";
        if(s[0]=='0' && x!=1)
            return false;
        for(int i=0;i<len;i++)
        {
            if(i==x || i==y || i==z)
            {
                s1=s1+"."+s[i];
                if(l>255)
                    return false;
                if(s[i]=='0')
                {
                    //cout<<s1<<"\n";
                    if(i==x && (i+1)!=y)
                        return false;
                    else if(i==y && (i+1)!=z)
                        return false;
                    else if(i==z && (i+1)!=len)
                        return false;
                }
                l=(s[i]-'0');
            }
            else
            {
                t++;
                s1=s1+s[i];
                l=l*10+(s[i]-'0');
            }
        }
        //cout<<s1<<"  "<<l<<"\n";
        if(l>255)
            return false;
        else
            return true;
    }
    vector<string> restoreIpAddresses(string s) {
        int i,j,k,l,m,n,x,y,z,t;
        l=s.length();
        vector<string>v;
        if(l>12 || l<4)
            return v;
        else
        {
            for(i=1;i<=l-3;i++)
            {
                for(j=i+1;j<=l-2;j++)
                {
                    for(k=j+1;k<=l-1;k++)
                    {
                        if(check(i,j,k,s))
                        {
                            v.push_back(s1);
                        }
                    }
                }
            }
            return v;
        }
    }
};