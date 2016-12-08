#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int fibonacci(int n)
{
    if ( n==1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n, i=1;
    cout<<"Enter the size of the series! "<<endl;
    cin>>n;
    cout<<"The series is: "<<endl;
    while (i<n)
    {
        cout<<fibonacci(i);
        i++;
    }
}
