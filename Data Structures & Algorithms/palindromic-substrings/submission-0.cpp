class Solution {
public:
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int odd=palindrome(s,i,i);
            int even=palindrome(s,i,i+1);
            ans+=odd+even;
        }
        return ans;
    }
    int palindrome(string &s, int start, int end)
    {
        int cnt=0;
        while(start>=0 && end<s.length() && s[start]==s[end])
        {
            start--;
            end++;
            cnt++;
        }
        return cnt;
    }
};
