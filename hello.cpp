
#include"hello.h"

class Solution {
public:
    TreeNode* traversal(vector<int>& nums, int left, int right) {
		if (left > right) return nullptr;
		int mid = (left + right) / 2;
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = traversal(nums, left, mid - 1);
		root->right = traversal(nums, mid + 1, right);
		return root;
	}
};

int main()
{
    Solution s;
    vector<int> a{1,2,3,4,5,6,7,8};
    s.traversal(a,0,a.size()-1);
    cout << 100 << endl;
}
