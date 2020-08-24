#include <iostream>

using namespace std;

int main()
{
    int n[5],i;
    cout<<"Enter Elements : ";
    for(int i=0;i<5;i++)
    {
        cin>>n[i];
    }
    cout<<"you entered : ";
    for(int i=0;i<5;i++);
    {
    cout<<endl<<*(n+i);
}
    return 0;
}
