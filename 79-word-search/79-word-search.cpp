class Solution {
public:
    bool find(vector<vector<char>>& board,int i,int j,int index,string &word)
    {
        if(index==word.size()-1)
            return true;
        board[i][j]-=65;
        if(i>0 && board[i-1][j]==word[index+1] && find(board,i-1,j,index+1,word))
                return true;
        if(j>0 && board[i][j-1]==word[index+1] && find(board,i,j-1,index+1,word))
                return true;
         if(i<board.size()-1 && board[i+1][j]==word[index+1] && find(board,i+1,j,index+1,word))
                return true;
        if(j<board[0].size()-1 && board[i][j+1]==word[index+1] && find(board,i,j+1,index+1,word))
                return true;
        board[i][j]+=65;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0] && find(board,i,j,0,word))
                {
                    return true;
                }
            }
        }
       return false; 
    }
};