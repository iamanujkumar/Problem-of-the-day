class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
        long long ans=0;
        for(int i=0;i<32;i++){
            long long l=0;
            for(int j=0;j<n;j++){
                if(arr[j] & (1<<i)){
                    l++;
                }
            }
            ans+=(1<<i)*(l*(l-1)/2);
        }
        return ans;
        
    }
    
};