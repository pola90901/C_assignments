/* assignment 2:
			Write a C code that ask the user to enter his ID, if the ID is valid it will
			ask the user to enter his password, if the password is correct the
			program will print the user name, if the password is incorrect the
			program will print Incorrect Password.
			In case of not existing ID, the program will print Incorrect ID
**************************************************************************************************/
#include<stdio.h>
void main()
{		
				int ID=2022,value,pw=1234,password;
				printf("please enter your ID");
				scanf("%d",&value);
				if(value==ID)
				{
					printf("please enter your password:");
					scanf("%d",&password);
					if(password==pw)
					{
						printf("user name : polaa");
					}
					else 
					{
						printf("incorrect pw");
					}	
				}
				else 
				{
					printf("incorrect ID");
				}
}