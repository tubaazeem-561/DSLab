#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
struct node{
	int data;
	struct node*next;
};
struct node *n, *head=NULL,*temp,*p=NULL;
void main(){
	int ch;
	while(1){
		printf("Enter your choise");
		printf(" 1.insert 2.display ");
		scanf("%d",&ch);
		switch(ch){
		case 1: insert();
		break;
		case 2: display();
		break;
	    } 
	}
}
void insert(){
	int c,t,val;
	n=(struct node*)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&n->data);
	if(head==NULL){
		head=n;
		n->next=NULL;
	}
	else{
		printf("1.begin,2.ending,3.after some node,4.before some node");
		printf("enter your choise");
		scanf("%d",&c);
		switch(c){
			case 1:n->next=head;
			head=n;
			break;
			case 2:n->next=NULL;
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=n;
			break;
			case 3:printf("Enter after which data to insert:");
			scanf("%d",&t);
			temp=head;
			while(temp->data!=val){
				temp=temp->next;
			case 4:printf("Enter before which node:");
			scanf("%d",&val);
			temp=head;
			p=NULL;
			while(temp->data!=val){
				p=temp;
				temp=temp->next;
			}	
			n->next=temp;
			p->next=n;
			break;
			}
		}
	}
}
void traverse(){ 
	if(head==NULL){
	printf("No element");
	}
	else{
		temp=head;
		while(temp!=NULL){
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
