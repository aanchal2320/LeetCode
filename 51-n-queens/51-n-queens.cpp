class Solution {
public:
    bool ispossible(int row,int col,vector<string>&board,int n)
    {
        int r=row;
        int c=col;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
             row--;
             col--;
        }
        row=r;
        col=c;
        while(col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        row=r;
        col=c;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    void func(int col,vector<vector<string>>&ans,vector<string>&board,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(ispossible(i,col,board,n))
            {
                board[i][col]='Q';
                func(col+1,ans,board,n);
                board[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        func(0,ans,board,n);
        return ans;
    }
};