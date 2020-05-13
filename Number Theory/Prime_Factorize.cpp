#include<bits/stdc++.h>
using namespace std;
#define sz 1000010
int lst[128];
int lstsize;
vector<int> prime;
bool marked[sz];

void seive(int upperbound)
{
    marked[0]=marked[1]=true;
    for(int i=2; i*i<sz; i++)
    {
      if(marked[i] = false)
      {
        for(int j=i*i; j<sz; j+=i)
        {
          marked[j] = true;
        }
      }
    }
    for(int i=0; i<sz; i++)
    {
      if(!marked[i]) prime.push_back(i);
    }
}
void primefactorize(int n)
{
  lstsize = 0;
  seive(sqrt(n)+1);
  for(int i=0; prime[i]*prime[i]<=n; i++)
  {
    if(n % prime[i] == 0)
    {
      while(n % prime[i] == 0)
      {
        n /= prime[i];
        lst[lstsize] = prime[i];
        lstsize++;
      }
    }
  }
  if(n>1)
  {
    lst[lstsize] = n;
    lstsize++;
  }
}

int main()
{
  int n;
  cin>>n;
  primefactorize(n);
  for(int i=0; i<lstsize; i++)
  {
    cout<<lst[i]<<" ";
  }
  return 0;
}
