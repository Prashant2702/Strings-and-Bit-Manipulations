//Strings conversion.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
/*
Simple  method:-

string str = "aggxxgsgiuuih";

//Convert into upper case.
for(int i=0; i<str.size(); i++){
    if(str[i] >= 'a' && str[i]<='z')
    str[i] -= 32;//Only do +32 instead of -32 for the lower case conversion. 
}

cout << str;
*/

string s = "gygewggkkbvwkbv";

transform(s.begin(), s.end(),s.begin(), ::toupper);

cout<< s << endl;

    return 0;
}