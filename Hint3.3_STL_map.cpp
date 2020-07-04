// <map>, implement by red-black tree, sorted keys, O(log n)
// <unordered_map>, implement by hash table, unsorted keys, O(1)

#include <map>
#include <string>
#include <iostream>
using namespace std;


int main(){
    //   key     value
    map<string, string> studentData;
    map<string, string>::iterator iter;
    //map<string, string>::reverse_iterator iter_r;


    // Insert
    studentData.insert(pair<string, string>("r04", "Tom"));

    studentData["r05"] = "jyun-how";
    studentData["r06"] = "kuan";
    studentData["r07"] = "Soverig";


    // Traversal
    for (iter = studentData.begin(); iter != studentData.end(); ++iter)
        cout << iter -> first << " " << iter -> second << endl;


    // Find
    iter = studentData.find("r05");  // key
    if (iter != studentData.end())
        cout << "Found, the value is " << iter -> second << endl;
    else
        cout <<"Not Found" << endl;


    // Delete and Clear
    iter = studentData.find("r04");
    studentData.erase(iter);           // r04 is deleted

    int n = studentData.erase("r04");
    cout << "delete? " << n << endl;   // check r04 deleted or not

    studentData.erase(studentData.begin(), studentData.end());  // equal to studentData.clear()

    cin.get();
    cin.get();
    return 0;
}
