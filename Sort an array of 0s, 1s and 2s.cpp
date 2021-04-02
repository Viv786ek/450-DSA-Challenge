int low = 0, high = n-1, mid = 0;
    
        while(mid <= high){
    
            if(a[mid]==0)
                swap(a[mid++], a[low++]);
           
            else if(a[mid]==1)
                 mid++;
    
            else
                swap(a[mid], a[high--]);
        }
