class Solution {
public:
    int largestAltitude(vector<int>& a) {

        int maxx=0,sum=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            maxx=max(sum,maxx);
        }
        return maxx;
        
    }
};