class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
     
    int mini = a[0];
    int maxi = a[0];
    
    for(int i = 0;i<n;i++){
        if(a[i]>maxi){
            maxi = a[i];
        }
    
    else if(a[i]<mini){
        mini = a[i];
    }
        
}
    
     
     
    return {mini , maxi};
        
    }
};
