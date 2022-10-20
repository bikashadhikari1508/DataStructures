#include<bits/stdc++.h>
using namespace std;

class Diagonal
{
    private:
        int n;
        int *A;
    public:
        Diagonal(int n)
        {
            this->n=n;
            A=new int [n];
        }
        void set(int i,int j, int val);
        int get(int i,int j);
        void Display();
        ~Diagonal()
        {
            delete []A;
        }
};

void Diagonal::set(int i,int j,int val)
{
    if(i==j)
    {
        A[i]=val;
    }
}

int Diagonal :: get(int i,int j)
{
    if(i==j)
    {
        return A[i];
    }
    else 
        return 0;
}

void Diagonal::Display()
{
     int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                cout<<A[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<"\n";
    }
}

int main()
{
    Diagonal d(4);           //4 is the size
    d.set(0,0,10);
    d.set(1,1,15);
    d.set(2,2,20);
    d.set(3,3,25);
    d.Display();
    return 0;
}
