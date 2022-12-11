#include <iostream>

using namespace std;

int cheetah(int money){
    int i=0,coupon=0, bottle;
    bottle = money/10;
    coupon = bottle;
    
    while (coupon>=3){
        bottle += coupon/3;
        coupon = coupon%3 + coupon/3;
    }

    return bottle;

}

int main(){
    int money;
    cin >> money;
    cout << cheetah(money);
}