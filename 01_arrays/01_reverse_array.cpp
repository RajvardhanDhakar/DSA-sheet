class Solution
{
    public:
    string reverseWord(string str)
    {
        int start = 0;
        int end = str.length()-1;
        while(start<=end){
            int temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        
            
        }
          return str;  
        }
        
    };
