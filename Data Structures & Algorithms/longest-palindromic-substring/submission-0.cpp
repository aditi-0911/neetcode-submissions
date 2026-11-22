class Solution {
public:
    string longestPalindrome(string s) {
        int ans=0;
        int len=0;
        int start=0;
        for(int i=0;i<s.length();i++)
        {
            int odd= palindrome(s,i,i+1);
            int even= palindrome(s,i,i);

            ans=max(even,odd);
            if(ans>len)
            {
                len=ans;
                start=i-(len-1)/2;
            }

        }
        return s.substr(start,len);
    }

    int palindrome (string &s, int start, int end)
    {
        while(start>=0 && end<s.length() && s[start]==s[end])
        {
            start--;
            end++;
        }
        return end-start-1;
    }
};
