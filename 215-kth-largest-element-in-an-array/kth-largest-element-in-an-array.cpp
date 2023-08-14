class Solution {
public:
    int findKthLargest(vector<int>&a, int k) {
        priority_queue<int,vector<int>,greater<int>> p;
        for(auto i:a)
            p.push(i);
        while(p.size()!=k)
            p.pop();
        return p.top();
       
    }
};