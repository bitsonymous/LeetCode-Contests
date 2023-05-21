class Solution {
    bool check(vector<int>v,int idx,int s,int fsum){
        if(idx>=v.size()){
            if(fsum == s){
                return true;
            }
        }
        bool ans=false;
        int k=0;
        while(idx<v.size()){
            k=k*10+v[idx];
            if(check(v,idx+1,s,fsum+k)) return true;
			idx++;
        }
        return false;
    }
public:
    int punishmentNumber(int n) {
        int ans=0;
		int i=1;
        while(i<=n){
			vector<int> v;
            int k=i*i;
            while(k){
                v.push_back(k%10);
                k/=10;
            }
            reverse(v.begin(),v.end());
			bool b = check(v,0,i,0);
            if(b){
                ans+=i*i;
            }
			i++;
        }
        return ans;
    }
};
