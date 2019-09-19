//undefined behavior number 168
#include<stdio.h> 
#include<stdlib.h> 
  
void free_list(struct Node *head) {
	for (struct Node *p = head; p != NULL; p = p->next) {
		free(p);
	}
}

void correct_free_list(struct Node *head) {
	struct Node *q;
	for (struct Node *p = head; p != NULL; p = q) {
		q = p->next;
		free(p);
  }
}


struct Node  
{ 
	int data; 
	struct Node *next; 
}; 
  
int main() 
{ 
	struct Node* head = NULL; 
	struct Node* second = NULL; 
	struct Node* third = NULL; 
		
	head = (struct Node*)malloc(sizeof(struct Node));  
	second = (struct Node*)malloc(sizeof(struct Node)); 
	third = (struct Node*)malloc(sizeof(struct Node)); 

	head->data = 1;
	head->next = second; 

	second->data = 2;   
	second->next = third; 

	third->data = 3; 
	third->next = NULL; 

	int gvn;
	printf("1.free_list\n");
	printf("2.correct_free_list\n");
	printf("Enter option: ");

	scanf("%d", &gvn);

	if(gvn == 1){
		correct_free_list(head);
	}
	else{
		correct_free_list(head);
	}
	
	return 0; 
} 