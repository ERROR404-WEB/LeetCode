class Solution {
public:
    string largestOddNumber(string s) {
        
        int c=0,maxx=0,i,j;
        string ss="";
        for(i=s.size();i>=0;i--)
        {
            if ((s[i]-'0')&1) break;
        }
        for(j=0;j<=i;j++)
        {
            ss+=s[j];
        }
        return ss;
    }
};