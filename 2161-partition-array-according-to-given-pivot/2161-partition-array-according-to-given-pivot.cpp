class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        queue<int> left, right;
        int count=0;

        for(int i=0; i<n; i++){
            if(nums[i]<pivot)
            left.push(nums[i]);
            else if(nums[i]>pivot)
            right.push(nums[i]);
            else
            count++;
        }
        vector<int> ans;
        while(!left.empty()){
            ans.push_back(left.front());
            left.pop();
        }
        while(count--)
        ans.push_back(pivot);
        while(!right.empty()){
            ans.push_back(right.front());
            right.pop();
        }
        return ans;
    }
};