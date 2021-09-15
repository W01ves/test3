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
	//创建通讯录
	struct contact con;
	//初始化通讯录
	initialcontact(&con);
	do
	{
		menu();
		printf("请选择：");
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
			printf("成功退出");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}