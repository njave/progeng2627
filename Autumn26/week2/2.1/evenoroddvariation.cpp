#include <iostream>
using namespace std;

int main(){
    int n, rem;

    cout << "please enter a number" << endl;
    cin >> n;

    // rem = n % 2;

    // bool is_even;
    
    // is_even = (rem == 0);

    // if(is_even){
    //     cout << "the number is even" << endl;

    // }
    // else{
    //     cout << "the number is odd" << endl;
        
    // }

    if((n % 2) == 0){

        cout << "the number is even" << endl;

    }
    else{
        cout << "the number is odd" << endl;
        
    }
}