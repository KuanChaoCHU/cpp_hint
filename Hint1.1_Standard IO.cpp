// C++ Input/Output
// C style Input/Output

#include <iostream>
using namespace std;


int main(){

    // cin
    // cin
    // char = cin.get()  first char       char = cin.get(a,20)
    // cin.getline(container, length, delim)
    // getline(cin, str)   like ss
    // gets()
    // getchar()
    int a, b;
    string cc;
    cout << "input:";
    cin >> a >> b;              // how about for-loop !
    //cin >> noskipws >> input[j];
    cout << a+b << endl;





    //  using "break"
    int i = 0;
    while (true){

        ++i;

        if (i>=20){
            break;    // condition satisfied : jump out of the while loop
        }

    }
    cout << i << endl;





    return 0;
}


