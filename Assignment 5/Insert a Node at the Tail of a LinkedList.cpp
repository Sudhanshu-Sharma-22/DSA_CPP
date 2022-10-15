
//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

struct ListNode{
	int data;
	ListNode * next;
};

ListNode * newnode(int val){
	ListNode * temp = new ListNode;
	temp->data = val;
	return temp;
}

void printlinkedlist(ListNode * head){
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}

int main(){
	int n;
	cin>>n;
	ListNode * head = NULL;
	ListNode * temp = NULL;
		for(int i=0;i<n;i++){
		int val;
		cin>>val;
		if(head==NULL){
			head= newnode(val);
			temp = head;
		}
		else{
			temp->next = newnode(val);
			temp = temp->next;
		}
	}
 
	printlinkedlist(head);
	return 0;
}
