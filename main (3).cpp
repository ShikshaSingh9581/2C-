//write a program to sum of n numbers given by user
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int ans=n*(n+1)/2;
    cout << ans << endl;
    return 0;
}