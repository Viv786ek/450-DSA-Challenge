class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
int minEle, maxEle;
int result = arr[n-1] - arr[0];

for(int i =1; i<=n-1; i++){
if(arr[i]>=k){
maxEle = max(arr[i-1] + k, arr[n-1]-k);
minEle = min(arr[0]+k, arr[i]-k);

result = min(result, maxEle-minEle);
}
else continue;
}
return result;
    }
};
