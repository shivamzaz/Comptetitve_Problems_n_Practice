    #include <algorithm>
    #include <cstdio>
    #include <iostream>
    #define llu long long unsigned
    #define lld long long
    #define ld long
    #define gc getchar_unlocked
    #define pc putchar_unlocked
    int scan()
    {
    int ip = gc(), ret = 0, flag = 1;
    for (; ip < '0' || ip > '9'; ip = gc())
    if (ip == '-')
    {
    flag = -1;
    ip = gc();
    break;
    }
    for (; ip >= '0' && ip <= '9'; ip = gc())
    ret = ret * 10 + ip - '0';
    return flag * ret;
    }
    using namespace std;
    int main()
    {
    //freopen("in.txt", "r", stdin);
    int t;
    t=scan();
    while (t--)
    {
    int n;
    n=scan();
    int a[n];
    for (int i = 0; i < n; i++)
    {
    a[i]=scan();
    }
    sort(a, a + n);
    long long cost = 0;
    int i = n - 1;
    while (i >= 0)
    {
    cost += a[i];
    i--;
    if (i >= 0)
    cost += a[i];
    i--;
    i--;
    i--;
    }
    cout << cost << endl;
    }
    return 0;
    }

