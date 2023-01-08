
//https://ideone.com/G36K6a

#include <iostream>
using namespace std;

//you can also use class
struct Node{
	int data;
	Node *next;
};

/**
 * newNode function will return a node with data as val
 * */
Node *newNode(int val){
	Node *temp = new Node;
	temp->data = val;
	temp->next = NULL;
	return temp;
}

/**
 * createLinkedList will read the `n` inputs from user and will create a linked list of size `n`
 * */
 Node *createLinkedList(int n){
 	int a; //this variable will be used to read the input from user
 	
 	Node *head = NULL; //after creating the linkedlist we will returns it's head
 	Node *tail = NULL; //we will be inserting the new node at tail ex: if linked list is 1->2->null
 					   // new node will be inserted behind 2 => tail->next = new Node()
 	
 	//we will need to read the n inputs from user and create n nodes;
 	for(int i=0;i<n;i++){
 		cin>>a; //reading input from user
 		Node *temp = newNode(a); //a new Node will be created and it's pointer will be saved in temp
 		
 		
 		if(head==NULL){
 			//if linkedlist is empty then first node will be head and tail both
 			head = temp;
 			tail = temp;
 		}
 		else{
 			//if the linkedlist isn't empty then the newNode will be attached to tail and tail will become new Node
 			tail->next = temp; //attaching the newNode to tail
 			tail = temp; //changing the tail to new Node
 		}
 	}
 	
 	return head;
 }
 
 /**
  * printLinkedList will print all the elemets of linked list
  * */
void printLinkedList(Node *head){
	while(head!=NULL){
		cout<<head->data<<"-> "; 	//print the data of head
		head = head->next; //move the head to next node
	}
	cout<<"null\n";
}

/**
 * mergeTwoSortedLinkedList will take head for two sorted linked list as input and will merge them such that the final linked list is sorted
 * */
Node *mergeTwoSortedLinkedList(Node *head1, Node* head2){
	Node *ptr1=head1;
	Node *ptr2=head2;
	Node *ptr3=(Node*)malloc(sizeof(Node));
	Node *ans=(Node*)malloc(sizeof(Node));
	ans=ptr3;
	while(ptr1!=NULL&&ptr2!=NULL){
		if((ptr1->data) < (ptr2->data)){
			ans->next=ptr1;
			ptr1=ptr1->next;
			ans=ans->next;
		}
		else{
			ans->next=ptr2;
			ptr2=ptr2->next;
			ans=ans->next;
		}
	}
	while(ptr1!=NULL){
		ans->next=ptr1;
		ptr1=ptr1->next;
		ans=ans->next;
	}
	while(ptr2!=NULL){
		ans->next=ptr2;
		ptr2=ptr2->next;
		ans=ans->next;
	}
	return ptr3->next;
}

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	Node* head1 =createLinkedList(n);
	cout<<"first linkedList: "; 
	printLinkedList(head1);
	
	Node* head2 = createLinkedList(m);
	cout<<"second linkedList: "; 
	printLinkedList(head2);
	
	Node *head= mergeTwoSortedLinkedList(head1, head2);
	
	cout<<"sorted linkedList: "; 
	printLinkedList(head);
	return 0;
}
