#include<iostream>
using namespace std;
int main()
{
	int i,a,b,c=0,n;
	char str[33],ch;
	cout<<"enter_a_string_.\n";
	cin>>str;
	cout<<"enter_a_character_do_you_want_to_be_search.\n";
	cin>>ch;
/*	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		c++;
	}*/
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		c++;
		i++;
	}
	if(c==0)
	{
		cout<<ch<<"......the_character_is_not_present_present.:";
	}
	else
	{
		cout<<"occurence_of_character_"<<ch<<"........and:"<<c<<"......time"<<endl;
	}
	cout<<"\n\n";
	return 0;
}
