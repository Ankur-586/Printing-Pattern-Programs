//Alternative Way Using If-Else Logic
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number Of Rows:"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            if(i>=j)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
