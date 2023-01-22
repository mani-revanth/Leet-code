class Solution {
public:
    vector<vector<string>>v;
    bool is_pal(string a)
    {
        int l=a.length();
        for(int i=0;i<=(l/2);i++)
        {
            if(a[i]!=a[l-i-1])
                return false;
        }
        return true;
    }
    void fun(int x,vector<string>v1,string s,int l)
    {
        if(x==l)
            v.push_back(v1);
        else
        {
            string a="";
            int t=0;
            for(int i=x;i<l;i++)
            {
                a=a+s[i];
                if(is_pal(a))
                {
                    if(t==0)
                    v1.push_back(a);
                    else
                    v1[v1.size()-1]=a;
                    fun(i+1,v1,s,l);
                    t=1;
                }
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>v1;
        fun(0,v1,s,s.length());
        return v;
    }
};