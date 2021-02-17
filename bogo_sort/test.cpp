#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{         
   
    srand(time(NULL)); //給定亂樹種子
    int n[4];
   
    cout<<"4個介於0~9的不重複隨機亂數為:";
   
    for(int i =0;i<4;i++)
    {                        
        n[i] = rand()%10;  // rand()%(最大值-最小值+1)+ 最小值 值放進陣列
        
        for(int j=0;j<i;j++)  //跑我之前已經產生的結果
        {
             if(n[i]==n[j])  //比較值是否已經存在
             {
                 i--;
                 break;
             }
        }
    }
   
   
    for(int i=0;i<4;i++)
    {
       cout<<n[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;   
}
