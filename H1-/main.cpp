#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
float retDiv(int a, int b);

int main()
{
    int a;
    int b;
    cout<<"Anna kokonaisluku a: ";
    cin>>a;
    cout<<"Anna kokonaisluku b: ";
    cin>>b;
    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    float osamaara = retDiv( a, b);

    cout << "retSum: " << summa <<endl;
    if (b !=0) {
        cout << "retDiv: "<<fixed << setprecision(2) << osamaara << endl;
    }
    return 0;
}
void calcSum(int a, int b){
    int summa = a + b;
    cout << "calcSum: " << summa << endl;
}
void calcDiv(int a, int b){
    if (b != 0) {
        float osamaara = static_cast<float>(a)/b;
        cout << "calcDiv: " << fixed << setprecision(2) << osamaara << endl;
    } else {
        cout << "Virhe: Jakaja ei voi olla nolla." << endl;
    }
}
int retSum(int a, int b) {
    return a + b;
}
float retDiv(int a, int b) {
    if (b != 0) {
        return static_cast<float>(a)/b;
    } else {
        cout << "Virhe: Jakaja ei voi olla nolla." << endl;
        return 0.0;
    }
}
