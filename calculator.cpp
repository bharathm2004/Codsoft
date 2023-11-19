#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num1,num2;
    char op;
    cout<<" Operations that you can perform "<<endl<<endl;
    cout<<" => + for ADDITION "<<endl<<" => - for SUBRACTION "<<endl<<" => * for MULTIPLICATION "<<endl<<" => / for DIVISION "<<endl<<endl;
    cout<<"Enter the First number : ";
    cin>>num1;
    cout<<endl;
    cout<<"Select the Operator : ";
    cin>>op;
    cout<<endl;
    cout<<"Enter the Second number : ";
    cin>>num2;
    cout<<endl;
    switch(op)
    {
        case '+' :
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;
        case '-' :
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;
        case '*' :
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break;
        case '/' :
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break;
        default:
        cout<<"Enter valid operator ";
    }
}
