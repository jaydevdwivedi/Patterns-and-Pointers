#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8;

    // char *p;
    // char str[] = "pqrstuv";
    // p = str;
    // p += 3;
    // cout << p;

    // char arr[20];
    // int i;
    // for(i = 0; i < 10; i++) {
    //     *(arr + i) = 65 + i;
    // }
    // *(arr + i) = '\0';
    // cout << arr;

    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout<<*ptr2<<" ";
    // cout<< ptr2 - ptr1;

    // char st[] = "ABCD";
    // for (int i = 0; st[i] != ‘\0’; i++)
    // {
    //     cout << st[i] << *(st) + i << *(i + st) << i[st];
    // }

    return 0;
}