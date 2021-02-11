#include <iostream>
using namespace std;

int main(){
    int array[10] =  {1,5,9,3,6,8,2,4,7,0};
    int min,i,j;
    cout<<"before sort"<<endl;
    for(int i=0; i<10;i++){
        cout<<array[i];
    }
    cout<<endl;
    
    for(i; i < 10 - 1; i++){
    	min = i;
        for(j = i+1 ; j < 10; j++){
            if (array[min] > array[j]){
            	min = j;
            }   
    	} 
    	swap(array[min],array[i]);
	}
    
    cout<<"after sort"<<endl;
    for(int i;i<10;i++){
        cout<<array[i];
    }
    
    return 0;
}
