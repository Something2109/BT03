#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

//BaiC1
/*int main() {
    int n;
    cin >> n;
    int a[n];
    bool seen[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (seen[a[i] - 1]) {
            cout << "Yes";
            return 0;
        }
        else {
            seen[a[i] - 1] = true;
        }
    }
    cout << "No";
    return 0;
}*/

//BaiC2
/*int main() {
    string str;
    cin >> str;
    for (int i = 0; i <  str.length(); i++) {
        if (str[i] != str[str.length() - i - 1]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}*/

//BaiC3
/*bool palindromeCheck(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != str[str.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int count [n];
    for (int i = 0; i < n; i++) {
        int case1, case2;
        count[i] = 0;
        cin >> case1 >> case2;
        for (int j = case1; j <= case2; j++) {
            string str = to_string(j);
            if (palindromeCheck(str)) {
                count[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << count[i] << endl;
    }
}*/

//BaiC4
/*int mineCheck(char** field, int m, int n, int row, int column) {
    int count = 0;
    for (int i = m - 1; i <= m + 1; i++) {
        for (int j = n - 1; j <= n + 1; j++) {
            if (i < 0 || i == row) {
                break;
            }
            if (j < 0 || j == column) {
                continue;
            }
            if (field[i][j] == '*') {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int row, column;
    cin >> row >> column;
    char **field = new char*[row];
    for (int i = 0; i < row; i++) {
        field[i] = new char [column];
        for (int j = 0; j < column; j++) {
            cin >> field[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (field[i][j] != '*') {
                field[i][j] = mineCheck(field, i, j, row, column) + '0';
            }
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << field[i][j] << ' ';
        }
        delete [] field[i];
        cout << endl;
    }
    delete [] field;
}*/

//BaiC5
/*void draw(int** arr, int top, int right, int bottom, int left, int &num) {
    int i = top, j = left;
    while (j < right) {
        arr[i][j] = num;
        num++;
        j++;
    }
    if (top + 1 != bottom) {
        j--;
        i++;
        while (i < bottom) {
            arr[i][j] = num;
            num++;
            i++;
        }
        if (left + 1 != right) {
            i--;
            j--;
            while (j >= left) {
                arr[i][j] = num;
                num++;
                j--;
            }
            j++;
            i--;
            while (i > top) {
                arr[i][j] = num;
                num++;
                i--;
            }
        }
    }
}

int main() {
    int row, column;
    cin >> row >> column;
    int **arr = new int* [row];
    int left = 0, top = 0, num = 1;
    int bottom = row, right = column;
    for (int i = 0; i < row; i++) {
        arr[i] = new int[column];
    }
    while (num <= row * column) {
        draw(arr, top, right, bottom, left, num);
        left++; right--; top++; bottom--;
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << ((j == 0) ? setw(2) : setw(4)) << arr[i][j];
        }
        cout << endl;
        delete[] arr[i];
    }
    delete[] arr;
}*/

//BaiC6
/*int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }
    int i = 0, j = n/2, num = 1, count = 0;
    while (num <= n * n) {
        arr[i][j] = num;
        if (num % n == 0 && num != n * n) {
            num++;
            i = (i + 1) % n;
            arr[i][j] = num;
        }
        num++;
        i = (i + n - 1) % n;
        j = (j + 1) % n;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ((j == 0) ? setw(4) : setw(4)) << arr[i][j];
        }
        cout << endl;
    }
}*/

//BaiC7


//BaiC8
/*int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i])
            {
                swap(a[j], a[i]);
            }
        }
    }
    int sum = 0;
    int lastWaitTime = 0;
    for (int i = 0; i < n - 1; i++) {
        sum = sum + lastWaitTime + a[i];
        lastWaitTime += a[i];
    }
    cout << sum << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
}*/