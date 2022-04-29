#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int MaxProduct (const vector<int>& numbers, int max, int n){
    int aux;
    for (int i = 0; i < n; i++){
        if (numbers[i] > max){
            aux = max;
            max = numbers[i];
        }    
    }
    return aux*max;
}

int main(){
    int max (numeric_limits<int>::min());
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    cout << MaxProduct(numbers,max,n) << "\n";
    return 0;
}
