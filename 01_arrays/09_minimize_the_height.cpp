class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        if(n==1) return 0;
        sort (arr , arr+n);
        int ans = arr[n-1] - arr[0];
        
        for(int i = 0; i<n ; i++){
            if(arr[i]<k) continue; // To avoid negative heights 
            int curr_min = min(arr[0] +k, arr[i]-k);
            int curr_max = max(arr[n-1] - k,arr[i-1]+k);
            if(curr_max<curr_min) return 0;
            ans = min(ans , curr_max - curr_min);
        }
    
        return ans;
    }
};
