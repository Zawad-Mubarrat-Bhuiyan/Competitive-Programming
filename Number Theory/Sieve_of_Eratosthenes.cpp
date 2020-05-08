//Bismillahir Rahmanir Rahim
//Zawad Mubarrat Bhuiyan

#include<bits/stdc++.h>
#define M 1000010
using namespace std;

bool marked[M+10];
void seive()
{
  marked[0]=marked[1]=true;
  for(int i=2; i*i<=M; i++)
  {
    if(marked[i] == false)
    {
      for(int j=i*i; j<=M; j+=i)
      {
        marked[j] = true;
      }
    }
  }
}
int main()
{
   seive();
   int n;
   while(cin>>n)
   {

     if(!marked[n])
     {
       cout<<"Prime"<<endl;
     }
     else
     {
       cout<<"Not Prime"<<endl;
     }
   }
}
