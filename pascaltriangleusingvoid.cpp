// #include <iostream>
// using namespace std;

// void generatePascalTriangle(int n) {
//     for (int i = 0; i < n; i++) {
//         int num = 1;
//         for (int j = 1; j < n - i - 1; j++) {
//             cout << " ";
//         }

//         for (int j = 1; j <= i; j++) {
//             if (j == 1) {
//                 cout << j << " ";
//             }
//             else {
//                 num = num * (i - j + 1) / (j - 1);
//                 cout << num << " ";
//             }
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     generatePascalTriangle(n);
//     return 0;
// }
#include <iostream>
using namespace std;

void generatePascalTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        int num = 1;


        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }


        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                cout << num << " ";
            } else {
                num = num * (i - j + 1) / (j - 1);
                cout << num << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    generatePascalTriangle(n);
    return 0;
}
