#include<iostream>
using namespace std;
int main()
{
    int a[5]={5,4,8,3,2};
    int n=5;
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
            }
            else
            {
                break;
            }
        }
    }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
        return 0;

}

