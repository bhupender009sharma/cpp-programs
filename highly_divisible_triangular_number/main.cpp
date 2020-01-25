#include <iostream>

using namespace std;

int main()
{ int num,i,j=0,counter=0,n=0;

    while(counter<501){
        counter = 0;
        n++;
        num= (n*(n+1))/2;
        for(i=1;i*i<=num;i++){
            if(num%i==0){
                counter+=2;
            }
        }
        //for perfect square
        if(i*i==num){
            counter--;
        }
        j= num;

    }

cout<<j<<endl;
    return 0;
}
