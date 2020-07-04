
// c++ style
// overload: + += < = [] << >>
// = operator, for Cstring to string (irreversible)
// [] efficient ; at() safe

// assign(str,start,num)
// append(str,start,num)
// find(str,0)  substring
// insert(start,str)
// size() length() *They are the same. size() matches other STL container; length() is more readable
// empty()

#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;


int main(){

    int mp = 'c'-'a';
    cout << mp << endl;


    //  0.Create string
    string st1;    //  empty
    string st2("bullbasuar");
    string st3 = "blazitoise";
    string st4(st3);


    //  1.String Append
    st4 = st2 + st3;
    cout << "string 4: " << st4 << endl;
    st4 = st3.append(st2, 0, st2.length());
    cout << "string 4: " << st4 << endl;



    //  2.String compare (& as a element in vector)
    string p1 = "a + b = 1";
    string p2 = "a + b = 1";
    cout << " p1? p2 " << (p1 == p2) << endl;

    vector <string> p_array;
    p_array.push_back(p1);
    p_array.push_back(p2);
    cout << "array element compare" << (p_array[0] == p_array[1]) << endl;
    cout << "array element compare" << p_array[0].compare(p_array[1]) << endl;    // 0 the same ; +1 -1


    //  3.Char to String
    char dada[] = {'a','d','e','q','\0'};    // blank NEEDED!
    char dada2[] = "asfasgfa";

    string newDADA;
    newDADA = dada;
    string newDADA2(dada);

    cout << newDADA << endl;
    cout << newDADA2.size() <<endl;






    //  4.C-style String
    //strcpy(str1,str2)     2 to 1
    //strcat(str1,str2)     2 after 1
    //strlen(str)           null not count
    //strcmp(str1,str2)     compare 0 = same
    char str1[50] = {'\0'};
    char str2[] = "ivysaur";

    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl;

    strcpy(str1,str2);

    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl;

    cout << "str1 length: " << strlen(str1) << endl
         << "str2 length: " << strlen(str2) << endl;

    cout << "str1 to str2: " << strcmp(str1,str2) << endl;

    return 0;
}




// strcpy

