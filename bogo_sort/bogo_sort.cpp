#include <iostream>
#include <random>
using namespace std;
int main(){
  std::random_device rd;
  std::default_random_engine gen = std::default_random_engine(rd());
  std::uniform_int_distribution<int> dis(1,10);
  int n = 10;
  int array[] = {0,9,8,7,6,5,4,3,2,1};
  
  while(true){
    int numbers[10];
    int answers[10];
    for (int i=0; i<10; ++i){
      numbers[i] = dis(gen);
      for(int j=0;j<i;j++){
        if(numbers[i] == numbers[j]){
                 i--;
                 break;
        }
      }
    }
    for(int i; i<10; i++){
      answers[i] = array[numbers[i]];
    }

    while(--n > 1){
      if(answers[n] < answers[n - 1]){
        break;
      }
    }
    cout<<"after sort"<<endl;
    for(int i; i<10; i++){
      cout<<answers[i];
    }    
  return 0;
  }
}