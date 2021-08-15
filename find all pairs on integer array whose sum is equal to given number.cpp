// find all pairs on integer array whose sum is equal to given number Solution
int getPairsCount(int nums[], int n, int k) {
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(k-nums[i]) != mp.end()){
                count += mp[k-nums[i]];
            }
            mp[nums[i]]++;
        }
        return count;
    }
