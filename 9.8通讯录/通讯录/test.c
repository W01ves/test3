#include "contact.h"

void menu()
{
	printf("**************************************\n");
	printf("******1.add            2.del   *******\n");
	printf("******3.search         4.modify*******\n");
	printf("******5.show           6.sort  *******\n");
	printf("*********      0.exit        *********\n");
	printf("**************************************\n");
}

int main()
{	
	int input;
	//����ͨѶ¼
	struct contact con;
	//��ʼ��ͨѶ¼
	initialcontact(&con);
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			add(&con);
			break;
		case 2:
			del_contact(&con);
			break;
		case 3:
			search_contact(&con);
			break;
		case 4:
			modify_contact(&con);
			break;
		case 5:
			show_contact(&con);
			break;
		case 6:
			sort_contact(&con);
			break;
		case 0:
			printf("�ɹ��˳�");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}