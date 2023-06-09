class Solution {
public:
    char nextGreatestLetter(vector<char>&s, char t) {
        int low=0,high=s.size()-1,mid;
        if(s.back()<=t) return s[0];
        while(low<high)
        {
            mid=(low+high)/2;
            if(s[mid]>t) high=mid;
            else low=mid+1;
        }
        return s[low];
    }
};