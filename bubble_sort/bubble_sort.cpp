#include <iostream>
using namespace std;

int main(){
    int array[10] =  {1,5,9,3,6,8,2,4,7};

    cout<<"before sort"<<endl;
    for(int i;i<10;i++){
        cout<<array[i];
    }
	cout<<endl;
	
for(int i = 0; i < 9; i++) {
   for(int j = 0; j < 9; j++)
   {
      if(array[j+1] < array[j]) {
         swap(array[j],array[j+1]);
      }
   }
}
    cout<<"after sort"<<endl;
    for(int i;i < 10;i++){
        cout<<array[i];
    }
    return 0;
}
