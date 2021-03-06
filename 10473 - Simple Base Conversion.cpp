#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define scc(x, y) scanf("%d %d", &x, &y)
#define lng long long

string base2base(string s, int from, int to){
    lng dec = 0, len = s.size(), k=1;
    for(int i=len-1; i>=0; i--){
        dec += k * (isdigit(s[i]) ? (s[i]-'0') : (s[i]-'A'+10));
        k *= from;
    }
    string res="";
    while(dec>0){
        int x = dec%to; dec/=to;
        char ch = x < 10 ? x+'0' : x+'A'-10;
        res = ch + res;
    }
    return res;
}

int main(){
    string s;
    while(cin>>s){
        if(s[0]=='-') break;
        string ans = "0x";
        if(s.size()<=2) ans += base2base(s,10,16);
        else if(s[1]=='x') ans = base2base(s.substr(2),16,10);
        else ans += base2base(s,10,16);
        printf("%s\n",ans.c_str());
    }
    return 0;
}