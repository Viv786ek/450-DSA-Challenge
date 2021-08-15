
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>v;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && B[j]==C[k]){
                    if(find(v.begin(), v.end(), A[i]) == v.end()){
                        v.push_back(A[i]);
                    }
                    i++;j++;k++;
                }
                else if(A[i]<B[j]) i++;
                else if(B[j]<C[k]) j++;
                else k++;
            }
            return v;


/*******************************/

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>ans;
int i = 0;
int j = 0;
int k = 0;
int lst = INT_MIN;
while (i < n1 && j < n2 && k < n3) {
if (A[i] == B[j] && B[j] == C[k] && lst != A[i]) {
ans.push_back(A[i]);
lst = A[i];
i++;
j++;
k++;
}
else {
if (min(A[i], min(B[j], C[k])) == A[i])
i++;
else if (min(A[i], min(B[j], C[k])) == B[j])
j++;
else if (min(A[i], min(B[j], C[k])) == C[k])
k++;
}
}
return ans;
