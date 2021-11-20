#define _CRT_SECURE_NO_WARNINGS 1
#include "QListNode.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


//typedef int BTDataType;
//typedef struct TreeNode
//{
//	BTDataType data;
//	struct TreeNode* left;
//	struct TreeNode* right;
//}BTNode;
//
//BTNode* BuyNode(BTDataType x)
//{
//	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
//	if (node == NULL)
//	{
//		printf("malloc fail");
//		exit(-1);
//	}
//	node->data = x;
//	node->left = node->right = NULL;
//	return node;
//}
//
//BTNode* CreatBinaryTree()		//二叉树创建
//{
//	//BTNode* node1 = NULL;
//
//	BTNode* node1 = BuyNode(1);
//	BTNode* node2 = BuyNode(2);
//	BTNode* node3 = BuyNode(3);
//	BTNode* node4 = BuyNode(4);
//	BTNode* node5 = BuyNode(5);
//	BTNode* node6 = BuyNode(6);
//
//
//	node1->left = node2;
//	node1->right = node3;
//	node2->left = node4;
//	node2->right = node4;
//	node3->left = node5;
//	node3->right = node6;
//
//
//	return node1;
//}
//
//// 二叉树销毁
//void BinaryTreeDestory(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//
//	BinaryTreeDestory(root->left);
//	BinaryTreeDestory(root->right);
//	free(root);
//}

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


//// ★层序遍历（队列实现）
//void LevelOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return ;
//	}
//	//创建队列q
//	Queue q;
//	QueueInit(&q);
//	//层序遍历
//	QueuePush(&q, root);
//
//	while (!QueueEmpty(&q))
//	{
//		BTNode* front = QueueFront(&q);
//		printf("%d", front->data);
//		QueuePop(&q);
//		if (front->left)
//		{
//			QueuePush(&q, front->left);
//		}
//		if (front->right)
//		{
//			QueuePush(&q, front->right);
//		}
//	}
//
//	QueueDestroy(&q);
//}  



// 判断二叉树是否是完全二叉树(用层序遍历实现)
//int BinaryTreeComplete(BTNode* root)
//{
//	//if (root == NULL)
//	//{
//	//	return 1;
//	//}
//	//创建队列q
//	Queue q;				//队列存的数据是二叉树节点指针
//	QueueInit(&q);
//	//层序遍历
//	QueuePush(&q, root);		//插入二叉树根节点元素
//
//
//	while (QueueFront(&q))				//队列头部存的数据为NULL时停止
//	{
//		BTNode* front = QueueFront(&q);
//		//printf("%d ", front->data);
//		QueuePop(&q);
//		QueuePush(&q, front->left);
//		QueuePush(&q, front->right);
//	}
//	//此时队列头节点存的数据是空指针，若后面存的数据中有非空指针，则说明不是完全二叉树
//	//遍历剩余队列, 看头节点所存数据是否为空，空的话删除头节点，如果循环直到队列为空，所存数据存在非空，则不为完全二叉树
//	while (!QueueEmpty(&q))
//	{
//		if (QueueFront(&q))		//元素非空return 0
//		{ 
//			return 0;
//		}
//		QueuePop(&q);
//	} 
//	return 1;
//
//	QueueDestroy(&q);
//}
//
//
//
//int main()
//{
//	char str[100] = { 0 };
//	//创建二叉树
//	BTNode* root = CreatBinaryTree();
//	//BTNode* root =NULL;
//
//	//层序遍历
//	int x = BinaryTreeComplete(root);
//	printf("%d", x);
//
//
//	BinaryTreeDestory(root);
//	root = NULL;
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>

typedef struct BinaryTreeNode
{
	char x;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BinaryTreeCreate(char* str, int* cur)
{
	if (str[*cur] == '#')
	{
		(*cur)++;
		return NULL;
	}

	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	root->x = str[*cur];
	(*cur)++;

	root->left = BinaryTreeCreate(str, cur);
	root->right = BinaryTreeCreate(str, cur);


	return root;
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	InOrder(root->left);
	printf("%c ", root->x);
	InOrder(root->right);

}

int main()
{
	char str[100] = "abc##de#g##f###";
	//scanf("%s", str);
	int cur = 0;

	BTNode* ret = BinaryTreeCreate(str, &cur);

	InOrder(ret);
	return 0;
}