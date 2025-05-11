#include <iostream>
#include <cstdio>
using namespace std;

     
class Rectangle{
    public:
        int height,width;
        void display(){
            cout<<height<<""<<width<<endl;
        }
        };

        
class RectangleArea :               
    public:
          void read_input(){
            cin>>height>>width;
          }
        void display(){
            Rectangle::diplay(){
                cout<<height*width;
            }
        }
         };
int main()
{
    RectangleArea r_area;

    
    return 0;
}
