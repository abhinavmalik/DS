#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int fibonacci(int size)
{
    int a[10];
    a[0]=1;
    a[1]=1;
    for (int i=2; i<size; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    for (int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    int size;
    cout<<"Enter the size of the series! "<<endl;
    cin>>size;
    fibonacci(size);

}
