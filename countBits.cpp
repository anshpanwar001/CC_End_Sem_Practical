class Solution {
public:

    int countOnes(int n){
        if(n==0) return 0;
        int count = 0;
        while(n>0){
            if(n%2 == 1) count++;
            n = n/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i = 0 ; i <= n ; i++){
            ans.push_back(countOnes(i));
        }
        return ans;
    }
};