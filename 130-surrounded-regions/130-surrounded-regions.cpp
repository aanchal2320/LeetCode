class Solution {
public:
    void solve(vector<vector<char>>& a) {
    int row=a.size();
    if(row==0)
    {
        return;
    }
    int col=a[0].size();
    if(col==0)
    {
        return;
    }
    queue<pair<int,int>>q;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]=='O' && (i==0 || j==0 || i==row-1 || j==col-1))
            {
                q.push({i,j});
                a[i][j]='&';
            }
        }
    }
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,-1,1};
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
    for(int i=0;i<4;i++)
    {
        int newx=x+dx[i];
        int newy=y+dy[i];
        
        if(newx>=0 && newy>=0 && newx<row && newy<col && a[newx][newy]=='O')
        {
            q.push({newx,newy});
            a[newx][newy]='&';
        }
    }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]=='O')
            {
                a[i][j]='X';
            }
            else if(a[i][j]=='&')
            {
                a[i][j]='O';
            }
        }
    }
    }
};