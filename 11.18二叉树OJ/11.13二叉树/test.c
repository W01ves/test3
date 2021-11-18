#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2; 
//	int c = 0;
//	int c =  Add(c, b);
//	printf("%d\n", 0xcccccccc);
//	return 0;
//}

typedef int BTDataType;
typedef struct TreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	node->data = x;
	node->left = node->right = NULL;
	return node;
}

BTNode* CreatBinaryTree()
{
	BTNode* nodeA = BuyNode(1);
	BTNode* nodeB = BuyNode(2);
	//BTNode* nodeC = BuyNode(3);
	//BTNode* nodeD = BuyNode('D');
	//BTNode* nodeE = BuyNode('E');
	//BTNode* nodeF = BuyNode('F');
	//nodeA->left = nodeB;
	nodeA->right = nodeB;
	//nodeA->left = nodeB;
	//nodeC->left = nodeE;
	//nodeC->right = nodeF;
	return nodeA;
}



/////****************************************************************************////
void _invertTree(struct TreeNode** p, struct TreeNode** q)
{
	if (*p == NULL && *q == NULL)
	{
		return;
	}
	struct TreeNode* tmp = *p;
	*p = *q;
	*q = tmp;

	if (*p == NULL && *q != NULL)
	{
		_invertTree(&(*q)->left, &(*q)->right);
	}
	else if (*q == NULL && *p != NULL)
	{
		_invertTree(&(*p)->left, &(*p)->right);
	}
	else
	{
		_invertTree(&(*p)->left, &(*p)->right);
		_invertTree(&(*q)->left, &(*q)->right);
	}
}

struct TreeNode* invertTree(struct TreeNode* root)
{
	if (root == NULL)
	{
		return NULL;
	}
	_invertTree(&root->left, &root->right);

	return root;
}


int main()
{
	struct TreeNode* root = CreatBinaryTree();
	struct TreeNode*  ret = invertTree(root);
	return 0;
}




