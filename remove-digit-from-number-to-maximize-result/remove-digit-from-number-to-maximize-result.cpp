class Solution {
public:
    string removeDigit(string s, char d) {

        int n=s.size();
        string ss=s,maxx="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==d)
            {
                ss.erase(i,1);
                maxx=max(maxx,ss);
                ss=s;
            }
        }
        return maxx;
        
    }
};