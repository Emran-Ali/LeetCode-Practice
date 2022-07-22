class Solution {
public:
    int myAtoi(string s) {
        
        int  n=s.size(),si=1;
        long int re=0;
        bool di=false;
        for(int i=0; i<n; i++)
        {
            if(s[i]==' ' )
            {
                if(di)
                    return si*re;
                
                continue;
            }
                
            
            
            if(s[i]=='-' && isdigit(s[i+1]))
            {
                if(di)
                    return si*re;
                si=-1;
                continue;
            }
            else if(s[i]=='+' && isdigit(s[i+1]))
            {
                if(di)
                    return si*re;
                
                continue;
            }
            // else
            //     return 0;
                
            
            if(isdigit(s[i]))
            {
                di=true;
                
                re=re*10+ (s[i]-'0');
                
                if(re>=2147483648 && si==-1)
                    return -2147483648;
                else if(re>=2147483647 && si==1)
                    return 2147483647;
            }
            
            else
                return si*re;
                 
        }
        return si*re;
        
    }
};
Time Coplexity: O(n);
Space Complexity: O(n);