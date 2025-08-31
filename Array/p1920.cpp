#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
	for (int i = 0; i < nums.size(); i++){
	    ans[i] = nums[nums[i]];	
	}
        return ans; 
    }
};

int main(){
	vector<int> nums = {5,0,1,2,3,4};
	Solution sol = Solution();
	vector<int> ans = sol.buildArray(nums);
	for (int i = 0; i < nums.size(); i++){
		cout << ans[i] << " ";		
	}
	cout << endl;
}
