class Solution {
public:
    int bitwiseComplement(int n) {
        int a=n;
        int i=0;
        if (n==0)
            return 1;
        
        while(a!=0){
            i=(i<<1)|1;
            a=a>>1;
        }
        int ans=(~n)&i;
        return ans;

    }
};