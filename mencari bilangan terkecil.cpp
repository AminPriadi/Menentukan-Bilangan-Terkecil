#include<iostream>
using namespace std;

int main()
{
    int bil1,bil2,bil3;
    cout<<"input bilangan pertama ";
    cin>>bil1;
    cout<<"input bilangan kedua ";
    cin>>bil2;
    cout<<"input bilangan ketiga ";
    cin>>bil3;

    if(bil1<bil2)
        if(bil1<bil3)
        cout<<"bilangan terkecil adalah "<<bil1;
    if(bil2<bil1)
        if(bil2<bil3)
        cout<<"bilangan terkecil adalah "<<bil2;
    if(bil3<bil1)
        if(bil3<bil2)
        cout<<"bilangan terkecil adalah "<<bil3;
    return 0;
}
