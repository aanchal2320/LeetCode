class Solution {
public:
    bool ischeck(string &a,string &b,string &order)
    {
         int i = 0;
        while (i < a.size() && a[i] == b[i]) i++;
        if (a.size() == i) return true;
        else if (b.size() == i) return false;
        return (order.find(a[i]) < order.find(b[i]));
    }
    bool isAlienSorted(vector<string>& words, string order) {
     for(int i=0;i<words.size()-1;i++)
     {
         if(!ischeck(words[i],words[i+1],order))
             return false;
     }
        return true;
    }
};