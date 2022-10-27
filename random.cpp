#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the size of the array : ";
  cin>>n;
  int *a=new int[n];
  cout<<"enter elements in the array ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i=i+2)
  {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
           
        }
         for(int k=i+2;k<n;k++)
            {
                if(a[k]<a[i+1])
                {
                    int temp=a[k];
                    a[k]=a[i+1];
                    a[i+1]=temp;
                }
            }
         
  }
 cout<<"Printing the sorted array..."<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
  
    
}