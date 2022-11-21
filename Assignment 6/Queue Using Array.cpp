
//

#include<bits/stdc++.h>
using namespace std;

class Queue{
	int arr[10000],start,end;
	
	public:
	Queue(){
		start=end=0;
	}
	void push(int val){
		arr[end]=val;
		cout<<arr[end]<<endl;
		end++;
	}
	int top(){
		cout<<arr[start]<<endl;
	}
	void pop(){
		cout<<"popping element"<<arr[start]<<endl;
		start++;
		cout<<"after popped element"<<arr[start]<<endl;
	}
	int size(){
		cout<<end-start<<endl;
	}
};

int main(){
	Queue q;
	q.push(11);
	q.push(22);
	q.push(69);
	q.top();
	q.pop();
	q.top();
	q.size();
	return 0;
}
