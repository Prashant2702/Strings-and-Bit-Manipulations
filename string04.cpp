#include<iostream>
#include<algorithm>//Here sort function is available.
#include<string>

using namespace std;
int main(){
string s1 = "cwgcyegyuwfy";

sort(s1.begin(), s1.end());//for sorting of the strings.
cout << s1 << endl;
return 0;
}