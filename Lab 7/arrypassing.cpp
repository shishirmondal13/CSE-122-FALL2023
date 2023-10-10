#include<iostream>
using namespace std;

void display(int num[],int arrysize)
{
   for(int i=0;i<arrysize;i++)
   {
      cout<<num[i]<<" ";
   }
}
int main()
{
   int num[5] ={1,3,4,6,7};
   display(num,5);


}
