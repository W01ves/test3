#define _CRT_SECURE_NO_WARNINGS 1
#include "QListNode.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


typedef int BTDataType;
typedef struct TreeNode
{
	BTDataType data;
	struct TreeNode* left;
	struct TreeNode* right;
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

BTNode* CreatBinaryTree()		//二叉树创建
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);


	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node3->left = node5;
	node3->right = node6;


	return node1;
}



/////****************************************************************************////
//// 二叉树前序遍历
//void PreOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		printf("NULL ");
//		return;  
//	}
//	printf("%c ", root->data);
//	PreOrder(root->left);
//	PreOrder(root->right);
//
//}
//// 二叉树中序遍历
//void InOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		printf("NULL ");
//		return;
//	}
//	InOrder(root->left);
//	printf("%c ", root->data);
//	InOrder(root->right);
//
//
//}
//// 二叉树后序遍历
//void PostOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		printf("NULL ");
//		return;
//	}
//	PostOrder(root->left);
//	PostOrder(root->right);
//	printf("%c ", root->data);
//
//}
//
//// 二叉树节点个数
//int BinaryTreeSize(BTNode* root)
//{
//	if (root)
//	{
//		return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
//	}
//	return 0;
//
//}
//
//// 二叉树叶子节点个数
//int BinaryTreeLeafSize(BTNode* root)
//{
//	if (root)
//	{
//		if (root->left != NULL || root->right != NULL)
//		{
//			return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
//		}
//		return 1;
//	}
//	return 0;
//	
//}
//
//// 二叉树第k层节点个数
//int BinaryTreeLevelKSize(BTNode* root, int k)
//{
//	if (root && k>0)
//	{
//		if (k == 1)
//		{
//			return 1;
//		}
//		return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
//
//	}
//	return 0;
//}
//
//// 二叉树深度/高度
//int BinaryTreeDepth(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	return  1 + fmax(BinaryTreeDepth(root->left), BinaryTreeDepth(root->right));
//
//}
//
//// ★二叉树查找值为x的节点
//BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	if (root->data == x)
//	{
//		return root;
//	}
//	BTNode* pleft = BinaryTreeFind(root->left, x);
//	if (pleft != NULL)
//	{
//		return pleft;
//	}
//	else
//	{
//		return BinaryTreeFind(root->right, x);
//	}
//}
//


// ★层序遍历
void LevelOrder(BTNode* root)
{
	if (root == NULL)
	{
		return ;
	}
	//创建队列q
	Queue q;
	QueueInit(&q);
	//层序遍历


 
	 

	QueueDestroy(&q);
}  

// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root)
{

}

  


int main()
{

	//创建二叉树
	BTNode* root = CreatBinaryTree();

	//层序遍历
	LevelOrder(root);

	return 0;
}


