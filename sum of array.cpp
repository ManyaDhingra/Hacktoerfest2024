#include <iostream>
using namespace std;
int main()
{
    int size, arr[100], sum=0;
    cin>>size;
    for(int i =0; i<size; i++)
    {
        cin>>arr[i];
    }
    for (int i =0; i<size; i++)
    {

        sum= sum+arr[i];


    }
    cout<<sum<<endl;
}
