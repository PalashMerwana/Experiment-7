//Palash Merwana 
//Prn: 23070123095
// Experiment 7: arrays and strings 

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int i;
    cout<<"enter a string: ";
    getline(cin,a);

    for(i=a.length()-1;i>=0;i--)
    {
        cout<<a[i ];
    }

    return 0; 
}