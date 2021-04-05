class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i = 0, j = 0, k = n - 1;
   
    // Untill i less than equal to k
    // or j is less tha m
    while (i <= k and j < m) {
        if (arr1[i] < arr2[j])
            i++;
        else {
            swap(arr2[j++], arr1[k--]);
        }
    }
   
    // Sort first array
    sort(arr1, arr1 + n);
   
    // Sort second array
    sort(arr2, arr2 + m);
	     
	    
	}
};
