
//https://ideone.com/HU2C3Z

#include<bits/stdc++.h>
using namespace std;

void PrintSortedArray(vector<int>&ans){
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}

int maxindex(vector<int>&arr,int i){
	for(int index=i+1;index<arr.size();index++)	{
			if(arr[index]<arr[i]) {
				i=index;
			}
	}
	return i;
}

void sort(vector<int>&arr){
	for(int i=0;i<arr.size();i++){
		int index=maxindex(arr,i);
		swap(arr[i],arr[index]);
	}
}

int main(){
	int n;
	cin>>n;
	vector<int>nums(n);
	cout<<"Before Sorting : ";
	for(int i=0;i<n;i++) {
		cin>>nums[i];
		cout<<nums[i]<<" ";
	}
	sort(nums);
	cout<<endl<<"After Sorting : ";
	PrintSortedArray(nums);
	return 0;
}
