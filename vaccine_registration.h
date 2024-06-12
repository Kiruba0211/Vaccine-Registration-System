

#define MAX_USERS 100
#define MAX_LENGTH 256

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int id;
	char name[MAX_LENGTH];
	int age;
	char vaccine_type[MAX_LENGTH];
}User;


void register_user(User users[], int *count);
void view_users(User users[], int count);
void search_user(User users[], int count);
void delete_user(User users[], int *count);	


