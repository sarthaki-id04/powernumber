#include<iostream>
using namespace std;
double power(double n,int p=2)
    {
        double result=1;
        for(int i=0;i<p;i++)
            {
                result*=n;
            }
        return result;
}
int main()
{
double n;
int p;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter p\n";
    cin>>p;
double result=0;
if(p<0)
{
result=power(n);
cout<<n<<"^2="<<result<<"\n\n";
}
else
{
result=power(n,p);
cout<<n<<"^"<<p<<"="<<result<<"\n\n";
}
}
