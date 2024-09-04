#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string tmp;
    getline(cin,s);
    int cnt = 0;//dem so tu trong xau s
    stringstream ss(s);
    while(ss >> tmp){
        cout << tmp << endl;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
