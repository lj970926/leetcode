class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i; j < nums.size(); j++) {
				if (nums[i] + nums[j] == target) {
					result.push_back(nums[i]);
					result.push_back(nums[j]);
					break;
				}
			}
		}
		return result;
	}
};