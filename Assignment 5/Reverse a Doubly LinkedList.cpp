
//https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;
struct ListNode{
	int data;
	ListNode *next;
	ListNode *prev;
};
 
ListNode* createNode(int val){
	ListNode *temp = new ListNode();
	temp->data = val;
	return temp;
}
 
ListNode *getTail(ListNode *head){
	while(head->next!=NULL){
		head=head->next;
	}
	return head;
}
 
void printInReverse(ListNode *head){
	ListNode *tail = getTail(head);
	while(tail!=NULL){
		cout<<tail->data<<" ";
		tail = tail->prev;
	}
}
int main() {
	ListNode *head = NULL;
	ListNode *temp = NULL;
 
	int val;
	while(cin>>val){
		if(head==NULL){
			head= createNode(val);
			temp = head;
		}
		else{
			temp->next = createNode(val);
			temp->next->prev=temp;
			temp = temp->next;
		}
	}
	cout<<"reverse: ";
	printInReverse(head);
	return 0;
}
