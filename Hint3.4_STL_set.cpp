
#include <iostream>
#include <set>
using namespace std;


int main(){

    set <int> mySet;
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(70);
    mySet.insert(20);
    mySet.insert(22);
    mySet.erase(22);

    cout << mySet.count(10) << endl;
    cout << mySet.count(20) << endl;
    cout << mySet.count(22) << endl;
                                    //end�����e�@�Ӥ~�O�u����
    cout << *mySet.begin() << " " << *--mySet.end() << " " << mySet.empty() << " "
         << mySet.max_size() << " " << mySet.size() << endl;



    return 0;
}
