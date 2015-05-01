/*#include <stdio.h>//wrk for c cmnds
#include <algorithm>//wrk fr invuilt fun
#include <cstdlib>
#include <cmath>
#include <iostream>
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i;
    int a[1000];
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    int c=count(a,a+n,1);//count wrk s a found......
    for(i=0;i<n;i++)
        cout<<a[i]<<"\n";
    cout<<c;
    cout<<"\n"<<endl;
    return 0;
}
