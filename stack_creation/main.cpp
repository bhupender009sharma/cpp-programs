#include <iostream>
#define capacity 5
using namespace std;

int arr[capacity];
    int item;
    int n;
    int top=-1;

int isfull(void);
int isempty(void);
void push(int);
int pop(void);
void peek(void);
void traverse(void);

int main()

{

    while(1){   cout<<"enter your choice"<<endl <<"1. push"<<endl<<"2. pop"<<endl<< "3.traverse"<<endl<< "4. peek" <<endl;
                cin>>n;
                switch(n){
                        case 1:
                             {cin>>item;
                                 push(item);
                                 break;
                                 }

                        case 2: {

                                item=pop();
                                if(item==0)
                                {
                                 cout<<"Stack is Empty"<<endl;
                                }
                                else
                                {
                                 cout<<"POPed item is "<<item<<endl;
                                }

                                pop();
                                break;
                        }
                        case 3: {traverse();
                                break;}

                        case 4: {peek();
                                break;}



                        default: cout<<"input given is not available"<<endl;
                    }
            }
    return 0;
}

int isfull()
{
    if(top==capacity-1){
        return 1;
    }else{
        return 0;
        }

    }
void push(int ele)
{
    if(isfull()){
        cout<<"stack is full"<<endl;
    }else{
        top++;
        arr[top]= ele;

        }
    }
int isempty()
{
    if(top==-1){
            return 1;
     }else{
        return 0;
        }
}
int pop()
{   if(isempty()){
        cout<<"stack is already empty"<<endl;
        }else{
            return arr[top--];
        }
    }
void peek(){
if(isempty()){
    cout<<"stack is empty"<<endl;
}else{
    cout <<arr[top]<< " is at the top"<<endl;
        }

}
void traverse(){
    if(isempty()){
        cout<<"stack is empty"<<endl;
    }else{
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<endl;
            }
    }

}
