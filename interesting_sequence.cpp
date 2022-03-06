/*A sequence A={A1,A2,...An} is said to be an interesting sequence if:
    Ai+Si=k; for all i<=i<=n, where, Si=A1+A2+...Ai
Find the maximum length of an interesting sequence for a given value of k. 
If there are no interesting arrays, print 0*/

#include<iostream>
#include<conio.h>
using namespace std;
int interesting_sequence(int k)
{
    int c=0;
    while(k%2==0)
    {
        k=k/2;
        c++;
    }
    return c;
}
int main()
{
    int k;
    cout<<"\nEnter the value of k:";
    cin>>k;
    int count=interesting_sequence(k);
    cout<<count;
    return 0;
}