#include<iostream>
using namespace std;

int main(){
    int countEven = 0, countOdd = 0, num;
    cout << "Enter an integer: ";
    cin >> num;
    if(num==0) {
        cout << "#Even numbers = 0" << endl;
        cout << "#Odd numbers = 0" << endl; 

    }else{
        while(num!=0){
         if (num % 2 == 0) {
                countEven++;
            } else { 
                countOdd++;
            }
                cout << "Enter an integer: ";
                cin >> num;
    }
    cout << "#Even numbers = "<< countEven << endl;
    cout << "#Odd numbers = "<< countOdd << endl;
    }
    return 0;
}