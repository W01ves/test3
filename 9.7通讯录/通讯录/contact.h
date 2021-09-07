#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#define MAX 1000
#define MAX_NAME 10
#define MAX_TELE 12
#define MAX_SEX 4
#define MAX_ADR 10


struct peoinfo
{
	char name[MAX_NAME];
	int tele[MAX_TELE];
	char sex[MAX_SEX];
	char adr[MAX_ADR];
	int age; 
};

struct contact
{
	struct peoinfo arr[MAX];
	int size;
};


void initialcontact(struct contact *con);
void add(struct contact *con);
void show_contact(struct contact *con);
