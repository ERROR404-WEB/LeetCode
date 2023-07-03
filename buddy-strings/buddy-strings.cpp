class Solution {
public:
    bool buddyStrings(string a, string b) {

        if(a.size()!=b.size()) return false;

        int c=0;
        unordered_set<char>s(a.begin(),a.end());

        char a1,b1,a2,b2;

        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            {
                c++;
                if(c==1) 
                {
                    a1=a[i];
                    b1=b[i];
                }
                else if(c==2)
                {
                    a2=a[i];
                    b2=b[i];
                }
                else return false;
            }

        }
        if(!c and s.size()!=a.size() ) return true;
        else if(c==2 and a1==b2 and a2==b1) return true;

        return false;
    }
};