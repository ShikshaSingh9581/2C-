//write a program to print nth term (given by user)of an arithmatic progression(A.P) 
#include<iostream>
using namespace std;
int main()
{
    int a,n,d,ans;
    cout<<"enter a number of a";
    cin>>a;
    cout<< "enter a number of n";
    cin>>n;
    cout<<"enter a number of d";
    cin>>d;
    ans=(a+(n-1)*d);
    cout<< ans << endl;
    return 0;
    
}