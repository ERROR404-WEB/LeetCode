class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>&a, int k) {
        vector<int>v;
        int i,j=1,n=a.size();
        map<int,int>m;
        for(i=0;i<k;i++) m[a[i]]++;
        auto it=m.end();
        it--;
        v.push_back(it->first);
        int prev=a[0];
        for(i=k;i<n;i++)
        {
            m[prev]--;
            if(!m[prev]) m.erase(prev);
            prev=a[j++];
            m[a[i]]++;
    
            auto it=m.end();
            it--;
            v.push_back(it->first);
         
        }
        return v;
    }
};