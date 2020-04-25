//The first line contains T denoting the number of testcases. Then follows description of testcases.
//Each case begins with a single integer N denoting the length of string. The next line contains the string S.

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	int T, count = 0;
	cin>>T;
	while(T){
		int d;
		cin>>d;
		char str[104];
		char unique;
		cin>>str;
		for(int i = 0; i < d; i++){
			for(int j = i; j < d; j++){
				if(str[i] != str[j]){
					unique = str[i];
					count++;
					//cout<<unique;
				}
			}
		}
		if(count == 1){
			cout<<unique;
		}
		T--;
	}
	
	return 0;
}
