#include <iostream>

using namespace std;

int main()
{
    long long int grid=20,i,j;
    long long int arr[grid+1][grid+1]={0,0};

        for(i=0;i<=grid;i++){
            for(j=0;j<=grid;j++){
              arr[i][j]=1;
            }
        }

        for(i=0;i<=grid;i++){
            for(j=0;j<=grid;j++){
                 cout<<arr[i][j]<<" ";

            }
            cout<<" "<<endl;
        }

        for(i=grid-1;i>=0;i--){
            for(j=grid-1;j>=0;j--){
                 arr[i][j]=arr[i+1][j]+arr[i][j+1];

            }
        }
cout<<arr[0][0];
    return 0;
}
