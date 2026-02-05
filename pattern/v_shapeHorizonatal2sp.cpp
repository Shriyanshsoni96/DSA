  #include<iostream>
using namespace std;
int main ()
{ int i;
  
       int n ;
   cout<<"Enter the value of row ";
   cin>>n;
    i=1 ;
  while (i<=n)
  {  int space =(2*i)-2;
   while(space )
  {
    cout<<"  ";
  space--;}
   int print = n-i+1;
   while (print)
   {
       cout<<" *";
      print--;
   }
  
cout<<endl;
i++;  }
i=n-1;
 while (i>=1)
  {  int space =1;
   while(space<=(2*i)-2)
  {
    cout<<"  ";
  space++;
}
int print = n-i+1;
   while (print)
   {
       cout<<" *";
      print--;
   }
cout<<endl;
i--;
}
}
