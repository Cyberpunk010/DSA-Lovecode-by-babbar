// 3 2 1
// 3 2 1
// 3 2 1

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
       int j = n;          //int j = 1;
        while(j>=1){       //j<=n
            cout<<" "<<j;  //n-j+1 
            j = j-1;
        }
        cout<<endl;
        i = i+1;
    }
}