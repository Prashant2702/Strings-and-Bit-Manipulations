//Form the biggest Number from the Numeric string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
string s = "76735733787";

sort(s.begin(), s.end(), greater<int>());


cout << s <<endl;
    return 0;
}
