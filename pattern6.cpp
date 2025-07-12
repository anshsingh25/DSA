#include<iostream>
using namespace std;
int main(){
// Declare a variable to hold the number of elements        
int n;
cout << "Enter the number of elements: ";
cin >> n;               
for(int row=1; row<=n; row++){
    if(row > 5){
    
    //space
    for(int space=1; space<=row-1; space++){
        cout << " ";
    }
    //stars
    for(int star=1; star<=n-row +1; star++){
        cout << "* ";    
    }       
    //space
    for(int space=1; space<=row-1; space++){
        cout << " ";    
    }
}
    else{
    //space
    for(int space=1; space<=n-row; space++){
        cout << " ";
    }
    //stars
    for(int star=1; star<=row; star++){
        cout << "* ";    
    }       
    //space
    for(int space=1; space<=n-row; space++){
        cout << " ";    
    }
}
    cout << endl;
}


return 0;
}