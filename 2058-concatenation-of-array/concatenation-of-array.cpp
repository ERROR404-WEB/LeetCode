class Solution {
public:
    vector<int> getConcatenation(vector<int>& a) {
        vector<int>b(a);
        for(auto i:a) b.push_back(i);
        return b;
    }
};