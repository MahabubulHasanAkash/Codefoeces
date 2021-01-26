#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll arr[10000005] ;
bool prime[10000005] ;

void SieveOfEratosthenes(ll n, ll k)
{
  prime[n+1];
  memset(prime, true, sizeof(prime));

  for (int p = 2; p*p <= n; p++){
    if (prime[p]){
      for(int i = p*p; i <= n; i += p){
        prime[i] = false;
      }
    }
  }

  ll i = 0; k++;
  for (int p = 2; p <= n; p++){
    if(prime[p])  arr[i++] = p;
    if(i == k)  break;
  }
}

int main()
{
  ll n, k = 10000000;
  cin>>n;
  SieveOfEratosthenes(k, n);

  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
}
