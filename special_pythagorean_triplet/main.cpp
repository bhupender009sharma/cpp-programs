#include <iostream>

using namespace std;

int main()
{int a,pro=0,b,c,counter=0;

    for(a=0;a<1001;a++){
        for(b=0;b<1001;b++){
            for(c=0;c<1001;c++){

                    if((a+b+c==1000) &&  (a*a + b*b == c*c)){
                        pro=a*b*c;

                        cout<<a<<"*"<<b<<"*"<<c<<"="<<pro<<endl;
                    }

            }
        }
    }

    return 0;
}
