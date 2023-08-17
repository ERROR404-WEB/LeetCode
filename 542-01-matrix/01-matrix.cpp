class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>&a) {
        int i,j,n=a.size(),m=a[0].size();

        vector<pair<int,int>>dir{{1,0},{0,1},{-1,0},{0,-1}};

        queue<pair<int,int>>q;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(!a[i][j]) q.push({i,j});
                else a[i][j]=-1;
            }
        }
    
        while(!q.empty())
        {
            int ii=q.front().first;
            int jj=q.front().second;
            q.pop();

            for(auto it:dir)
            {
                int iii=ii+it.first;
                int jjj=jj+it.second;

                if(iii<0 or jjj<0 or iii>=n or jjj>=m or a[iii][jjj]!=-1)
                 continue;
                a[iii][jjj]=a[ii][jj]+1;
                q.push({iii,jjj});
            }
        }
        return a;

        
    }
};