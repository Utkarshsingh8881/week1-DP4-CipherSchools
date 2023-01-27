class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        int i=0;
        int j=0;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);//insert the first element
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=ans[j][1]){
                //update previous element
                ans[j][1]=max(ans[j][1],intervals[i][1]);
            }
            else{
                //add new element to answer
                ans.push_back(intervals[i]);
                j++;
            }
        }
        return ans;
    }
};
