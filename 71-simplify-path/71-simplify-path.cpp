class Solution {
public:
    string simplifyPath(string path) {
        int n=path.length();
        stack<string>s;
                
        if(path[n-1]!='/') 
            path+="/";
            ++n;
            
        int i=1; 
        string ans="";
        string temp="";
        while(i<n){
            
            if(path[i]=='/'){ 
                
                if(temp=="" || temp=="."){
                   
                }
                else if(temp==".."){
                    if(!s.empty()) 
                        s.pop(); 
                }
                else{
                    s.push(temp); 
                }
                
                temp=""; 
            }
            else{
                temp.push_back(path[i]);
            }
            
            ++i; 
        }
        
        while(!s.empty()){ 
            ans="/"+s.top()+ans;
            s.pop();
        }
        
        if(ans.length()==0) 
            ans="/"; 
        
        return ans;
    }
};