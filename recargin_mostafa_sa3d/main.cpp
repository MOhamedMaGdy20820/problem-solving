#include <bits/stdc++.h>
#include <iostream>
#include <vector>

#define FIO cin.tie(0), cin.sync_with_stdio(0)
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define fast cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);
int c=1;
int so(int n)
{
    if(n==1)return 1;

    if(n&1)
    {c+=1; so(3*n+1);}
    else
    {c+=1;so(n/2);}
}

int so2(int n) {
    if (n == 1)return 1;

    if (n%2==1)
        return 1 + so2(3 * n + 1);
    else
        return 1 + so2(n / 2);
}

void printNumber(ll n)
{
    if(n==0) return;

    printNumber(n/10);
    cout<<n%10<<" ";


}

ll grid[1000][1000],n;

ll maxpathsum(int r=0,int d=0)
{

    if(r==n&&d==n)return 0; // كده وصلت ل اخر عنصر

    if(r==n||d==n) return grid[r][d]; // بخرج برا الحدود

    ll sum1 = maxpathsum(r+1,d);
    ll sum2 = maxpathsum(r,d+1);

    return grid[r][d] + max(sum1,sum2); // اللي انا واقف فيه + احسن طريق من اللتنين

}

char gridc[1000][1000];
char gridc2[1000][1000];

bool backTrack(int i,int j)
{

    cout<<i<<" "<<j<<endl;

    if(gridc[i][j]=='E') {cout<<"true";return 1;}
    if(gridc[i][j]=='X'||i==n||j==n||gridc2[i][j]=='X'||i<0||j<0)return 0;

    gridc2[i][j]='X';

     if(backTrack(i+1,j))return 1;
     if(backTrack(i,j+1))return 1;
     if(backTrack(i-1,j))return 1;
     if(backTrack(i,j-1))return 1;
      return 0;

}




int main() {

   /* cout<<so(22)<<"  ";
    cout<<c<<"\n";*/

    //cout<<so2(22);
    //printNumber(452567);
    ll x,y;

    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>gridc[i][j];
            if(gridc[i][j]=='S'){x=i;y=j;}
        }
    }


  backTrack(x,y);

    return 0;
}
/*
4
1 2 3 8
4 8 6 7
7 8 9 10
8 5 4 1

5
. S X . .
. . X . E
. . . . X
X . X X .
X X X X X

*/