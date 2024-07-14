#include<stdio.h>
#include<stdlib.h>
int queue[50],F=0,R=0,i,N,ch,item;
void insert()
{
	printf("\n Enter element to insert: ");
    scanf("%d",&item);
	if(R>=N)
		printf("\n Overflow \n");
	else
	{
		R++;
		queue[R]=item;
		if(F==0)
			F=1;
	}
}				
void delete()
{
	if(F==0)
		printf("\n Underflow \n");
	else
	{
		item=queue[F];
		printf("\n %d is deleted. \n",item);
		if(R==F)
		{
			R==0;
			F==0;
		}
		else
			F++;
	}
}			
void display()
{
	if(F==0)
		printf("\n # Queue is Empty # \n");
	else
	{
		printf("\n");
		for(i=F;i<=R;i++)
			printf("%d\t",queue[i]);
	}
}
				
void main()
{
	printf("Enter maximum size of the queue: ");
	scanf("%d",&N);
	do
	{
		printf("\n \n\t****MENU**** \n\t  1.INSERT \n\t  2.DELETE \n\t  3.DISPLAY \n\t  4.EXIT \n ");
		printf("\t Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
					break;
			case 2: delete();
			        break;
			case 3: display();
			        break;
			case 4: exit(1);
			        break;
			default: printf("Wrong choice \n");
		}
	} while(ch<4);
}
