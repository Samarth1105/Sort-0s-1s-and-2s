class Solution {
    public:
    void swapInt(int &x, int &y){
        int temp=x;
        x=y;
        y=temp;
    }
    
    void sort012(int a[], int n)
    {
        int i=0,j=n-1;
        int ptr=0;
        while(ptr<=j){
            if(a[ptr]==0){
                swapInt(a[ptr], a[i]);
                i++;
                ptr++;
            }
            else if(a[ptr]==1){
                ptr++;
            }
            else{
                swapInt(a[ptr], a[j]);
                j--;
            }
        }
    }  
};
