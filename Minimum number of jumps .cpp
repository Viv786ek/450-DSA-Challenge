class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jump =0, curr=0,far=0;
        for(int i=0;i<n-1;i++){
            far = max(far,i+arr[i]);
            if(i == curr){
                jump++;
                curr=far;
            }
            if(curr >= n-1)
            break;
        }
        if(curr < n-1) return -1;
        return jump;
    }
};
