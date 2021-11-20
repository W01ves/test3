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
//BTNode* CreatBinaryTree()		//����������
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
//// ����������
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


//// ��������������ʵ�֣�
//void LevelOrder(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return ;
//	}
//	//��������q
//	Queue q;
//	QueueInit(&q);
//	//�������
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



// �ж϶������Ƿ�����ȫ������(�ò������ʵ��)
//int BinaryTreeComplete(BTNode* root)
//{
//	//if (root == NULL)
//	//{
//	//	return 1;
//	//}
//	//��������q
//	Queue q;				//���д�������Ƕ������ڵ�ָ��
//	QueueInit(&q);
//	//�������
//	QueuePush(&q, root);		//������������ڵ�Ԫ��
//
//
//	while (QueueFront(&q))				//����ͷ���������ΪNULLʱֹͣ
//	{
//		BTNode* front = QueueFront(&q);
//		//printf("%d ", front->data);
//		QueuePop(&q);
//		QueuePush(&q, front->left);
//		QueuePush(&q, front->right);
//	}
//	//��ʱ����ͷ�ڵ��������ǿ�ָ�룬���������������зǿ�ָ�룬��˵��������ȫ������
//	//����ʣ�����, ��ͷ�ڵ����������Ƿ�Ϊ�գ��յĻ�ɾ��ͷ�ڵ㣬���ѭ��ֱ������Ϊ�գ��������ݴ��ڷǿգ���Ϊ��ȫ������
//	while (!QueueEmpty(&q))
//	{
//		if (QueueFront(&q))		//Ԫ�طǿ�return 0
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
//	//����������
//	BTNode* root = CreatBinaryTree();
//	//BTNode* root =NULL;
//
//	//�������
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