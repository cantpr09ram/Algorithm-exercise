#include <iostream>
using namespace std;

int main(){
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int d = 0,u = 10,find, ans;
    cout<<"input a number in array : ";
    cin>>ans;
    
    while( (find == 0) && (d <= u) ){
        int m = (int)((d+u)/2);
        if(array[m] == ans){
            cout<<"find "<<ans<<" in array["<<m<<"]";
            find += 1;
            break; 
        }
        else{
            if(array[m] > ans){
                u = m-1;
            }
            else{
                d = m+1;
            }
        }
    }

    if(find == 0){
        cout<<"can't find in array";
    }
    return 0;
}
