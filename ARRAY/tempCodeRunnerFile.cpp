int main()
{
    int n=10;
    int a[n]={1,2,3,4,5,6,7,8,9,10};
    int temp;

    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}