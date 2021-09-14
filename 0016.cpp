#include<iostream>
using namespace std;
int main(){
    int t=9,cA,cB,cG,sA=0,sB=0,sG=0,hs;
    //ใส่ในนี้เลย
    string a = "AAAABBBBB",Adrian = "ABC",Bruno = "BABC",Goran = "CCAABB";

    //cin >> t >> a; // input

    for(int i = 0;i < t;i++){
        cA = i%3;
        cB = i%4;
        cG = i%6;
        if(a[i]==Adrian[cA]) sA++;
        if(a[i]==Bruno[cB]) sB++;
        if(a[i]==Goran[cG]) sG++;
    }

    //high score
    hs = sA;
    if(hs < sB) hs = sB;
    if(hs < sG) hs = sG;

    cout << hs << endl;

    //Who's win
    if(hs == sA) cout << "Adrian" << endl;
    if(hs == sB) cout << "Bruno" << endl;
    if(hs == sG) cout << "Goran" << endl;
    return 0;
}