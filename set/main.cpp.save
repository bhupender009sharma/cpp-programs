#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void setDemo(){
    set<int> S;
    // using "insert" command for adding no. in the Set , while in Vector "V.push_back()" command is used
    S.insert(4);
    S.insert(9);
    S.insert(1);
    S.insert(-11);
    S.insert(-15);

    for(int i:S){
        cout<< i<< " ";
    }
    cout<< endl;

    S.erase(1);

    for(int i:S){
        cout<< i<< " ";
    }
    cout<< endl;

    S.insert(21);
    // -15,-11,4,9,21;
    // using iterators by using 'auto' methods
    auto it = S.lower_bound(9);
    auto it2 = S.upper_bound(9);

    cout<< *it<<" "<< *it2<<endl;
//using upper bound to find any no. greater than 21 in Set, if not present then iterator will give S.end() as an output
    auto it3 = S.upper_bound(21);
    if(it3 == S.end()){
        cout<<"no value is greater than the 21 "<< endl;
    }
// using find function
     auto it4 = S.find(9);
     if(it4 == S.end()){
        cout<<"no such item present"<<endl;
     }else{
        cout<<"item ="<<*it4<<endl;
     }
}

int main()
{
// set are used for inserting a no. in the asc. or dec. order,while keeping the order maintained,they are also kind of vectors
// it takes log(N) time ordering and inserting the no.
  setDemo();

    return 0;
}
