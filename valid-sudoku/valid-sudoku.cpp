class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>s;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    string a="row"+to_string(i)+board[i][j];
                    string b="coloumn"+to_string(j)+board[i][j];
                    string c="box"+to_string((i/3)*3+(j/3))+board[i][j];
                    
                    if(s.find(a)==s.end() && s.find(b)==s.end() && s.find(c)==s.end())
                    {
                        s.insert(a);
                        s.insert(b);
                        s.insert(c);
                    }
                   else
                   {
                       return false;
                   }
                }
            }
        }
        return true;
    }
};