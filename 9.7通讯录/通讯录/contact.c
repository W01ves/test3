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
		printf("ͨѶ¼����");
	}
	else
	{
		printf("������������");
		scanf("%s", con->arr[con->size].name);
		printf("������绰��");
		scanf("%s", con->arr[con->size].tele);
		printf("�������Ա�");
		scanf("%s", con->arr[con->size].sex);
		printf("�������ַ��");
		scanf("%s", con->arr[con->size].adr);
		printf("���������䣺");
		scanf("%d", &(con->arr[con->size].age));

		printf("��ӳɹ�!\n");
		con->size++;
	}
}

void show_contact(struct contact *con)
{
	int i;
	printf("%-10s\t%-12s\t%-4s\t%-10s\t%-4s\t\n", "����", "�绰", "�Ա�", "��ַ","����");
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