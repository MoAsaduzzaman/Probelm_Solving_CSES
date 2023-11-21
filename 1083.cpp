//Problem name: 1083 
//https://cses.fi/problemset/task/1083/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <int> a(n-1);

    for(int i=0; i<n-1; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    if(a[0]!=1){
        cout << 1 << endl;
    }else{
        for(int i=0; i<n-1; i++){
            if((a[i+1]-a[i])!=1){
                cout << i+2 << endl;
                break;
            }
        }
    }

    return 0;
}