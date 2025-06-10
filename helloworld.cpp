#include<cstdlib>
#include<iostream>
using namespace std;
int main(){
    cout<<"hello world\n";
    string message = "hello there";
    string new_message;
    new_message = message;
    message = "change";
    cout << new_message;
    return 0;
}