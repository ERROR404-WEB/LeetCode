class Solution {
public:
string convert(long long int start,long long int end)
{
    if(start==end) return to_string(start);
    string s="";
    s+=to_string(start);
    s+="->";
    s+=to_string(end);
    return s;
}
    vector<string> summaryRanges(vector<int>& a) {
        if(a.size()==0) return {};
        long long int n=a.size(),i,start=a[0],end=a[0],num=a[0];
        vector<string>v;
        for(i=0;i<n;i++)
        {
            if(a[i]!=num)
            {
                string s=convert(start,end);
                v.push_back(s);
                num=a[i];
                start=a[i];
                end=a[i];
            }
            else end=a[i];
            num++;
        }
        v.push_back(convert(start,end));
        return v;

    }
};