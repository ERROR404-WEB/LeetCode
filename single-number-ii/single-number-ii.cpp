class Solution {
public:
    int singleNumber(vector<int>&a) {
        int i,j;
        map<int,int>m;
        for(i=0;i<a.size();i++) m[a[i]]++;
        for(auto i:m)
        {
            if(i.second<3) return i.first;
        }
        return -1;
        
    }
};