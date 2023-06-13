class Solution {
public:
    int equalPairs(vector<vector<int>>& a) {
        unordered_map<string,int>m;
        int i,j,n=a.size(),c=0;
        for(i=0;i<n;i++)
        {
            string s="";
            for(j=0;j<n;j++)
            {
                s+=to_string(a[i][j]);
                s+=",";
            }
            m[s]++;
        }
        for(i=0;i<n;i++)
        {
            string s="";
            for(j=0;j<n;j++)
            {
                s+=to_string(a[j][i]);
                s+=",";
            }
           c+=m[s];
        }
        return c;
    }
};