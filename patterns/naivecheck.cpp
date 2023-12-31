/* C program for A modified Naive Pattern Searching
  algorithm that is optimized for the cases when all
  characters of pattern are different */
#include<stdio.h>
#include<string.h>
#include<iostream>
using   namespace   std;

/* A modified Naive Pettern Searching algorithn that is optimized
   for the cases when all characters of pattern are different */
void search(char pat[33], char txt[11])
//void search(string pat, string txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int i = 0;

    while (i <= N - M)
    {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;

        if (j == M)  // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        {
           printf("Pattern found at index %d \n", i);
           i = i + M;
        }
        else if (j == 0)
           i = i + 1;
        else
           i = i + j; // slide the pattern by j
    }
}

/* Driver program to test above function */
int main()
{
   char txt[33];// = "ranchordasshamoldaschanchor";
   char pat[11] ;//= "das";
    cout<<"enter a   text.\n";
    gets(txt);
  // cin>>txt;
   cout<<"\nenter   pattern.\n";
   cin>>pat;

  /* string   txt;
   string pat//; = "ABCD";
   cout<<"enter a   text.\n";
   cin>>txt;
   cout<<"\nenter   pattern.\n";
   cin>>pat;*/
   cout<<"DISPLAY.......SHOW.\n";
   search(pat, txt);
  return    0;
}

