class Solution {
  public:
    int padovanSequence(int n) {
        // code here.
        const int MOD = 1000000007;
         if (n == 0 || n == 1 || n == 2) {
            return 1;
         }
        long long P0 = 1, P1 = 1, P2 = 1;
        long long Pn;
        for (int i = 3; i <= n; i++) {
            Pn = (P0 + P1)%MOD;
            P0 = P1;
            P1 = P2;
            P2 = Pn;
        }

        return Pn;
    }
};