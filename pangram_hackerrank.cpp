// Pangram - is a sentence containing all the word from the alphabets
// Write a program to check whether the provided sentence is a pangram or not. If yes, print 'Y' else print 'N'

#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin>>T;
	string input_sentence;
	while(T){
		getline(cin, input_sentence);
		cout<<input_sentence;
		T--;
	}
	return 0;
}
