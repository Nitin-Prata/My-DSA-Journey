#include <iostream>
#include <string>
using namespace std;

// Arrays
// int main()
// {
//     int arr[5];     // 1D array
//     int arr1[3][5]; // 2D array

//     return 0;
// }

// String
int main()
{
    string s = "Nitin";
    int len = s.size();
    s[len - 1] = 'z';
    cout << s[len - 1];
    return 0;
}
