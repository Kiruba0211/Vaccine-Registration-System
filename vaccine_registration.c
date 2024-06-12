#include "vaccine_registration.h"

void register_user(User users[], int *count)
{
	if(*count >= MAX_USERS)
	{
		printf("ERROR! Maximum users reached\n");
		return;
	}

	printf("Enter user ID:\n ");
	scanf("%d",&users[*count].id);
	printf("Enter user name:\n ");
	scanf("%s", users[*count].name);
	printf("Enter the user's age:\n ");
	scanf("%d", &users[*count].age);
	printf("Enter the vaccine type:\n");
	scanf("%s", users[*count].vaccine_type);

	(*count)++;
	printf("User registered successfully\n");
}

void view_users(User users[], int count)
{
	if(count == 0)
	{
		printf("No users registered\n");
		return;
	}

	printf("Registered Users\n");
	for(int i = 0 ; i<count; i++)
	{
		printf("User id: %d\n", users[i].id);
		printf("Name of the user: %s\n", users[i].name);
		printf("User's age: %d\n", users[i].age);
		printf("Vaccine type: %s\n", users[i].vaccine_type);	
		printf("\n");
	}
	
}

void search_user(User users[], int count)
{
	int user_id;
	printf("Enter the user id to be searched:\n");
	scanf("%d",&user_id);
	for(int i = 0; i<count; i++)
	{
		if(users[i].id == user_id)
		{
			printf("User id: %d\n", users[i].id);
                	printf("Name of the user: %s\n", users[i].name);
                	printf("User's age: %d\n", users[i].age);
                	printf("Vaccine type: %s\n", users[i].vaccine_type);
			return;
		}
		
	}
         printf("User not found.\n");

}

void delete_user(User users[], int *count)
{
	int user_id;
	printf("Enter the user id to delete:\n");
	scanf("%d",&user_id);

	for(int i = 0; i < *count; i++)
	{
		if(users[i].id == user_id)
		{
			for(int j = i; j < *count - 1; j++)
			{
				users[j] = users[j+1];
			}
		(*count)--;
		printf("User deleted successfully\n");
		return;
		}	
	}
	printf("User not found!\n");
	
}
