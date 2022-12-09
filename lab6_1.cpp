#include<iostream>
using namespace std;

int main(){
    int ip=1,even=0,odd=0;
    while (true){
        cout << "Enter an integer: ";
        cin >> ip;

        if (ip==0){
            break;
        }

        if (ip%2==0){
            even += 1;
        }else{
            odd += 1;
        }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}
