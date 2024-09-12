
#include <iostream>
using namespace std;
int main() {
    int num = 125;
    int rem = 0;
    int ans = 0;
    while(num>0){
        rem = num%10;
        num = num/10;
        ans = ans*10 + rem;
    }
    cout<<ans;

    return 0;
}
