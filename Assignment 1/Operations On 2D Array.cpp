
//https://ideone.com/Rt3jEQ

#include <iostream>
using namespace std;
const int N=100;

//countNumberOfTimesTargetIsInDiagonal containing row, col
int countNumberOfTimesTargetIsInDiagonal(int n, int A[][N], int row, int col, int target){
	int ans=0;
	for(int i=row , j=col;i>=0 , j<n;i-- , j++){
		if(A[i][j]==target){
			ans++;
		}
	}
	for(int i=row , j=col;i<n , j<n;i++ , j++){
		if(A[i][j]==target){
			ans++;
		}
	}
	for(int i=row , j=col;i<n , j>=0;i++ , j--){
		if(A[i][j]==target){
			ans++;
		}
	}
	/*while( i>=0 &&  j<n){
		if(A[i][j]==target){
			ans++;
		}
	}
	while(int i>=0 && j>0 && i<n && j<n){
		if(A[i][j]==target){
			ans++;
		}
	}*/
	ans=ans-1;
	return ans;
}

int main() {
	int n;
	cin>>n;
	int A[N][N];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>A[i][j];
		}
	}
	cout<<"Ans: "<<countNumberOfTimesTargetIsInDiagonal(n, A, 1, 2, 2)<<"\n";
	return 0;
}
