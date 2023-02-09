#include <bits/stdc++.h>
#include <iostream>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define fast cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);

int x,y;
ll arr[21];
bool solve(ll index = -1, ll sum=0 ) {

    cout<< sum<<endl;
    if(sum==y)   return 1;
    if(index==x) return 0 ;

    if(solve(index+1,sum+arr[index])) return 1;
    if(solve(index+1,sum)) return 1;
    return 0;
}

int a[23];
int n,k,flag;
void s(int idx,int sum)
{
    if(idx==n)
    {
        cout << sum << "\n";
        if(sum==k) flag=true;
        return ;
    }

    s(idx+1,sum+a[idx]);
    s(idx+1,sum);
}

ll arr2[1000][1000],N;
ll f(int r=0 , int d =0)
{
    if(r==N&&r==N)return arr2[r][d];
    if(r==N||d==N)return 0;


    ll sum1 = f(r+1,d);
    ll sum2 = f(r,d+1);

    return arr2[r][d]+ max(sum1,sum2);

}


char a1[1000][1000],a2[1000][1000],a3[1000][1000]; ll Y;

bool solve2 (ll i , ll j)
{
    a3[i][j] ='#';

    if(i<0||j<0||i==Y||j==Y||a1[i][j]=='#'||a2[i][j] =='#') return 0;
    a2[i][j] ='#';


    if(solve2(i+1,j))return 1;
    if(solve2(i,j+1))return 1;
    if(solve2(i-1,j))return 1;
    if(solve2(i,j-1))return 1;

}




int main(){

 /*   cin>>x>>y;
    for (int i = 0; i < x; ++i) {
        cin>>arr[i];
    }

   if( solve())cout<<"Yes";
   else cout<<"NO";*/

 /*   cin >>n>>k;
    for(int i=0;i<n;i++) cin >>a[i];
    s(0,0);

    if(flag) cout <<"YES\n";
    else cout << "NO\n";*/

   /* cin>>N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin>>arr2[i][j];
        }
    }*/


    cin>>Y;
    for (int i = 0; i < Y; ++i) {
        for (int j = 0; j < Y; ++j) {
            cin>>a1[i][j];
            if(a1[i][j]=='#')a3[i][j]='#';

        }
    }

    int count = 0;
    for (int i = 0; i < Y; ++i) {
        for (int j = 0; j < Y; ++j) {
            if(a3[i][j]=='#')continue;

            for (int i = 0; i < Y; ++i) {
                for (int j = 0; j < Y; ++j) {
                    cout<<a3[i][j]<<" ";
                }
                cout<<endl;
            }

            cout<<"-----------------------------------------"<<endl;

            solve2(i,j);
            count+=1;
        }
    }

    cout<<count<<endl;

    for (int i = 0; i < Y; ++i) {
        for (int j = 0; j < Y; ++j) {
            cout<<a3[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
/*
4
. . # .
# # . #
. . . .
# # # #



 */