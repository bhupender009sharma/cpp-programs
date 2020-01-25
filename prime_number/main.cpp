#include <iostream>
#include<cmath>
using namespace std;

int isprime(int n=1){
 for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return 0;
    }

 }
 return 1;
}
int main()
{  int numprime=1,n=3;
    while(numprime<10001){
        if(isprime(n)){
            numprime++;
            cout<<numprime<<"-"<<n<<endl;

        }
        n+=2;
    }

    return 0;
}
