class Solution {
public:
    int titleToNumber(string columnTitle) {
        reverse(columnTitle.begin(),columnTitle.end());
  
  int ans=0, n=columnTitle.length();
  
  for(int i=0;i<n;i++)  ans=ans+pow(26,i)*((columnTitle[i]%65)+1);
  
  return ans;
  
    }
};