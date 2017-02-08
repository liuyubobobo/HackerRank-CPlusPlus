#include <iostream>
#include <string>

using namespace std;

int main() {

    int a, b;
    cin>>a>>b;

    string nums[10] = { "zero","one","two","three","four","five",
                        "six","seven","eight","nine"};
    for( int i = a ; i <= b ; i ++ )
        if( i < 10 )
            cout<<nums[i]<<endl;
        else if( i%2 )
            cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;

    return 0;
}