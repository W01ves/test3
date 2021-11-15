#define _CRT_SECURE_NO_WARNINGS 1

bool isUnivalTree(struct TreeNode* root)
{

	if (root)
	{
		if ((root->left != NULL) && root->val != root->left->val)
		{
			return 0;
		}
		else if ((root->right != NULL) && root->val != root->right->val)
		{
			return 0;
		}
		else
		{
			return isUnivalTree(root->left)*isUnivalTree(root->right);
		}
	}

	return 1;

}