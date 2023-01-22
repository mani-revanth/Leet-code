class CustomStack {
public:
    vector<int>v;
    int t,maxsize;
    CustomStack(int maxSize) {
        v.clear();
        t=0;
        maxsize=maxSize;
    }
    
    void push(int x) {
        if(t!=maxsize)
        {
            v.push_back(x);
            t++;
        }
    }
    
    int pop() {
        if(t==0)
            return -1;
        else
        {
            int y=v[t-1];
            t--;
            v.pop_back();
            return y;
        }
    }
    
    void increment(int k, int val) {
        int y=0;
        for(int i=0;i<t && i<k;i++)
            v[i]=v[i]+val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */