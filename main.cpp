#include<iostream> //cout dependency
#include<string> //string dependency
#include <algorithm> //rotate dependency

using namespace std;

void permutationHelper(string workingString, string result){
	if(workingString.size()==0){
		cout << result << endl;
		return;
	}
	else{
		for(int i = 0; i<workingString.size(); i++){
			permutationHelper(workingString.substr(1), result+workingString[0]);
			
			rotate(workingString.begin(), workingString.begin()+1, workingString.end());//rotate 1st char of workingString to last position
			
		}
	}
	
}

void printPermutations(string startingString){
	
	if(startingString.size()==0){
		return;
	}
	else{
		permutationHelper(startingString, "");
	}
	
	return;
}

int main(){
	string tester="hello";
	printPermutations(tester);
	return 0;
}