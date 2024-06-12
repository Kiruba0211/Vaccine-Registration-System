#include "vaccine_registration.h"

int main()
{
	User users[MAX_USERS];
	int count = 0;
	int choice;
	
	while(1)
	{
	printf("\n VACCINE REGISTRATION SYSTEM \n");
	printf("1. User Registration\n");
	printf("2. View users\n");
	printf("3. Search user\n");
	printf("4. Delete user\n");
	printf("5. Exit\n");
	printf("Enter your choice: \n");
	scanf("%d",&choice);
	
		switch(choice)
		{
		case 1 : 
			register_user(users, &count);
			break;
	
		case 2:
			view_users(users, count);
			break;
	
		case 3:
			search_user(users, count);
			break;
	
		case 4:
			delete_user(users, &count);
			break;

		case 5: 
			exit(0); 
		
		default:
			printf("INVALID CHOICE! PLEASE TRY AGAIN.\n");
		}
	}
	return 0;
}	
