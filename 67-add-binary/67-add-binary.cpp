class Solution {
public:
    string addBinary(string a, string b) {
       int l1=a.length();
       int l2=b.length();
       int i=l1-1;
       int j=l2-1;
        int carry=0;
        string result;
        while(i>=0||j>=0)
        {
            int sum=carry;
            if(i>=0)
                sum+=a[i--]-'0';
            if(j>=0)
                sum+=b[j--]-'0';
            carry=sum>1?1:0;
            result+=to_string(sum%2);
        }
        if(carry)
            result+=to_string(carry);
            reverse(result.begin(),result.end());
        return result;
    }
};