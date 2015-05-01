#include <iostream >
using namespace std;
void pn( int x, int& p, int& n ){
    p = x-1;
    n = x+1;
}
int main(){
    int x = 10, y, z;
    pn( x, y, z );
    cout <<  y << ", " << z << "\n";
    return 0;
}
