#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<4;i++){
        for(int j=1;j<i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}