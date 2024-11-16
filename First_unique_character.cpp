class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int ans;
        int j;
        for(j=0; j<s.size(); j++){
            if(mp[s[j]]==1){
                ans = j;
                break;
            }
        }
        if(j>=s.size()){
            return -1;
        }
        return ans;
    }
};
