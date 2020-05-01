#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int r(int);
int eb(int);
int ebn(int);
int targetrr(int,int);
int main()
{    system("color 02");
    int balls=0,runs=0,wickets=0,choice,exit=0,extrab,extranob,match,overs=0;
    char c1[3],c2[3],std[30];
    int matchovers=0,target=0;
    int f=1;
    cout<<"\n||\t\t\t**WELCOME**\t\t\t||";
    cout<<"\nEnter stadium name :";
    gets(std);
    strupr(std);
    cout<<"\nEnter match no:";
    cin>>match;
    cout<<"\nenter Overs to be played by one team :";
    cin>>matchovers;
    cout<<"\nEnter the name of batting team in initials :";
    cin>>c1;
    cout<<"\nenter the name of bowling team in initails :";
    cin>>c2;
    strupr(c1);
    strupr(c2);
    system("CLS");
    system("color 06");
    int c1runs,c2run,rr;
    do
    {
	 int t[3],i;
	 if(overs>=matchovers||wickets>=10)
	{
	 c1runs=runs;
	 balls=0;
	 runs=0;
	 wickets=0;
	 target=targetrr(c1runs,overs);
	 for(i=0;i<=2;i++)
	 {
	   t[i]=c1[i];
	   c1[i]=c2[i];
	   c2[i]=t[i];
	 }
	 overs=0;
	}
	cout<<"\n\t\t\tVENUE::"<<std;
	cout<<"\n"<<"\n\t\t\t\tMatch No."<<match;
	cout<<"\n\t\t\t\t"<<c1<<" VS "<<c2;
	cout<<"\n\t\t-------------------------------------------------";
	cout<<"\n\t\t"<<c1<<":^|^|^|Score:"<<runs<<"--"<<wickets<<"|^|^|^:"<<"\tOvers="<<overs<<"."<<balls;
	if(target>0)
	{
	cout<<"\n\t\t\t**Target**:"<<target;
	if(runs>=target)
	{
	 cout<<"\n\t!!!!Congratulations\t"<<c1<<" \tYou won";
	 f=f+1;
	 }
	}
	cout<<"\n\t\t-------------------------------------------------";

	cout<<"\n\nChoose the options number:\n1]runs++\n2]wickets++\n3]balls_only\n4]Extras\n5]Extras with no count of balls\n6]Exit software";
	cout<<"\n\nENTER YOUR CHOICE NUMBER:";
	cin>>choice;
	switch (choice)
	{
	case 1:
	    runs=r(runs);
	    balls=balls+1;
	    break;
	case 2:
	    wickets=wickets+1;
	    balls=balls+1;
	    break;

	case 3:
	    balls=balls+1;
	    break;
	case 4:
	     extrab=eb(runs);
	     runs=extrab;
	     balls=balls+1;
	     break;
	case 5:
	     extranob=ebn(runs);
	     runs=extranob;
	     break;
	case 6:
	      exit=exit+1;
	      break;
	default:
	    cout<<"\n||invalid input||";
	    break;
	}
    if(balls>=6)
    {
     overs=overs+1;
     balls=balls-6;
    }
    if(f>1)
    {
     exit++;
    }
    system("CLS");
    }while(exit<=0);
    cout<<"\n\t\t\t||||THANK YOU||||||";
    system("PAUSE");
}

int r(int t)
{
    int i,result;
    cout<<"\nEnter increment in runs :";
    cin>>i;
    result=i+t;
    return(result);
}
int eb(int r)
{
    int extra,result;
    cout<<"\nEnter Extra runs :";
    cin>>extra;
    result=extra+r;
    return(result);

}
int ebn(int r)
{
    int extra,result;
    cout<<"\nEnter Extra runs :";
    cin>>extra;
    result=extra+r;
    return(result);
}

int targetrr(int r,int o)
{
	int target;
	float rr;
	target=r+1;
	rr=target/o;
	cout<<"\tRUNS NEEDED TO WIN \t"<<target<<"\tAT A RUN RATE OF\t"<<rr;
	return(target);
}
