
//https://ideone.com/fork/9rhnLz

#include <bits/stdc++.h>
using namespace std;

class Stack{
	int arr[10000],end;
	public:
	Stack(){
		end=0;
	}
	void push(int val){
		arr[end]=val;
		cout<<"value added = "<<arr[end]<<endl;
		end++;
	}
	int top(){
		// cout<<arr[end-1]<<endl;
		return arr[end-1];
	}
	int pop(){
		cout<<arr[end-1]<<endl;
		end--;
		return 0;
	}
	int size(){
		return end;
	}
};
int main() {
	Stack s;
	s.push(22);
	cout<<"top : "<<s.top()<<endl;
	s.push(11);
	s.push(69);
	s.push(7);
	cout<<"top : "<<s.top()<<endl;
	cout<<"popped element : "<<s.pop()<<endl;
	cout<<"top : "<<s.top()<<endl;
	return 0;
}
