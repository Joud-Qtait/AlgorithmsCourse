#include<iostream>
#include<ctime>

using namespace std;

long long iterativeFactorial(long long n)
{
    int fact = 1;
    for(long long i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

long long recursiveFactorial(long long n)
{
    if(n==0)
    return 1;
    else
    {
        return n* recursiveFactorial(n-1);
    }
}

int main()
{
    long long n;
    cout<<"Please enter a positive number to find its factorial"<<endl;
    cin>>n;
    if(n<=0)
    {
        cout<<"Please enter a positive number"<<endl;
    }
    else
    {
        //long long result= iterativeFactorial(n);
        long long result= recursiveFactorial(n);
        cout<<"The factorial of the number you entered is :"<<result<<endl;
        clock_t t1;
        t1=clock();
        float diff = (float)t1/1000;
        cout<<diff<<endl;
    }
    return 0;
}
