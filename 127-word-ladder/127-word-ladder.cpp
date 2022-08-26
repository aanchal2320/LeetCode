class Solution {
public:
    int ladderLength(string beginword, string endword, vector<string>& wordlist) {
        if(find(wordlist.begin(),wordlist.end(),endword)==wordlist.end())
        {
            return 0;
        }
        set<string>s;
        for(auto x:wordlist)
        {
            s.insert(x);
        }
        queue<string>q;
        q.push(beginword);
        int depth=0;
        while(!q.empty())
        {
            depth++;
            int n=q.size();
            while(n--)
            {
            string curr=q.front();
            q.pop();
            for(int i=0;i<curr.size();i++)
            {
                string temp=curr;
                for(char c='a';c<='z';c++)
                {
                    temp[i]=c;
                    if(temp==curr)
                        continue;
                    if(temp==endword)
                        return depth+1;
                    if(s.find(temp)!=s.end())
                        q.push(temp);
                        s.erase(temp);
                }
            }
        }
    }
        return 0;
    }
};