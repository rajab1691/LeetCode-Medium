/*
  Buy and sell again again and add it to profit
*/
int maxProfit(vector<int>& prices) {
        int n=prices.size();
        
        int i=0;
        int profit=0;
        
        while(i<n-1){
           
            while(i+1<n and prices[i]>prices[i+1])
                i++;
            
            int buy=prices[i];
            
            while(i+1<n and prices[i]<prices[i+1])
                i++;
            
            int sell=prices[i];
            
            profit+=(sell-buy);
            
            i++;
    
        }
        return profit;
    }
