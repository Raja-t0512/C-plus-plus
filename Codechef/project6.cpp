//Simple Approach
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int N, Q;
//         cin >> N >> Q;
//         int arr[N];
//         for (int i = 1; i <= N; i++)
//         {
//             cin >> arr[i];
//         }
//         while (Q--)
//         {
//             int l, r;
//             cin >> l >> r;
//             int gc = 0;
//             for (int i = 1; i <= l - 1; i++)
//             {
//                 gc = __gcd(gc, arr[i]);
//             }
//             for (int i = r + 1; i <= N; i++)
//             {
//                 gc = __gcd(gc, arr[i]);
//             }
//             cout << gc << endl;
//         }
//     }
//     return 0;
// }
// Using Prefix Computation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, Q;
        cin >> N >> Q;
        int arr[N + 7];
        int forward[N + 7];
        int backward[N + 7];
        forward[0] = backward[N + 1] = 0;
        for (int i = 1; i <= N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= N; i++)
        {
            forward[i] = __gcd(forward[i - 1], arr[i]);
        }
        for (int i = N; i >= 1; i--)
        {
            backward[i] = __gcd(backward[i + 1], arr[i]);
        }
        while (Q--)
        {
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward[l - 1], backward[r + 1])<<endl;
        }
    }
    return 0;
}