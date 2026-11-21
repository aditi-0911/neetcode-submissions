class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=0;
        int len=tickets.size();
        while (tickets[k]!=0)
        {   int i=0;
            for(int i=0; i<len;i++)
            {
                if (tickets[i] > 0) {
                    tickets[i]--;
                    count++;

            }
                        if(tickets[k]==0)
            {
                return count;
            }
            }

        }
   
    }
 
};