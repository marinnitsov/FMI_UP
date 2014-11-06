#include<iostream>
using namespace std;
int main()
{  int n,del=2,d=0;
   cout<<"vuvedete chislo:"<<endl;
   cin>>n;
   while(del<n)
    {   if(n%del==0)
	    {
	        d=1;
	        break;
        }
        del=del+1;
    }
   if(n>1&&n<4)
      d=0;
   if(n==1)
	  d=1;
   if(d==1)
      {cout<<"Ne e prosto"<<endl;}
   else
      {cout<<"Prosto e"<<endl;}

   return 0;
}
