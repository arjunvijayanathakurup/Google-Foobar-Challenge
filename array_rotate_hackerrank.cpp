//The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of three lines. 
//The first line of each test case consists of an integer N, where N is the size of array. The second line of each test case contains N space separated integers denoting array elements. 
//The third line of each test case contains "d" .

#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T){
		vector<int> arr;
		int N = 0, d = 0, val = 0;
		cin>>N;
		for(int i = 0; i < N; i++){
			cin>>val;
			arr.push_back(val);
		}
		cin>>d;
		for(int i = d; i < N; i++){
			cout<<arr[i]<<" ";
		}
		for(int i = 0; i < d; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		T--;
	}
	return 0;
	
}
