/* Given an array arr[] of integers. Find out the maximum difference between any two elements such that larger element
appears after the smaller number such that arr[j] > arr[i] where j>i. */

#include <iostream>
using namespace std;
long int maximum_diff(long int arr[],long int n)
{
    /* The function assumes that there are
    at least two elements in array. The
    function returns -1 if the
    array is sorted in decreasing order and
    returns 0 if elements are equal */
    long int min_elem=arr[0];
    long int max_diff=arr[1]-arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]-min_elem > max_diff)
            max_diff = arr[i]-min_elem;
        if(arr[i]< min_elem)
            min_elem = arr[i];
    }
    if(max_diff < 0)
        return -1;
    else
        return max_diff;

}
int main()
{
    long int n;
    cout<<"Enter no. of elements :";
    cin>>n;
    long int arr[n];
    cout<<"\nEnter elements in array \n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long int result= maximum_diff(arr,n);
    cout<< "\nMaximum difference is :"<<result;

    return 0;
}
