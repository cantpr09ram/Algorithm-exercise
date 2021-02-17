#include <iostream>
#include <random>
using namespace std;
int main()
{
  std::random_device rd;
  std::default_random_engine gen = std::default_random_engine(rd());
  std::uniform_int_distribution<int> dis(1,10);

  int array[] = {1,2,3,4,5,6,7,8,9,0};
  int numbers[10];
  for (int i=0; i<10; ++i){
      numbers[i] = dis(gen);
      for(int j=0;j<i;j++)
        {
             if(numbers[i] == numbers[j])
             {
                 i--;
                 break;
             }
        }
  }
  while(1){
    for(int i; i<10; i++){
      
    }
  }
  return 0;
}