class Solution {
public:
    void replace(vector<vector<char>>&board,int i,int j)
    {
        board[i][j]='#';
        int dx[]={0,1,-1,0};
        int dy[]={1,0,0,-1};
        for(int k=0;k<4;k++)
        {
            int cx=i+dx[k];
            int cy=j+dy[k];
            if(cx>=0 && cx<board.size() && cy>=0 && cy<board[0].size()&& board[cx][cy]=='O')
            {
                replace(board,cx,cy);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(i==0||i==board.size()-1||j==0||j==board[0].size()-1)
                {
                    if(board[i][j]=='O')
                    {
                        replace(board,i,j);
                    }
                }
            }
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
            }
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]=='#')
                    board[i][j]='O';
            }
        }
    }
};