    #include <iostream>
#include <cmath>
using namespace std;

int main()
{
unsigned long int sol,largest=0,revsol=0,temp1;
int i,j;

    for(i=999;i>99;i--){
        for(j=999;j>99;j--){

            sol =i*j;
            temp1=sol;

            while(temp1){
                revsol= revsol*10 +(temp1%10);
                temp1=temp1/10;
            }

            if((sol==revsol)&& (sol>largest) ){
                largest= sol;
                cout<<largest<<endl;
            }

        }
    }

    return 0;
}
