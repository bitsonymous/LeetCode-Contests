class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            
            if(s[i] != '0') continue;
            
            int counter = 0, sum = 0, flag = 1;
            for(int j=i;j<s.size();j++){
                if(s[j] == '0' && flag){
                    sum -= 1;
                }
                else{
                    flag = 0;
                    sum += 1;
                }
                
                if(flag == 0 && s[j] == '0') break;
                
                counter++;
                if(sum == 0){
                    ans = max(ans,counter);
                    break;
                }
            }
        }
        
        return ans;
    }
};
