//pass_by_value
#include<bits/stdc++.h>
using namespace std;
void sum(int num)
{
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;
    num+=20;
    cout<<num<<endl;
}
int main()
{
    int num=10;
    sum(num);
    cout<<num<<endl;
    return 0;
}