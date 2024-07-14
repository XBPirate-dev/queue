#include<stdio.h>
#include<stdlib.h>
int Queue[50],F=0,R=0,N,ch=1,item;
 void insert();
 void delete();
 void display();
 void main()
{
printf("The max size of queue is ");
scanf ("%d",&N);
do
	{
printf ("\n MENU \n 1: INSERT \n 3:DISPLAY \n 4:EXIT  \n ");
 printf("Enter choice ");
scanf("%d", &ch);
switch(ch)
{
case 1: insert();
 	break;
case 2: delete();
	break;
case 3: display();
	break;
case 4: exit (1);
	break;

default: printf ("WRONG CHOICE");
}
}
 while (ch<4);
}



void insert()

if
{
(F==1 && R==1 || F==R+1);
		printf("Queue is Full");
		scanf("%d",&ch)

	else
	{ 
		if(R==N);
                   R=1
		printf("Element to be inserted");
		scanf("%d".&ch)
 	else
                 R++ ;
         }
}



if
{
 (F==0);
   F=1
}




void delete()

{
if(F==0);
	printf("Element is deleted");
	scanf("%d",&ch)
else
	item=Q[F]
	printf("%d is deleted " , &item );
}

if 
{

[F==R];
    F=0
    R=0
else if  (R==N)
	F-1
else
 	F++
}

 void display()

{
if (F==0);

	printf("Queue Empty");
	scanf("%d",&ch);

else
{
	if (R>=F);

	for (i=F;i<=R;i++)
		printf("%ls\t", &Queue[1]);
	scanf("%d",&ch);
	else 
		for(i=F;i<=N;i++)
			printf("%ls\t " ,&Queue[1]);
	scanf("%d",&ch);
	  if 

                  for (i=1;i<=R;i++)
			printf("%ls \t" ,&Queue[1]);
	scanf("%d",&ch);

	}
}
 

 




