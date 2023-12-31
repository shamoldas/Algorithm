#include<iostream>
#include<string.h>
using   namespace   std;
int main()
{
    int i,a,n,b;
    char    name[22],name2[22];
    cout<<"enter    a   name.\n";
    gets(name);
    strcpy(name2,name);
    strrev(name2);
    /*cout<<"DISPLAY.....\n";
    if((name,name2)>0)
    {
        cout<<"cool.\n...palindrome string.\n";
    }
    else
    {
        cout<<"nothing. not palindrome.\n";
    }*/
    cout<<"DISPLAY.....\n";
    cout<<name<<endl;
    cout<<"\nname2:"<<name2<<endl;
    cout<<"\nname:"<<name<<"    name2:"<<name2<<endl;
    return  0;
}
