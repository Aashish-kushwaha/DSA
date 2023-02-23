#include<bits/stdc++.h>

using namespace std;

#define cap 10
int size=0;
int a[cap];


bool isfull()
{
    if(size==cap)
    return true;

    return false;
}

bool isempty()
{
    if(size==0)
    return true;

    return false;
}

void eenque(int x)
{
    if(isfull())
    return ;

    a[size]=x;
    size++;
}

void deeque()
{
    if(isempty())
    return ;

    for(int i=0;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;

}

int getfront()
{
    if(isempty())
    {
        return -1;
    }

    return a[0];

}

int getrear()
{
    if(isempty())
    {
        return -1;
    }

    return a[size-1];
}
int main()
{
    eenque(10);
    eenque(20);
    eenque(30);
    eenque(40);
   cout<<"fornt element:"<<getfront()<<endl;
    deeque();
    cout<<"front element:"<<getfront()<<endl;

    cout<<"rear element:"<<getrear()<<endl;

    deeque();
    deeque();
    deeque();
    cout<<"queue is:"<<isempty();
    
    
}