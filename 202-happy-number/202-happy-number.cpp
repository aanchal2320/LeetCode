class Solution {
public:
    int find(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum=sum+((n%10)*(n%10));
            n=n/10;
        }
        return sum;
    } 
    bool isHappy(int n) {
      if(n==1)
          return true;
        unordered_set<int> s;
    while(n!=1)
    {
      int temp=find(n);  
       if(s.find(n)==s.end()){
           s.insert(n);
       }else{
           return false;
       }
        n=temp;
        
    }
        return true;
    }
};