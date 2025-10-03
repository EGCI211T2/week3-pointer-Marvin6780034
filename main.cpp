#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
int *pa, *pb, i, temp;
int n;

cout<<"How many numbers? ";
cin>>n;
pa=new int[n];
pb = pa;

for (i=0;i<n;i++)
{
  cout<<"Input no."<<i+1<<": ";
  cin>>*pa;
  pa++;
}

pa-=n;

cout<<"Original: ";
for (i=0; i<n-1;i++, pa++)
{
   cout<<setw(3)<<*pa;//<<endl;
}
cout<<setw(3)<<*pa<<endl;

pb=pa;
pa-=(n-1);

for (i=0; i<n/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa-=(n/2);


cout<<"Reversed: ";
for (i=0; i<n-1; i++){
   cout<<setw(3)<<*pa ;//<<endl;
  pa++;
}
cout<<setw(3)<<*pa<<endl;
pa-=(n-1);
delete []pa;

return 0;
}
