#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,j,temp,sum=0,carry=0;
    int arr[400]={};
    arr[399]=1;
    for(i=0;i<1000;i++){
         for(j=399;j>=0;j--){
            arr[j]= arr[j]*2 + carry;
            carry=arr[j]/10;
            arr[j]=arr[j]%10;
         }
    }

    for(i=0;i<400;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;

    return 0;
}
