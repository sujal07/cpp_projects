# include <iostream>
using namespace std;

void area ();
int main() {

    area ();
    return 0;
          }
          void area () {
            int b,h;
            float num;
            cout << "enter sides of the triangle:";
            cin >> b;
            cin >> h; 
            num = 0.5*(b*h);
            cout << "area of triangle is:"<< num;

              }