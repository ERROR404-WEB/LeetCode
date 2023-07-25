class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int i=1;
        while(a[i-1]<a[i]) i++;
        return i-1;
        
    }
};