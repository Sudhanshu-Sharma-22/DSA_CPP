
//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<k;i++){
    	int target,ans=0;
    	cin>>target;
    	for(int j=0;j<n;j++){
    		if(target<arr[j]){
    		ans=j;
    		break;
    		}
    		else if(j==n-1)
    		{
    			ans=n;
    			break;
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
