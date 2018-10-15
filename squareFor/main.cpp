#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;


    for(int x = 0; x <= n; x++){
        cout<<'#';

    }
    cout<<endl;

    for(int y = 0; y <=n; y++){
        cout<<'#';
        for(int space = 0; space <=n-1; ++space){
        cout<<'s';
        }
        cout<<'#'<<endl;
}
    for(int x = 0; x<=n; x++){
    cout<<'#';
    }
    return 0;
}
