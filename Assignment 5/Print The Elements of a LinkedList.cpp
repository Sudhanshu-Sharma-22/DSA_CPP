
//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem?isFullScreen=true

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
	ListNode * head;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		head = newnode(num);
		// cout<<"test"<<endl;
		head=head->next;
	}
	printlinkedlist(head);
	return 0;
}
