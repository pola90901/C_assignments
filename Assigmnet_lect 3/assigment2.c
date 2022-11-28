/* assignment 2:

		Write a login program in C that ask the
		user to enter his ID and his password, if
		the ID is correct the system will ask the
		user to enter his password up to 3 times,
		if he enters the password right the
		systems welcomes him, if the three times
		are incorrect, the system print No more
		tries. If the user ID is incorrect the
		system print You are not registered
		User 		ID      Password
		Ahmed 	   1234       7788
		Amr		   5678 	  5566
		Wael       9870 		1122
*************************************************************/
#include<stdio.h>
void main()
{
			int id,pw,i;
			printf("please enter you ID: ");
			scanf("%d",&id);
			switch(id)
			{
				case 1234:
				for( i=0;i<3;i++)
				{	
					printf("please enter your pw");
					scanf("%d",&pw);
					if(pw==7788)
					{
						printf("welcome ahmed");
						break;			
					}
					else
					{
						printf(" Try again \n");
					}
				}
				if(i>2)printf("incorrect pw for 3 times");
				break;
				case 5678:
				for( i=0;i<3;i++)
				{
					printf("please enter your pw");
					scanf("%d",&pw);
					if(pw==5566)
					{
						printf("welcome amr");
						break;			
					}
					else
					{
						printf(" Try again \n ");
					}
				}
				if(i>2)printf("incorrect pw for 3 times");
				break;
				case 9870:
				for( i=0;i<3;i++)
				{
					printf("please enter your pw");
					scanf("%d",&pw);
					if(pw==1122)
					{
						printf("welcome wael");
						break;			
					}
					else
					{
						printf(" Try again \n ");
					}
					if(i>2)printf("incorrect pw for 3 times");
				}
				break;
				default:
				printf("you are not registered");
				break;
				
			}

}