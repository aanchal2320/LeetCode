class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>ans=board;
       for(int i=0;i<board.size();i++)
       {
           for(int j=0;j<board[i].size();j++)
           {
                int count_live=0;
                //up
               if((i-1)>=0 && j>=0)
               {
                   if(board[i-1][j]==1)
                       count_live++;
               }
               
               //up-left
               if((i-1)>=0 && (j-1)>=0)
               {
                   if(board[i-1][j-1]==1)
                       count_live++;
               }
               
                //up-right
               if((i-1)>=0 && (j+1)<board[i].size())
               {
                   if(board[i-1][j+1]==1)
                       count_live++;
               }
               
               //left
               if((i>=0) && (j-1)>=0)
               {
                   if(board[i][j-1]==1)
                       count_live++;
               }
               
               //right
               if(i>=0 && (j+1)<board[i].size())
               {
                   if(board[i][j+1]==1)
                       count_live++;
               }
               
               //down
               if((i+1)<board.size() && j>=0)
               {
                   if(board[i+1][j]==1)
                       count_live++;
               }
               
               //down-left
               if((i+1)<board.size() && (j-1)>=0)
               {
                   if(board[i+1][j-1]==1)
                       count_live++;
               }
               
               //down-right
               if((i+1)<board.size() && (j+1)<board[i].size())
               {
                   if(board[i+1][j+1]==1)
                       count_live++;
               }
               
               int val=board[i][j];
               if(val==1)
               {
                   if(count_live<2 || count_live>3)
                       ans[i][j]=0;
                   else
                       ans[i][j]=1;
               }
               else
               {
                   if(count_live==3)
                       ans[i][j]=1;
                   else
                       ans[i][j]=0;
               }
           }
       }
        board=ans;
    }
};