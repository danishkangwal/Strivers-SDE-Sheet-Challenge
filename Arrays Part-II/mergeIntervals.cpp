vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;
    sort(intervals.begin(),intervals.end());
    for(auto interval:intervals){
        if(res.empty() or res.back()[1]<interval[0])
            res.push_back(interval);
        else
            res.back()[1] = max(res.back()[1],interval[1]);
    }
    return res;
}
