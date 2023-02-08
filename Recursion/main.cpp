#include <bits/stdc++.h>
#include <iostream>
#include <vector>


#define FIO cin.tie(0), cin.sync_with_stdio(0)
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define fast cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);


ll fib( ll n)
{
  if(n==1||n==0) return n ;
  else return fib(n-1)+ fib(n-2);
}
ll fact (ll n )
{
    if(n==1) return 1;
    else return n* fact(n-1);
}
ll sum ( int x,int y){
    if(x==y) return x;
    else return y+sum(x,y-1);
}

void f(int n)
{
    if(n<0) return;
    else
    {
        for (int i = 0; i < n; ++i) {
            cout<<"*";
        }
        cout<<"\n";
    }
    f(n-1);
}


void fr(int n)
{
    if(n<0) return;
    fr(n-1);

        for (int i = 0; i < n; ++i) {
            cout<<"*";
        }
        cout<<"\n";
}

void splitr ( ll n)
{
    if(n==0) return;

    else{

        cout<<n%10<<" ";
        splitr(n/10);
    }
}

void split ( ll n)
{
    if(n==0) return;
    split(n/10);

        cout<<n%10<<" ";
}


vector<pair<int,int>> items;

ll knapsack(ll item , ll capasity)
{
    if(item == items.size())
        return 0;

    ll leave = knapsack(item +1,capasity);
    if(capasity>=items[item].second)
    {
       return max(  items[item].first + knapsack(item+1,capasity-items[item].second),
                     leave);
    }
    else return leave;
}
ll indexT;
 ll Tavas_and_SaDDas(ll lucky=0 , ll item=0)
 {
     if (lucky > indexT) return -1;
     else if(lucky==indexT) return item;


     return max( Tavas_and_SaDDas(lucky*10+4,item*2+1),
                 Tavas_and_SaDDas(lucky*10+7,item*2+2)  );
 }

 bool t= 0;
 vector<ll>so;
 ll arr[5];
 bool shick (ll sum , ll item)
 {
     if(item==5)return sum == 23;
    // else if(sum > 23){t=1;return 0;}
    // cout<<sum<<"\n";
    // so.push_back(sum);

     return shick(sum+arr[item],item+1)||
            shick(sum-arr[item],item+1)||
            shick(sum*arr[item],item+1);
 }

 ll gcd (ll m,ll n)
 {
     if(n==0)return m;
     gcd(n,m%n);
 }

 ll fastPower(ll base,ll power)
 {
     if(power==0)return 1;

     ll res = fastPower(base,power/2);

     if(power%2) return res*res*base;
     else return res* res;



 }
int main(){
     // 0 1 2 3 4 5 6 7  8  9
     // 0 1 1 2 3 5 8 13 21 34
   /*  cout<<fib(9)<<"\n";
     cout<<fact(5)<<"\n";
     cout<<sum(4,6)<<"\n";
     f(5);
     fr(5);

    split(4546546);
    cout<<"\n";
    splitr(4546546);
    cin>>indexT;
   cout<<Tavas_and_SaDDas();*/

    /*for (int i = 0; i < 5; ++i) {
        arr[i]=i+1;
    }

    //-----------------------------------------------------
    for (int i = 0; i < 5; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+5);
    do {

        if(shick(arr[0],0) ) {cout<<1<<"\n";return 0;}
        //cout << *std::max_element(so.begin(), so.end());
    } while (next_permutation(arr,arr+5));
    cout<<0;return 0;*/
    //-----------------------------------------------------
    //cout<<fastPower(2,10);
   // cout<<5%3<<" "<<(-5)%3;
   cout<<"k;dshkj";
}
/*
2 3 5 7 11
 */