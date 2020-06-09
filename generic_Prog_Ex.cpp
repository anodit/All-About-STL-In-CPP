//Prog without using Generic Programming.
#include<iostream>
using namespace std;

int search(int a[],int n,int key)
{
    for(int p=0;p<n;p++)
    {
        if(a[p]==key)
            return p;
    }
    return -1;
}

int main()
{
    int a[]= {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(int);
    int key = 11;
    cout<<search(a,n,key);
    return 0;
}

//Prog using Generic Programming.
#include<iostream>
using namespace std;

// template<class T> will work same as the template<typename T>
template<typename T>
int search(T arr[],int n, T key)
{
    for(int p=0;p<n;p++)
    {
        if(arr[p]==key)
            return p;
    }
    return -1;
}

int main()
{
    float f[] = {1.2,2.5,3.5,4.8,5.4};
    float key =2.5;
    cout<<search(f,5,key);
    return 0;
}

