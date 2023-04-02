class Solution {
public:
    int miceAndCheese(vector<int> reward1, vector<int>& reward2, int k) {
        int n = reward2.size();
        vector<pair<int,int>> d(n);
        vector<int>vect(n,0);
        for(int i=0 ; i<n ; ++i) {
            int x =  reward1[i]-reward2[i];
            d[i] = {x,i};
        }
        
        sort(d.rbegin(),d.rend());
        int ans = 0;
        for(int i=0 ; i<n && k>0 ; ++i) {
            int idx = d[i].second;
            ans +=  reward1[idx];
            vect[idx] = 1;
            k--;
        }
        
        for(int i=0 ; i<n ; ++i) {
            if(!vect[i]) {
                ans += reward2[i];
            }
        }
        
        return ans;
    }
};
