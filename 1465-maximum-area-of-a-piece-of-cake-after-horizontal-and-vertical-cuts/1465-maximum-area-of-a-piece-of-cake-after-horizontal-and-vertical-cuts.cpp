class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
       horizontalCuts.push_back(0);
       horizontalCuts.push_back(h);
       verticalCuts.push_back(0);
       verticalCuts.push_back(w);
        
      sort(horizontalCuts.begin(),horizontalCuts.end());
      sort(verticalCuts.begin(),verticalCuts.end());
        
      long maxi1=0,maxi2=0;
    
      for(int i=1;i<horizontalCuts.size();i++)
      {
         if(maxi1<horizontalCuts[i]-horizontalCuts[i-1])
         {
             maxi1=horizontalCuts[i]-horizontalCuts[i-1];
         }
      }
      for(int i=1;i<verticalCuts.size();i++)
      {
          if(maxi2<verticalCuts[i]-verticalCuts[i-1])
          {
              maxi2=verticalCuts[i]-verticalCuts[i-1];
          }
      }
      return (maxi1*maxi2)%(1000000007);
    }
};