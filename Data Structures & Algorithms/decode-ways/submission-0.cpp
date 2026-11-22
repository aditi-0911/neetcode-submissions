class Solution {
public:
    int numDecodings(string s) {
        int len=s.length();
        vector<int> dp(len+1,0);
        if(s.empty() || s[0] == '0')
    return 0;
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=len;i++)
        {
            if(s[i-1]!='0')
            {
                dp[i]+=dp[i-1];
            }
            int num=stoi(s.substr(i-2,2));
            if(num<=26 && num>=10)
            {
                dp[i]+=dp[i-2];
            }
        }
        return dp[len];
    }
};
