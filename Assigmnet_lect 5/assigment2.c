/* assignment 2:
	Write C code that manage a small school. The school has 3 classes each class
	contains 10 students. Define three arrays for the three classes each one with a
	length of 10. Save a random numbers in all array elements to indicate the
	students grade. The program will calculate and display the following statistics:
	1- Number of passed students
	2- Number of Failed students
	3- Highest grade
	4- Lowest grade
	5- Average grade
	Knowing that the total grade is from 100 and the minimum passing grade is 50.	

*********************************************************************************************************
#include<stdio.h>
void main()
{
			int class1[10]={40,60,70,80,90,100,55,85,90,66};
			int class2[10]={50,60,70,80,90,100,55,85,90,66};
			int class3[10]={50,60,70,80,90,100,55,85,90,66};
			int temp,passed=0,failed=0,highest,lowest,avg1,avg2,avg3,sum1,sum2,sum3;
			// bubble sorting

			for (int i=0;i<9;i++)
				{
					for(int j=0;j<9-i;j++)
					{
						if(class1[j]>class1[j+1])
						{
							//swap
							temp=class1[j];
							class1[j]=class1[j+1];
							class1[j+1]=temp;
						}	
					}
				}
			for (int i=0;i<9;i++)
				{
					for(int j=0;j<9-i;j++)
					{
						if(class2[j]>class2[j+1])
						{
							//swap
							temp=class2[j];
							class2[j]=class2[j+1];
							class2[j+1]=temp;
						}	
					}
				}
			for(int i=0;i<10;i++)
			{
				printf("%d\n",class1[i]);
				printf("------------%d\n",class2[i]);
				printf("-------------%d\n",class3[i]);
				
				
			}
				for (int i=0;i<10;i++)
				{
					for(int j=0;j<10-i;j++)
					{
						if(class3[j]>class3[j+1])
						{
							//swap
							temp=class3[j];
							class3[j]=class3[j+1];
							class3[j+1]=temp;
						}	
					}
				}
			// counting passed and failed 
			for(int w=0;w<10;w++)
				{
					if(class1[w]>=50)
					{
						passed++;		
					}
					else 
					{
						failed++;
					}
					if(class2[w]>=50)
					{
						passed++;		
					}
					else 
					{
						failed++;
					}
					if(class3[w]>=50)
					{
						passed++;		
					}
					else 
					{
						failed++;
					}
				}
			// getting lowest and highest	
				if(class1[0]<class2[0] && class1[0]<class3[0])
				{
					lowest=class1[0];
				}
				else if (class2[0]<class1[0] && class2[0]<class3[0])
				{
					lowest=class2[0];
				}
				else if (class3[0]<class1[0] && class3[0]<class2[0])
				{
					lowest=class3[0];
				}
				else 
					lowest=class1[0];
				
				if(class1[9]>class2[9] && class1[9]>class3[9])
				{
					highest=class1[9];
				}
				else if (class2[9]>class1[9] && class2[9]>class3[9])
				{
					highest=class2[9];
				}
				else if (class3[9]>class1[9] && class3[9]>class2[9])
				{
					highest=class3[9];
				}
				else 
					highest=class1[9];	
			// getting avg	
				for(int i=0;i<10;i++)
				{
					sum1=sum1+class1[i];	
					sum2=sum2+class2[i];
					sum3=sum3+class3[i];
				}
				avg1=sum1/10;
				avg2=sum2/10;
				avg3=sum3/10;
				printf("number of passed students = %d\n",passed);
				printf("number of failed students = %d\n",failed);
				printf("Highest grade = %d\n",highest);
				printf("lowest grade = %d\n",lowest);
				printf("Average grade of class 1 = %d\n",avg1);
				printf("Average grade of class 2 = %d\n",avg2);
				printf("Average grade of class 3 = %d\n",avg3);
				}