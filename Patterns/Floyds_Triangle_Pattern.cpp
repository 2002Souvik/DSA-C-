#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int c = 1;
    cin>>n;
    for(int i = 0; i< n; i++){
        for(int j = 0; j<=i; j++){
            cout<<c<<" ";
            c++;
        }
    cout << endl;
    }
    return 0;
}
