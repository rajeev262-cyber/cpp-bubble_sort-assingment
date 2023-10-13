#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ;
int main ()
{
    int arr[6] = {2,3,4,5,6,7};
    int n = 6 ;
    for (int i=0 ; i< n-1 ; i++)
    {
        if (arr[i] >arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }
    int i ;
    for ( i=0 ; i< n-1 ;i++)
    {
        if (arr[i]>arr[i+1]){
            cout << "no " ;
            break ;
        }
    }
    if (i== n-1) cout << "yes ";
    return 0 ;

}