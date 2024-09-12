//dec to bin
#include <iostream>
using namespace std;
int main() {
    int num = 2;
    int rem = 0;
    int ans = 0;
    int pow = 1;
    while(num>0)
    {
      rem = num%2;
      num = num/2;
      ans+=(rem*pow);
      pow*=10;
    }
    cout<<ans;

    return 0;
}
//bin to dec
#include <iostream>
using namespace std;
int main() {
    int bin = 1001;
    int pow = 1;
    int rem = 0;
    int ans = 0;
    while(bin>0){
        rem = bin%10;
        ans = ans+(rem*pow);
        bin = bin/10;
        pow = pow*2;
    }
    cout<<ans;

    return 0;
}
