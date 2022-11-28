	/* assignment 1:
Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then print the minimum and the maximum of the values.
*/
#include<stdio.h>
void main()
{
int arr[10]={0};
int temp;
for(int i=0;i<10;i++)
	{
		printf("please enter number %d :  ",i);
		scanf("%d",&arr[i]);
		
	}	
//bubble sorting
for(int j=0;j<9;j++)
	{
		for(int i=0;i<9-j;i++)
		{	
			if(arr[i]>arr[i+1])
			{
				//swap
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;		
			}
		}
		
	}
	
printf(" the maximum vale is : %d  \n",arr[9]);
printf(" the minimum vale is : %d \n ",arr[0]);	

		
	}