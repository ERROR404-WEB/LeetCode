class Solution {
public:
    int largestAltitude(vector<int>& a) {

        vector<int>b;
        b.push_back(0);
        for(int i=0;i<a.size();i++)
        {
            b.push_back(b[i]+a[i]);
        }
        return *max_element(b.begin(),b.end());
        
    }
};