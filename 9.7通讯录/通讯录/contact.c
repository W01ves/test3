#include "contact.h"

void initialcontact(struct contact *con)
{
	memset(con->arr, 0, sizeof(con->arr));
	con->size = 0;
}


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

void show_contact(struct contact *con)
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