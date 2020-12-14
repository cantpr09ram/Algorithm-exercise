#include <iostream>
using namespace std;

int main(){
    int array[10] =  {1,5,9,3,6,8,2,4,7};
    int find, change;

    cout<<"before sort"<<endl;
    for(int i;i<10;i++){
        cout<<array[i];
    }

    cout<<"input a number in array";
    cin>>find;

    for(int i;i<=10-1;i++){
        for(int j; j<= 10-1;j++){
            if (array[j]>array[j+1]){
                change = array[i];
                array[j] = array[j+1];
                array[j+1] = change;
            }
        }
    }
    cout<<"after sort"<<endl;
    for(int i;i<10;i++){
        cout<<array[i];
    }
    return 0;
}
