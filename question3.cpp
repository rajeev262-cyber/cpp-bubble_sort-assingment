#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    int arr[]  ={-3,2,-3,4,2};
    int n = 5 ;
    int a = 1 ;    
    for (int j=0 ; j<n+2 ; j++)
    {
        bool flag = true ;
        int start = a ;
    
    for (int i=0 ; i<5;i++)
    {
        
        start += arr[i];
        if (start < 1 ) {
            flag = false ;
            break ;

        }
    }
    if (flag==false ) {
        a++;

    }
    }
    cout << a ;
}
