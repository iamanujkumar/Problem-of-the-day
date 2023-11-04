class Solution{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int a=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                a=i;
                return a;
            }
        }
        return a;
    }
};