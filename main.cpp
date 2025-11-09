#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[])
{
   int *pa, *pb, i, temp;
   int n;

   n = argc - 1;  // The number of elements is the number of arguments minus 1

   pa = new int[n];
   pb = pa;

   for (i = 0; i < n; i++) 
    {
        pa[i] = atoi(argv[i + 1]);  // Convert each argument to an integer and store it
    }

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
