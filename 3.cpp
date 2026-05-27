#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact=1;
    cout<<"enter number you want factorial: ";
    cin>>n;

    for(int i;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<< n<<" is: "<<fact<<endl;
    return 0;
}