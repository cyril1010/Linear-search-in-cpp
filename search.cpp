/* PROGRAM TO GET INPUT FROM USER AND CHECK THE PRESENCE OF DATA IN THE LIST USING LINEAR SEARCH METHOD */ 



#include <iostream>

using namespace std;

int main()

{

    int i,j,size,array[50],key;

    cout<<"\n ENTER THE NUMBER OF STUDENTS = ";

    cin>>size;

    cout<<"\n ENTER THE ADMISSION NUMBER = ";

    for(int j=0;j<size;j++)

    {

        cin>>array[j];

    }

    cout<<"ENTER THE KEY TO SEARCH = ";

    cin>>key;

    for(i=0;i<size;i++)

    {

    if(key==array[i])

    {

        cout<<"KEY FOUND AT INDEX ";

    }

    else

    {

        cout<<"KEY NOT FOUND AT INDEX ";

    }

    }

return 0;

}
