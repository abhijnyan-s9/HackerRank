#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function    
    int sum=*a+*b;
    int diff;
    if(*a>*b){
         diff=*a-*b;
    }
    else{
        diff =*b-*a;
    }
    *a=sum;
    *b=diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<"\n"<<b;

    return 0;
}