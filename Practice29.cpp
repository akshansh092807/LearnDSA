#include<iostream>
 using namespace std; 
 int main()
{
   int n, i;
   cout<<"Enter table: ";
   cin>>n;
   for(int i = n; i<=10*n; i=i+n)
   {
    cout<<i<<endl;
   }
}