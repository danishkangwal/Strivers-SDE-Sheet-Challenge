int maximumProfit(vector<int> &prices){
    int mx = 0;
    int mini = prices[0],maxi = prices[0];
    for(int i = 1;i < prices.size();i++){
        if(prices[i] < mini){
            mini = prices[i];
            maxi = prices[i];
        }
        maxi = max(maxi,prices[i]);
        mx = max(mx, maxi-mini);
    }

    return mx;
}
