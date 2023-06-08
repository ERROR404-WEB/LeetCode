#define bus auto 
class Solution {
public:
    
    int longestConsecutive(vector<int>&a) {
       set<int>m;
       for(auto i:a) m.insert(i);
       vector<int>b;
       for(auto i:m) b.push_back(i);
       int i,j,n=b.size(),l=0,maxx=0;
       if(n==1) return 1;
       for(i=1;i<n;i++)
       {
           l=1;
           while(i<n and b[i]-b[i-1]==1)
           {
               i++;
               l++;
           }
           maxx=max(maxx,l);
       }
       return maxx;
        
    }
};