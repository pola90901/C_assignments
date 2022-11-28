/*assignment 1:
/* Write a C code that defines a function which takes an array as input argument
   and apply the bubble sorting algorithm on it, then print the result*/
#include<stdio.h>
void Arr_Bubble_sort(char *ptr_to_arr);
void main()
{   
char arr[5]={3,1,5,4,0};
	Arr_Bubble_sort(arr);
				
				}
void Arr_Bubble_sort(char *ptr_to_arr){
	
	char temp;
	//appling bubble sorting on array 
	for(int i=0;i<5-1;i++)
	{
	
		for(int j=0;j<5-1-i;j++)
		{
			if(ptr_to_arr[j]>ptr_to_arr[j+1])
			{
				// swap
				temp=ptr_to_arr[j];
				ptr_to_arr[j]=ptr_to_arr[j+1];
				ptr_to_arr[j+1]=temp;
				
			}
		}
	}
	// printing sorted array
		for(int i=0;i<5;i++)
		{
			printf("element %d is %d\n",i,ptr_to_arr[i]);
		}
	
	
}