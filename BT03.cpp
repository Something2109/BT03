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

//Bai1
/*int main() {
    int n;
    cin >> n;
    int arr[n];
    double mean = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mean += arr[i];
    }
    mean = mean / n;
    double variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= n;
    cout << mean << ' ' << variance;
}*/

//Bai2
/*int main() {
    int n;
    cin >> n;
    int arr[n];
    int min, 
        max, 
        evenSum = 0, 
        oddCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0) {
            max = arr[i];
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        else {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        if (arr[i] % 2 == 1) {
            oddCount++;
        }
        else {
            evenSum += arr[i];
        }
    }
    cout << max << ' ' << min << ' ' << oddCount << ' ' << evenSum;
}*/

//Bai3
/*int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        a[arr[i]]++;
    }
    for (int i = 0; i < 10; i++) {
        cout << i << ' ' << a[i] << endl;
    }
}*/

//Bai4
/*int main() {
    int n;
    cin >> n;
    vector <vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        vector <int> arr(i + 1);
        arr[0] = 1;
        arr[i] = 1;
        if (i > 1) {
            for (int j = 1; j < i; j++) {
                arr[j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
        a[i] = arr;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << setw(6) << a[i][j];
        }
        cout << endl;
    }
}*/

//Bai5
/*class mark {
    string name;
    double math;
    double physic;
    double english;
    double mean;
public:
    mark() {
        math = 0;
        physic = 0;
        english = 0;
        mean = 0;
    }
    mark(string _name, double _math, double _physic, double _english) {
        name = _name;
        math = _math;
        physic = _physic;
        english = _english;
        mean = (_math + _physic + _english) / 3;
    }
    void setName(string sName) {
        name = sName;
    }
    string getName() {
        return name;
    }
    double getMath() {
        return math;
    }
    double getPhysic() {
        return physic;
    }
    double getEnglish() {
        return english;
    }
    double getMean() {
        return mean;
    }
    void operator= (mark sv) {
        name = sv.name;
        math = sv.math;
        physic = sv.physic;
        english = sv.english;
        mean = sv.mean;
    }
    void swap(mark &sv) {
        mark sw(name, math, physic, english);
        name = sv.name;
        math = sv.math;
        physic = sv.physic;
        english = sv.english;
        mean = sv.mean;
        sv = sw;
    }
};
ostream& operator<< (ostream& out, mark sinhVien) {
    out << fixed << setprecision(1) << setw(12) << sinhVien.getName() << setw(5) << sinhVien.getMath()
        << setw(7) << sinhVien.getPhysic() << setw(8) << sinhVien.getEnglish() << setw(5)  << sinhVien.getMean() << endl;
    return out;
}


void inputList(vector <mark> &arr, int n) {
    for (int i = 0; i < n; i++) {
        double math, physic, english;
        cin >> math >> physic >> english;
        string name = "Sinh Vien " + to_string(i + 1);
        mark sv(name, math, physic, english);
        arr[i] = sv;
    }
}
void outputList(vector <mark> arr, int n) {
    cout << setw(17) << "Math" << setw(7) << "Physic" << setw(8) << "English" << setw(5) << "Mean" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
}

void sortByMath(vector <mark> &arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j].getMath() > arr[i].getMath()) {
                arr[j].swap(arr[i]);
            }
            else {
                if (arr[j].getMean() > arr[i].getMean()) {
                    arr[j].swap(arr[i]);
                }
            }
        }
    }
}

void sortByPhysic(vector <mark> &arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j].getPhysic() > arr[i].getPhysic()) {
                arr[j].swap(arr[i]);
            }
            else {
                if (arr[j].getMean() > arr[i].getMean()) {
                    arr[j].swap(arr[i]);
                }
            }
        }
    }
}

void sortByEnglish(vector <mark> &arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j].getEnglish() > arr[i].getEnglish()) {
                arr[j].swap(arr[i]);
            }
            else {
                if (arr[j].getMean() > arr[i].getMean()) {
                    arr[j].swap(arr[i]);
                }
            }
        }
    }
}

void sortByMean(vector <mark> &arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j].getMean() > arr[i].getMean()) {
                arr[j].swap(arr[i]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector <mark> arr(n);
    inputList(arr, n);
    sortByMath(arr, n);
    outputList(arr, n);
    cout << endl;
    sortByPhysic(arr, n);
    outputList(arr, n);
    cout << endl;
    sortByMean(arr, n);
    outputList(arr, n);
}*/

//Bai6
class buyStuff {
    string name;
    double amount;
    double costPerAmount;
    bool necessity;
public:
    buyStuff() {
        amount = 0;
        costPerAmount = 0;
        necessity = false;
    }
    buyStuff(string _name, double _costPerAmount, double _cost) {
        name = _name;
        amount = _costPerAmount;
        costPerAmount = _costPerAmount;
        necessity = false;
    }
    double moneyCost() {
        return amount * costPerAmount;
    }
};

bool buyAll(buyStuff list[], int n, double cash) {
    double totalCost = 0;
    for (int i = 0; i < n; i++) {
        totalCost += list[i].moneyCost();
    }
    if (totalCost > cash) {
        return false;
    }
    else {
        return true;
    }
}