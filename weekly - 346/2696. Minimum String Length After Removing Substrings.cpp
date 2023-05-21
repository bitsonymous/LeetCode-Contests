class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
		int i = 0, n = s.length();
        while(i<n){
            if(stk.size()==0 ){
                stk.push(s[i]);
            }
      		else if(s[i]=='B'){
                if(stk.size() && stk.top()=='A'){
                    stk.pop();
                }else{
                    stk.push(s[i]);
                }
            }else if(s[i]=='D'){
                if(stk.size() && stk.top()=='C'){
                    stk.pop();
                }else{
                    stk.push(s[i]);
                }
            }else{
                stk.push(s[i]);
            }
			i++;
        }
        return stk.size();
    }
};
