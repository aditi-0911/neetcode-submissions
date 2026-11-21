class Solution {
public:
    int climbStairs(int n) {
        int ways=0;

            ways=func(n);

        return ways;
    }
    int func(int n)
    {
        int i=2;
        vector<int>sum (n+1,0);
        sum[0]=1;
        sum[1]=1;
        while(i<=n)
        {
            sum[i]=sum[i-1]+sum[i-2];
            i++;

        }
        return sum[i-1];
    }
};
