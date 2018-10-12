/*Sometimes a program requires two stack containing the same type of items. If the two stacks are stored in separate arrays.
Then one stack might overflow while there was considerable unused space in the other. A neat way to avoid the problem is to put all the space in one array and let one stack grow from one end of the array and the other stack start at the other end and grow in opposite direction i.e.toward the first stack, in this way, if one stack turns out to be large and the other
small, then they will still both fit, and there will be no overflow until all the space is actually used.
Declare a new structure type Double stack that includes the array and the two indices top A and top B, and write functions Push A, Push B, Pop A and Pop B to handle the two stacks with in one Double Stack.
Implementation using C++. */

# include<bits/stdc++.h>
using namespace std;
class DoubleStack
{
private:
    int topA;
    int topB;
    int size;
public:
    void length(int arr[],int s)
    {
        size=s;
        topA = -1; // stack rises in upward direction
        topB = s;  // stack rise in downword direction
        for(int i=0; i<s; i++)
        {
            arr[i] = NULL;
        }
    }

    int pushA(int arr[],int data)
    {
        if((topA+1)==topB)
        {
            cout<<"Overflow A";
            return 0;
        }
        else
        {
            arr[++topA] = data;
            return 1;
        }
    }
    int pushB(int arr[],int data)
    {
        if((topB-1)==topA)
        {
            cout<<"Overflow B";
            return 0;
        }
        else
        {
            arr[--topB] = data;
            return 1;
        }
    }
    int popA(int arr[])
    {
        if((topA)==-1)
        {
            cout<<"\nUnderflow A\n";
            return 0;
        }
        else
        {
            cout<<arr[topA]<<" is popped out";
            arr[topA--]=0;
            return 1;
        }
    }
    int popB(int arr[])
    {
        if((topB)==size)
        {
            cout<<"\nUnderflow B\n";
            return 0;
        }
        else
        {
            cout<<arr[topB]<<" is popped out";
            arr[topB++]=0;
            return 1;
        }
    }
    void display(int arr[])
    {
        cout<<arr[size-1]<<"<- \n";
        for(int i=size-2; i>=0; i--)
            cout<<arr[i]<<"\n";
    }
};

int main()
{
    int s,choice;
    int data;
    cout<<"Enter no. of elements in array:";
    cin>>s;
    int arr[s];
    for(int i=0; i<s; i++)
        arr[i]=0;
    DoubleStack ds;
    ds.length(arr,s);
    while(1)
    {
        cout<<"\n1. PushA"<<"\n";
        cout<<"2. PushB"<<"\n";
        cout<<"3. PopA"<<"\n";
        cout<<"4. PopB"<<"\n";
        cout<<"5. Display stack"<<"\n";
        cout<<"6. Exit"<<"\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"\nEnter element in Stack A: ";
            cin>>data;
            ds.pushA(arr,data);
            break;
        case 2:
            cout<<"\nEnter element in Stack B: ";
            cin>>data;
            ds.pushB(arr,data);
            break;
        case 3:
            ds.popA(arr);
            break;
        case 4:
            ds.popB(arr);
            break;
        case 5:
            cout<<"\nCurrent Stack is :\n";
            ds.display(arr);
            break;
        case 6:
            return 0;
        default:
            cout<<"\n Wrong Input\n ";
        }
    }
    return 0;
}
