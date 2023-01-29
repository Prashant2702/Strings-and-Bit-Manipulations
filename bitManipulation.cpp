//Get Bit.
#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
//Set Bit-It means to replace Zero and put 1.
int setBit(int n, int pos){
    return (n | (1<<pos));
}
//ClearBit-To clear 1 and put 0.
int clearBit(int n, int pos){
    int mask = ~(1<<pos);
}
//Update Bit.
int updateBit(int n,int pos, int value){
    int mask = ~(1<<pos);
    return(n | (value<<pos));
}
int main(){

//cout<<getBit(5,2);
//cout<<setBit(5,1)<<endl;
//cout<<clearBit(5,2)<<endl;
cout<<updateBit(5,1,1)<<endl;
    return 0;
}