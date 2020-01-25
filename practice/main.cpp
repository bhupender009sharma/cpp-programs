 #include <iostream>

using namespace std;

int main()
{
  long n = 600851475143;
  long lastfactor;
  long factor;
  if(n%2==0){
    lastfactor=2;
    n=n/2;
    while(n%2==0){
        n=n/2;
    }
  }else{
    lastfactor=1;
    }

 factor=3;
 while(n>1 && factor*factor<=n){
    if(n%factor==0){
        n=n/factor;
        lastfactor=factor;
        while(n%factor==0){
            n=n/factor;
        }
    }
    factor +=2;
 }
 if(n=1){
    cout<<lastfactor<<endl;
 }else{
    cout<<n<<endl;
 }

    return 0;
}
