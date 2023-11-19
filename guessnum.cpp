#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(i%2==0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    srand(time(nullptr));
    int sc=(rand()%100)+1;
    cout<<"Guess a number Between 1 to 100 "<<endl<<endl;
    int att=0,usernum;
    while(att<10)
    {
        cout<<"Enter your Guessed Number : ";
        att++;
        cin>>usernum;
        if(usernum==sc)
        {
                for(int i=0;i<60;i++)
                    {
                        cout<<"-";
                    }
                    cout<<endl;
                cout<<"Congrats!! You found the number in "<<att<<" attempt";
                break;
        }
        else
        {
            if(att==10)
            {
                cout<<"oops Better Luck Next Time You have reached the limit "<<endl;
            }
            if(att==3)
            {
                if(usernum>sc)
                {
                    cout<<"CLUE : Try with Smaller number "<<endl;
                }
                else if(usernum<sc)
                {
                    cout<<"CLUE : Try with Larger number "<<endl;
                }
                if(sc%2==0)
                {
                    cout<<"Bonus CLUE : It is a Even number "<<endl;
                    for(int i=0;i<60;i++)
                    {
                        cout<<"-";
                    }
                    cout<<endl;
                }
                else
                {
                    cout<<"Bonus CLUE : It is a Odd number "<<endl;
                    for(int i=0;i<60;i++)
                    {
                        cout<<"-";
                    }
                    cout<<endl;
                }
            }
            else if(att==5)
            {
                if(usernum>sc)
                {
                    cout<<"CLUE : Try with Smaller number "<<endl;
                }
                else if(usernum<sc)
                {
                    cout<<"CLUE : Try with Larger number "<<endl;
                }
                for(int i=2;i<=100;i++)
                {
                if(sc%i==0)
                {
                    if(isprime(i))
                    {
                        cout<<"Bonus CLUE : The number is a Prime number"<<endl;
                        break;
                    }
                    else
                    {
                    cout<<"Bonus CLUE : The number is a Multiple of "<<i<<endl;
                    for(int i=0;i<60;i++)
                    {
                        cout<<"-";
                    }
                    cout<<endl;
                    break;
                    }
                }
                }
            }
            else if(att==0|| att==1 || att==2|| att==4 || att==6 || att==7 || att==8 || att==9 )
            {
                if(usernum>sc)
                {
                    cout<<"CLUE : Try with Smaller number "<<endl;
                    for(int i=0;i<60;i++)
                    {
                        cout<<"-";
                    }
                    cout<<endl;
                }
                else if(usernum<sc)
                {
                    cout<<"CLUE : Try with Larger number "<<endl;
                    for(int i=0;i<60;i++)
                    {
                        cout<<"-";
                    }
                    cout<<endl;
                }
            }
        }
    }
}

