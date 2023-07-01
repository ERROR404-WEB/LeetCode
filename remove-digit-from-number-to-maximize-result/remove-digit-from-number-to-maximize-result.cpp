class Solution {
public:
    string removeDigit(string s, char d) {

        int n=s.size();
        string ss=s,maxx="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==d)
            {
                string s1=ss.erase(i,1);
                if(maxx=="") maxx=s1;
                else maxx=max(maxx,s1);
                ss=s;
            }
        }
        return maxx;
        
    }
};