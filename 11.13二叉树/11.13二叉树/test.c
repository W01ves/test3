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

typedef char BTDataType;
typedef struct BinaryTreeNode
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
	BTNode* nodeA = BuyNode('A');
	BTNode* nodeB = BuyNode('B');
	BTNode* nodeC = BuyNode('C');
	BTNode* nodeD = BuyNode('D');
	BTNode* nodeE = BuyNode('E');
	BTNode* nodeF = BuyNode('F');
	nodeA->left = nodeB;
	nodeA->right = nodeC;
	nodeB->left = nodeD;
	nodeC->left = nodeE;
	nodeC->right = nodeF;
	return nodeA;
}

// 二叉树前序遍历
void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;  
	}
	printf("%c ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);

}
// 二叉树中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);


}
// 二叉树后序遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);

}

// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	if (root)
	{
		return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
	}
	return 0;

}

// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root)
	{
		if (root->left != NULL || root->right != NULL)
		{
			return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
		}
		return 1;
	}
	return 0;
	
}

// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root && k>0)
	{
		if (k == 1)
		{
			return 1;
		}
		return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);

	}
	return 0;
}

// 二叉树深度/高度
int BinaryTreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return  1 + fmax(BinaryTreeDepth(root->left), BinaryTreeDepth(root->right));

}

// ★二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	BTNode* pleft = BinaryTreeFind(root->left, x);
	if (pleft != NULL)
	{
		return pleft;
	}
	else
	{
		return BinaryTreeFind(root->right, x);
	}
}



int main()
{
	BTNode* root = CreatBinaryTree();
	//PostOrder(root);

	//int count = BinaryTreeLeafSize(root);
	//int count = BinaryTreeLevelKSize(root,2);
	//int count = BinaryTreeDepth(root);
	BTNode* ret = BinaryTreeFind(root, 'E');


	printf("%c ", ret->data);

	return 0;
}