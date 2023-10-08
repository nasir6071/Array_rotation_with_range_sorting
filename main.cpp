#include <bits/stdc++.h>

using namespace std;
void range_bubble_sort(int arr[],int startIndex, int endIndex, bool ascending)
{
    for(int i = 0; i < endIndex - startIndex; i++)
    {
      for(int j = startIndex; j < endIndex-i; j++)
        {
            if(ascending)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
            else
            {
                if(arr[j] < arr[j+1])
                {
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}
int main()
{
    int n, pick;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int a[n];
    for(int i=0; i<n ; i++)
    {
        cout<<"index "<<i<<" = ";
        cin>>a[i];
    }
    range_bubble_sort(a, 0, n-1, false);
    for(int i=0; i<n ; i++)
        cout<<a[i]<<" ";
    cout<<endl<<"Enter the start value = ";
    cin>> pick;

    range_bubble_sort(a, pick, n-1, true);
    range_bubble_sort(a, 0, pick-1, true);

    cout<<"after operation:"<<endl;

    for(int i=0; i<n ; i++)

        cout<<a[i]<<" ";

    return 0;
}














