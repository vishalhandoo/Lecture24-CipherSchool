#include<bits/stdc++.h>
using namespace std;

int fib(int input){
    if(input==0||input==1){
        return 1;
    }
    int Final_answer;
    Final_answer=fib(input-1)+fib(input-2);

    return Final_answer;
}

int main(){

    int input;
    cout<<"Enter the nu,ber you find the series: ";
    cin>>input;

    cout<<"The number at the "<< input << " position is : ";
    cout<<fib(input);   
    return 0;
}