#include<iostream>
using namespace std;
int main()
{
    int a,b,i=0,j=0,k,l;
    cout<<"row_and coloum_number.\n";
    cin>>a>>b;
    int arr[a][b];
    cout<<"enter_"<<a*b<<"_elements.\n";
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(arr[i][j]>=arr[i][j-1]||arr[i+1][j]||arr[i][j+1])
            {
                cout<<arr[i][j]<<"->position:["<<i<<"]["<<j<<"]\n";
            }
             if(arr[i][j]>=arr[i][j-1])
            {
                cout<<arr[i][j]<<"->position:["<<i<<"]["<<j<<"]\n";
                break;
            }
            else  if(arr[i][j]>=arr[i+1][j])
            {
                cout<<arr[i][j]<<"->position:["<<i<<"]["<<j<<"]\n";
                break;
            }
            else if(arr[i][j]>=arr[i][j+1])
            {
                cout<<arr[i][j]<<"->position:["<<i<<"]["<<j<<"]\n";
                break;
            }
        }
    }
    return 0;
}
