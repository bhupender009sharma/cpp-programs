#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int long no=600851475143;
  int long newno;
  int long largestfact=0;
  int counter=2;
  newno=no;

  while(counter*counter<=newno){
        if(newno%counter==0){
            newno=newno/counter;
            largestfact=counter;
        }else{
            counter++;
        }
  }
  if(newno>largestfact){
    largestfact= newno;
  }
 cout<< largestfact<<endl;
    return 0;
}
