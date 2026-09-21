#include <iostream>
using namespace std;
int main() {
    int a=5;
    cout<<"while loop"<<endl;
//Entry controlled Loops
    while(a<=10){  // the condition must satisfy to start loop
        cout<<a<<endl;
        a++;
    }
    int b =2;
//exit controls loop
    cout<<"do while loop"<<endl;//in this loops the loops works without checkinng condition once 
    do{
        cout<<b<<endl;
        b++;
    }while(b<=10);
 cout<<"for loop"<<endl;
//used to run loops if you know how many iterations to do
    for(int i=0;i<=10;i++){
        cout<<i<<endl;

    }
    return 0;
}
