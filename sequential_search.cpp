#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int array[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, };
	int input;
		
	cout << "input a number in 3141592653 :\n";
	cin >> input;
	
	for(int ans=0; ans<10; ans++){
		if (array[ans] == input){
			cout<<input<< "in"<< ans;
			return 0; 
		}
	}
		cout<<input<<"is not in array";
}
