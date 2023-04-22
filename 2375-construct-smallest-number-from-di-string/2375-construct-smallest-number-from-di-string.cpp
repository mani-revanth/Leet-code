class Solution {
public:
    string smallestNumber(string b) {
        string a;
        for(int i=1;i<b.length()+2;i++)
            a=a+to_string(i);
        //cout<<a;
        int x=0;
        for(int i=0;i<b.length();i++)
        {
            if(b[i]=='I')
                x=i+1;
            else
            {
                char c=a[i+1];
                for(int j=i+1;j>x;j--)
                    a[j]=a[j-1];
                a[x]=c;
            }
        }
        return a;
    }
};