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

BTNode* CreatBinaryTree()		//����������
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
//// ������ǰ�����
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
//// �������������
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
//// �������������
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
//// �������ڵ����
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
//// ������Ҷ�ӽڵ����
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
//// ��������k��ڵ����
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
//// ���������/�߶�
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
//// �����������ֵΪx�Ľڵ�
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


// ��������
void LevelOrder(BTNode* root)
{
	if (root == NULL)
	{
		return ;
	}
	//��������q
	Queue q;
	QueueInit(&q);
	//�������


 
	 

	QueueDestroy(&q);
}  

// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root)
{

}

  


int main()
{

	//����������
	BTNode* root = CreatBinaryTree();

	//�������
	LevelOrder(root);

	return 0;
}


