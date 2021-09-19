#include "contact.h"

void menu()
{
	printf("**************************************\n");
	printf("******1.add            2.del   *******\n");
	printf("******3.search         4.modify*******\n");
	printf("******5.show           6.sort  *******\n");
	printf("******7.save           0.exit  *******\n");
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
		case ADD: 
			add(&con);
			break;
		case DEL:
			del_contact(&con);
			break;
		case SEARCH:
			search_contact(&con);
			break;
		case MODIFY:
			modify_contact(&con);
			break;
		case SHOW:
			show_contact(&con);
			break;
		case SORT:
			sort_contact(&con);
			break;
		case SAVE:
			save_contact(&con);
			break;
		case EXIT:
			save_contact(&con);
			destroy_contact(&con);
			printf("�ɹ��˳�");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}