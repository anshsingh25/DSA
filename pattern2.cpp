#include<iostream>
using namespace std;
int main(){
    int n=4;
    int number=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<i+1;j++){
            cout << number++ << " " ;
        }
        cout<<endl;
    }
    return 0;
}