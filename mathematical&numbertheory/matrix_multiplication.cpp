#include<iostream>
using namespace std;
int  main()
{
    int a,b,c,d,e,f;
    int m,n,o,p;
    int mat[5][5],sum;
    cout<<"enter_1st_matrix_row_and_column.\n";
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter_:"<<m*n<<"_elements_of_matrix.\n";
    for(a=0;a<m;a++)
    {
        for(b=0;b<n;b++)
        {
            cin>>arr[a][b];
        }
    }

    cout<<"enter_2st_matrix_row_and_column.\n";
    cin>>o>>p;
    int arr2[o][p];
    cout<<"enter_:"<<o*p<<"_elements_of_matrix.\n";
    for(c=0;c<o;c++)
    {
        for(d=0;d<p;d++)
        {
            cin>>arr2[c][d];
        }
    }
    for(a=0;a<m;a++)
    {
        for(d=0;d<p;d++)
        {
            for(c=0;c<o;c++)
            {
                mat[a][d]+=arr[a][c]*arr2[c][d];
            }
           // mat[a][d]=sum;
           // sum=0;
        }
    }
    cout<<"after_multiplication_the_two_matrix.\n";
    for(a=0;a<m;a++)
    {
        for(d=0;d<p;d++)
        {
            cout<<mat[a][d];
        }
        cout<<"\n";
    }
    cout<<"\t";
    cout<<"\n\nfinished.\n\n";
    return 0;
}
