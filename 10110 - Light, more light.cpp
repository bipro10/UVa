#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

int main(){
    lng n;
    while(cin>>n && n){
        lng sq = sqrt(n);
        sq*sq==n ? printf("yes\n") : printf("no\n");
    }
    return 0;
}