#include<stdio.h>
#include<conio.h>
struct Node
{
     int data;
	 struct Node*next;  	
}*top=NULL;

    void push(int);
    void pop();
    void display();
int main()
{
	int choice,value;
	printf("\n: stack using linked list !!");
 while(1){
 	printf("\n******MENU******\n"); 
    print("1.push\n2.pop\n3.display\n4.exit\n");
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice)  
    case 1:printf("Enter the value to be inserted");
        scanf("%d",&value);
        push(value);
        break;
		case 2:
		pop();
		 break;
        case 3:display(); break;
        case 4:exit(0);
		}	
	}
 }	
 void push(int value)
{
	struct Node *newNode;
	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	if(top == NULL)
	   newNode->next = NULL;
	else{
	   newNode->next = top;
	top = newNode;
	printf("\nInsertion is success!!!\n");   	
}
}
void pop()
{
	if(top == NuLL)
	  printf("\nstack is empty!!!\n");
	else{
		newNode *temp = top;
		printf("\nDeleted element :%d",temp->data);
		top = temp->next;
		free(temp);
	}
}
void display()
{
	if(top == NuLL)
	   print("nstack is empty!!!\n);
	else{
		struct Node *temp = top;
		while(temp->next! = NULL){
			printf("%d--->",temp->data);
		 temp = temp->next;
		}
		printf("%d--->NULL",temp->data);
	}
}
