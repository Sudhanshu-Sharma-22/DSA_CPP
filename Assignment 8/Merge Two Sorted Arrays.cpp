
//https://ideone.com/5zY4qe

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	vector<int>arr1(n);
	vector<int>arr2(m);
	for(int i=0;i<n+m;i++){
		if(i<n) cin>>arr1[i];
		else cin>>arr2[i];
	}
	// for(int i=0;i<n+m;i++) cout<<arr1[i]<<" ";for(int i=0;i<n+m;i++) cout<<arr2[i]<<" ";
	vector<int>ans(n+m);
	ans=arr1;
	for(int i=0;i<m;i++){
		ans.push_back(arr2[i]);
	}
	sort(ans.begin(),ans.end());
	for(int i=0;i<n+m;i++) cout<<ans[i]<<" ";
	return 0;
}
