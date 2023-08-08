class Solution {
public:
    int search(vector<int>& a, int t) {
        auto i=find(a.begin(),a.end(),t);
        return (i!=a.end()) ? i-a.begin() :-1;
    }
  
};