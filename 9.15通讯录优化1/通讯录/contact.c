#include "contact.h"


//��ʼ��ͨѶ¼

void initialcontact(struct contact *con)
{
	memset(con->arr, 0, sizeof(con->arr));
	con->size = 0;
}


//�����ϵ��
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

//��ӡͨѶ¼

void show_contact(const struct contact *con)
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




int	find_name(struct contact *con)
{

	int i;
	printf("��������ϵ��������");
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


//ɾ����ϵ��

void del_contact(struct contact *con)
{
	int i;
	//1.������ϵ�ˣ����ظ���ϵ������λ��
	int ret = find_name(con);
	//2.ɾ����ϵ��
	if (ret == -1)
	{
		printf("δ�ҵ���ϵ��\n");
	}
	else
	{
		for ( i = ret; i < con->size; i++)
		{
			con->arr[i] = con->arr[i + 1];
		}
		con->size--;
		printf("ɾ���ɹ�\n");
	}
}



//������ϵ��

void search_contact(const struct contact* con)
{
	int ret = find_name(con);
	if (ret == -1)
	{
		printf("δ�ҵ���ϵ��\n");
	}
	else
	{
		printf("%-10s\t%-12s\t%-4s\t%-10s\t%-4s\t\n", "����", "�绰", "�Ա�", "��ַ", "����");
		printf("%-10s\t%-12s\t%-4s\t%-10s\t%-4d\n",
			con->arr[ret].name,
			con->arr[ret].tele,
			con->arr[ret].sex,
			con->arr[ret].adr,
			con->arr[ret].age);
	}
}

//�޸�ͨѶ¼

void modify_contact(struct contact *con)
{
	int ret = find_name(con);
	if (ret == -1)
	{
		printf("δ�ҵ���ϵ��\n");
	}
	else
	{
		printf("������������");
		scanf("%s", con->arr[ret].name);
		printf("������绰��");
		scanf("%s", con->arr[ret].tele);
		printf("�������Ա�");
		scanf("%s", con->arr[ret].sex);
		printf("�������ַ��");
		scanf("%s", con->arr[ret].adr);
		printf("���������䣺");
		scanf("%d", &(con->arr[ret].age));
		printf("�޸ĳɹ�!\n");
	}
}


//����

int compare_name(const void * a, const void * b)	//�Ƚ�������С
{
	return strcmp(  (*(struct peoinfo*)a).name, (*(struct peoinfo*)b).name);
}

void sort_contact(struct contact *con)
{
	//1.������������
	qsort(con->arr, con->size, sizeof(struct peoinfo),compare_name);

	//2.������������
	//3..�����Ա�����
}