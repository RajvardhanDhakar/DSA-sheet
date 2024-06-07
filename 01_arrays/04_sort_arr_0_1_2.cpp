class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;
         for(int i = 0; i<n ; i++){
            if(a[i] == 0){
                count_0++;
            }
        
             
             else if(a[i]==1){
                 count_1++;
             }
         
             else {
                 count_2++;
             }
         }
        int ease = count_0 + count_1;
        
        for(int i = 0 ;i<n;i++){
            if(i<count_0){
                a[i]=0;
            }
        
            else if(i>=count_0 && i<ease ){
                a[i] = 1;
            }
        
            else {
                a[i] = 2;
            }
        }
        
            
        } 
    
        
    };
    
