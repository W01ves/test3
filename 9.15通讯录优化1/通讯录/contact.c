#include "contact.h"


//初始化通讯录

void initialcontact(struct contact *con)
{
	memset(con->arr, 0, sizeof(con->arr));
	con->size = 0;
}


//添加联系人
void add(struct contact *con)
{
	if (con->size == MAX)
	{
		printf("通讯录已满");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", con->arr[con->size].name);
		printf("请输入电话：");
		scanf("%s", con->arr[con->size].tele);
		printf("请输入性别：");
		scanf("%s", con->arr[con->size].sex);
		printf("请输入地址：");
		scanf("%s", con->arr[con->size].adr);
		printf("请输入年龄：");
		scanf("%d", &(con->arr[con->size].age));

		printf("添加成功!\n");
		con->size++;
	}
}

//打印通讯录

void show_contact(const struct contact *con)
{
	int i;
	printf("%-10s\t%-12s\t%-4s\t%-10s\t%-4s\t\n", "姓名", "电话", "性别", "地址","年龄");
	for ( i = 0; i < con->size; i++)
	{
		printf("%-10s\t%-12s\t%-4s\t%-10s\t%-4d\n",
			con->arr[i].name,
			con->arr[i].tele,
			con->arr[i].sex,
			con->arr[i].adr,
			con->arr[i].age);
	}
}




int	find_name(struct contact *con)
{

	int i;
	printf("请输入联系人姓名：");
	char name[MAX_NAME];
	scanf("%s", name);
	for ( i = 0; i < con->size; i++)
	{
		if (strcmp(con->arr[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;

}


//删除联系人

void del_contact(struct contact *con)
{
	int i;
	//1.查找联系人，返回该联系人所在位置
	int ret = find_name(con);
	//2.删除联系人
	if (ret == -1)
	{
		printf("未找到联系人\n");
	}
	else
	{
		for ( i = ret; i < con->size; i++)
		{
			con->arr[i] = con->arr[i + 1];
		}
		con->size--;
		printf("删除成功\n");
	}
}



//查找联系人

void search_contact(const struct contact* con)
{
	int ret = find_name(con);
	if (ret == -1)
	{
		printf("未找到联系人\n");
	}
	else
	{
		printf("%-10s\t%-12s\t%-4s\t%-10s\t%-4s\t\n", "姓名", "电话", "性别", "地址", "年龄");
		printf("%-10s\t%-12s\t%-4s\t%-10s\t%-4d\n",
			con->arr[ret].name,
			con->arr[ret].tele,
			con->arr[ret].sex,
			con->arr[ret].adr,
			con->arr[ret].age);
	}
}

//修改通讯录

void modify_contact(struct contact *con)
{
	int ret = find_name(con);
	if (ret == -1)
	{
		printf("未找到联系人\n");
	}
	else
	{
		printf("请输入姓名：");
		scanf("%s", con->arr[ret].name);
		printf("请输入电话：");
		scanf("%s", con->arr[ret].tele);
		printf("请输入性别：");
		scanf("%s", con->arr[ret].sex);
		printf("请输入地址：");
		scanf("%s", con->arr[ret].adr);
		printf("请输入年龄：");
		scanf("%d", &(con->arr[ret].age));
		printf("修改成功!\n");
	}
}


//排序

int compare_name(const void * a, const void * b)	//比较姓名大小
{
	return strcmp(  (*(struct peoinfo*)a).name, (*(struct peoinfo*)b).name);
}

void sort_contact(struct contact *con)
{
	//1.按照姓名排序
	qsort(con->arr, con->size, sizeof(struct peoinfo),compare_name);

	//2.按照年龄排序
	//3..按照性别排序
}