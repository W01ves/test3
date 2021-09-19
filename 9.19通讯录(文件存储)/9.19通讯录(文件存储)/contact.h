#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
		


//#define MAX 1000
#define MAX_NAME 10
#define MAX_TELE 12
#define MAX_SEX 4
#define MAX_ADR 10
#define DEFAULT_CAPACITY 3

struct peoinfo
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char sex[MAX_SEX];
	char adr[MAX_ADR];
	int age; 
};

struct contact
{
	struct peoinfo* arr;
	int size;					    //记录当前已经有的元素
	int capacity;					//记录通讯录容量
};


void initialcontact(struct contact *con);
void add(struct contact *con);
void show_contact(const struct contact *con);
void del_contact(struct contact *con);
void search_contact(const struct contact* con);
void modify_contact(struct contact *con);
void sort_contact(struct contact *con);
void destroy_contact(struct contact *con);
void save_contact(struct contact *con);