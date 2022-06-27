class Solution {
public:
   int minPartitions(string n) {
        char tem = '0';
        for(char c:n){
            if(c > tem) { tem = c;}
        }
        return tem-'0';
    }
};