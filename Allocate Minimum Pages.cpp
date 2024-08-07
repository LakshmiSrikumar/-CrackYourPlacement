bool possible(int arr[],int n,int m ,int curr_min){
        int current_sum=0;
        int student=1;
        for (int i=0;i<n;i++){
            if (arr[i]>curr_min) return false;
            if (current_sum+arr[i] > curr_min){
                student++;
                current_sum=arr[i];
                if (student > m) return false;
            }
            else{
                current_sum+=arr[i];
            }
        }
    return true;
    }
    long long findPages(int n, int arr[], int m) {
     if (n<m) return -1;
     long long sum=0;
     long long maxi=0;
     for (int i=0;i<n;i++){
         sum+=arr[i];
         if (arr[i]>maxi) maxi=arr[i];
     }
     
     long long start = maxi;
     long long end = sum;
     long long result=INT_MAX;
     while (start<=end){
         int mid= (start+end)/2;
         if(possible(arr,n,m,mid)){
             result=min(result,mid);
             end=mid-1;
         }
         else{
             start=mid+1;
         }
     }
     return result;
    }