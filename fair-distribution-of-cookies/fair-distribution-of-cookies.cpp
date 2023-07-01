class Solution {
public:
    void f(vector<int> &t,vector<int> &s,int i,int k,int &ans) {
        if(i==t.size()) {
            ans=min(*max_element(s.begin(),s.end()),ans);
            return;
        }
        for(int j=0;j<k;j++) {
            s[j]+=t[i];
            f(t,s,i+1,k,ans);
            s[j]-=t[i];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> s(k,0);
        int ans=INT_MAX;
        f(cookies,s,0,k,ans);
        return ans;
    }
};