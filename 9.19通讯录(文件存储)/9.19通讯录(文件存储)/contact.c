#include "contact.h"


//�������
void check_capacity(struct contact *con)
{
	if (con->size == con->capacity)
	{
		struct peoinfo* ptr = (struct peoinfo*)realloc(con->arr, (con->capacity + 2) * sizeof(struct peoinfo));
		if (ptr != NULL)
		{
			con->arr = ptr;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("�½���ϵ��ʧ��\n");
			return;
		}
		con->capacity += 2;
	}
}


//����ͨѶ¼
void download_contact(struct contact* con)
{
	struct peoinfo tmp = { 0 };
	FILE* pfread = fopen("contact_data.txt","rb");
	if (pfread == NULL)
	{
		printf("download_contact:%s\n", strerror(errno));
		return;
	}

	//����
	while (fread(&tmp, sizeof(struct peoinfo), 1, pfread))
	{
		check_capacity(con);
		con->arr[con->size] = tmp;
		con->size++;
	}
	
	fclose(pfread);
	pfread = NULL;
}



//��ʼ��ͨѶ¼
void initialcontact(struct contact *con)
{
	struct peoinfo* ptr = (struct peoinfo*)malloc(DEFAULT_CAPACITY * sizeof(struct peoinfo));
	if (ptr != NULL)
	{
		con->arr = ptr;
	}
	con->size = 0;
	con->capacity = DEFAULT_CAPACITY;
	//����ͨѶ¼
	download_contact(con);
}


//�����ϵ��

void add(struct contact *con)
{
	//�������
	check_capacity(con);

	//������ϵ��
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


////������ϵ�ˣ����ظ���ϵ������λ��

int	find_name(const struct contact *con)
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


//����ͨѶ¼

void save_contact(struct contact *con)
{
	FILE* pfwrite = fopen("contact_data.txt", "wb");
	if (pfwrite == NULL)
	{
		printf("save_contact:%s", strerror(errno));
		return ;
	}
	fwrite(con->arr, sizeof(struct peoinfo), con->size, pfwrite);

	/*int i = 0;
	for (i = 0; i < con->size; i++)
	{
		fwrite(&(con->arr[i]), sizeof(struct peoinfo), 1, pfwrite);
	}*/
	

	fclose(pfwrite);
	pfwrite = NULL;

}




//����ͨѶ¼���ͷ��ڴ棩

void destroy_contact(struct contact *con)
{
	free(con->arr);
	con->arr = NULL;
}