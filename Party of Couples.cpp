class Solution{
    public:
    int findSingle(int n, int arr[]){
        // code here
        int a=0;
        for(int i=0;i<n;i++){
            a=a^arr[i];
        }
        return a;
    }
};