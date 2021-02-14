#include<iostream>
using namespace std;

int main(){
	int array[] = {1,3,5,7,9,2,4,0,8,6};
	int temp ,next;
	cout<<"before sort"<<endl;
	for(int i = 0;i < 10;i++){
		cout<<array[i];
	}
	cout<<endl;
	
	for(int i; i < 10; i++){
		temp = array[i];
		next = i;
		while((next > 0 )&&(array[next-1] > temp)){
			array[next] = array[next - 1];
			next--;
		}
		array[next] = temp;	
	}

	cout<<"after sort"<<endl;	
	for(int i;i < 10;i++){
		cout<<array[i];
	}	
	cout<<endl;
}
