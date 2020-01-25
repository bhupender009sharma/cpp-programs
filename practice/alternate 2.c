 #include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int long no =600851475143;
 int long i,j,k;
 int factors[2];
 int largestfact=0;

 for(i=2;i*i< no;i++){
    if(no%i==0){
        factors[0]=i;
        factors[1]=no/i;
    }
    for(k=0;k<2;k++){
        bool isprime= true;
        for(j=2;j*j<factors[k];j++){
            if(factors[k]%j==0){
                isprime = false;
                break;
            }
        }
        if(isprime && factors[k]> largestfact){
            largestfact=factors[k];
        }
    }
 }

 cout<< largestfact<<endl;
    return 0;
}
