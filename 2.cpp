#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the alphabet to check its vowel or not: ";
    char a;
    cin>>a;
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    cout<< a << " is a vowel"<<endl;
    else
    cout<< a << " is not a vowel"<<endl;
    return 0;
