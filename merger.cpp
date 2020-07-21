#include<iostream>
using namespace std;
int main()
{
    int a[4],b[4],c[8],i=0,j=0,k=0,mid,high,n;
    while(i<=mid &&i<=high)
    {
    if(a[i]<a[j])
{
    c[k]=a[i];
    k++;
    i++;
}
        else
        {
            c[k]=a[j];
            k++;
            j++;
        }
        while(i<=mid)
        {
            c[k]=a[i];
            k++;
            i++;
        }
        wj=hile(j<=high)
        {
            c[k]=a[j];
            k++;
            j++;
        }
    
        for(i=low;i<high;i++)
    {
        a[i]=c[i-low];
    }
    if(low<high)
    {
        mid=(low+high)/2;
        
    }
    cout<<"after sorted";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter element"<<i+1;
        cin>>a[i];
        
    }
    cout<<"sorted array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i]
    }