#include<iostream>
using namesapce std;

class array
{
    public:
    int isize ;
    int *arr;

    array (int ilenght)
    {
        isize = ilenght;
        arr = new int[isize];

    }

    ~array()
    {
        delete []arr;
    }
    
    void accept()
    {
        cout<<"enter the values \n";
        int i = 0;

        for(i=0 ; i < isize; i++)
        {
            cin>>arr[i];
        }
    }
};

int main()
{
    array obj1(4);
    array obj2(7);

    return 0;

}