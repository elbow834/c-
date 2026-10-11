#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n; j++){
            bool star=false;
            if(j==0) star=true;                  // D 左竖线
            if(j==2*min(i,n-1-i)) star=true;   // D 右弧线
            if(j==n+i) star=true;                 // X 对角线1
            if(j==2*n-1-i) star=true;         // X 对角线2
            cout<<(star?'*':' ');
        }
        cout<<endl;
    }
    return 0;
}