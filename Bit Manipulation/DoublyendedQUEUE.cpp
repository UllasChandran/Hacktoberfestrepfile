#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
int main()
{
	int front=-1 , rear = -1  ,q[10];
	int i , opt ,ele;
	printf("DOUBLE ENDED QUEUE  or DEQUE");
	printf("\nDEQUE OPERATIONS are :\n");
	printf("\n1.INSERTION at REAR END ");
	printf("\n2.INSERTION at FRONT END");
	printf("\n3.DELECTION at REAR END ");
	printf("\n4.DELECTION at FRONT END");
	printf("\nENTER the option from menu ");
	scanf("%d",&opt);
	switch(opt)
	
	{
		case 1 :
			rear = rear + 1;
	
			if (rear == 9 )
				printf("\nQUEUE IS OVERFLOW ");
			else 
			{
				printf("\nEnter the element  ");
				scanf("%d" ,&ele);
				rear = rear + 1;
				q[rear] = ele ;
				if (rear = -1 )
					rear = front = 0 ;
			}
			break;
		
		case 2 :
			if (front = 0)
				printf("\nCANNOT add item at front end");
			else 
			{
				printf("\nEnter the element  ");
				scanf("%d" ,&ele);
				front = front-1;
				q[front] = ele ;
			}
			break ;
		case 3 :
			if (rear = 0)
			{
				printf("\nCANNOT delete at rear end");
				}
			else
				ele = q[rear];
			if (front = rear )
				front = rear = -1;
			else 
			{
				rear = rear - 1;
				printf("\nDELECTED ELEMENT Is %d" , ele );
			}
			break;
		case 4 :
			if (front = -1) 
			{
				printf("QUEUE is UNDERFLOW ");
				}
			else 
			{
				ele = q[front] ;
				printf("\nDelected element is %d" , ele);
			}
			if (front == rear)
				front = rear = -1 ;
			else 
				front = front + 1;
			break;

	}
	printf("ELEMENTS OF DEQUE ARE %3d ",q[0]);
	getch();
	return 0;
}
