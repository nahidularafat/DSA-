// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class stack
{
    int top;
    int sz;
    public :
    int a[5];
    stack(int n)
    {
        sz= n;
        top=-1;
    }
    void push(int x)
    {
        if(top>=sz-1)
        {
            cout<<"overflow"<<endl;
        }
        a[++top]=x;
    }
    void pop()
    {
        if(top <0)
        {
            cout<<"underflow"<<endl;
            return;
        }
        top--;
    }
    
    int peek()
    {
        return a[top];
    }
    int isEmpty()
    {
        if(top<0)
        {
            return true;
        }
        return false ;
    }
};
int main() {
   stack s(5);
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   while(!s.isEmpty())
   {
       int val = s.peek();
       cout<<val<<" ";
       s.pop();
   }
 

    return 0;
}
