#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,20,30};
    // cout<<*arr<<endl;

    int *ptr = arr;

    for(int i=0;i<3;i++)
    {
        // cout<<*ptr<<endl;
        // ptr++;

        // OR

        
        cout<<*(arr+i)<<endl;
        // arr++; ........ -> This is illegal.
    }


}