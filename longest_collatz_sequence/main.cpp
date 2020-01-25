#include <iostream>
// RUN IN THE CODE CHEF IDE.........
using namespace std;

int main()
{ long int longest=0,i,counter=0,num=0,n=0,no=0;

    for(no=2;no<=1000000;no++){
            num=no;
            counter=0;
     while(num!=1){
        if(num%2==0){
            num=num/2;
            counter++;
        }else{
            num= (3*(num))+1 ;
            counter++;
            }
     }
     if(longest<counter){
            longest=counter;
            n=no;
        }

    }
    cout<<n<<endl;
    return 0;
}
/* TRYING TO MINIMIZING ITS COMPLEXITY
 #include <iostream>

using namespace std;

int main()
{ long int longest=0,counter=0,num=0,n=0,no=0;
  int arr[1000000]={0};
    for(no=2;no<=1000000;no++){
            num=no;
            counter=0;
     while(num!=1 && num>=no){
       counter++;
        if(num%2==0){
            num=num/2;

        }else{
            num= 3*num +1 ;

            }
     }
     arr[no]= counter + arr[num];

     if(longest<arr[no]){
            longest=arr[no];
            n=num;
        }

    }
    cout<<n<<endl;
    return 0;
}
*/
