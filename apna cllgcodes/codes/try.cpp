#include<iostream>
using namespace std;
/*int main(){
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;
    return 0;
}*/

    
   int f(int x, int *py, int **ppz) {
        int y, z;
        **ppz += 1;
        z = **ppz;
        *py += 2;
        y = *py;
        x += 3;
        cout<<z<< y<< " "<<x<<endl;
        return x + y + z;
    }

    int main() {
        int c, *b, **a;
        c = 4;
        b = &c;
        a = &b;
        cout << f(c, b, a);
        return 0;
    }
