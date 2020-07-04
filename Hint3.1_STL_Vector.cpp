
#include <iostream>
#include <vector>
using namespace std;



int main(){

    //  1. Declaration
    vector <int> v1;
    vector <int> v2(v1);    // initialized by v1
    vector <int> v3(10);    // 1vector, initial 10 elements
    vector <int> v3_2 [10]; // 10vectors
    vector <int> v4(5,7);   // 5 elements, all initial = 7
    v4.~vector <int>();


    //  2. 2D Vector
    vector <int> v5;
    vector <int> v6;
    vector < vector <int> > my2dVector;                           //  initial empty
    vector < vector <int> > my2dVector2(10, vector<int>(10,0));   //  initial 10*10ªº0
    v5.push_back(11);v5.push_back(12);v5.push_back(13);
    v6.push_back(21);v6.push_back(22);v6.push_back(23);v6.push_back(24);
    my2dVector.push_back(v5);
    my2dVector.push_back(v6);

    cout << my2dVector[0][1] << endl;  // index ¥~¼h,¤º¼h
    cout << my2dVector.at(1).at(3) << endl;
    cout << my2dVector2.at(9).at(9) << endl;


    //  2. Operation
    v1.push_back(6);
    v1.push_back(45);
    v1.push_back(80);
    v1.push_back(7);
    v1.pop_back();
    cout << v1.front() << "/" << v1.back() << endl;

    //v1.insert();
    //v1.erase();
    //v1.clear();
    v1.empty();
    v1.size();
    //v1.resize();
    //v1.capacity();


    //  3. Traverse
    for(int i=0; i<v1.size(); ++i) cout << v1.at(i) << " ";

    vector<int>::iterator iter;
    for(iter=v1.begin(); iter!=v1.end(); ++iter) cout << *iter << " ";


    //  4. Assignment
    int myArray[] = {6,1,1,1,4,9,3};
    vector <int> v7(10,0);
    vector <int> v8;
    v8.assign(v7.begin(), v7.begin()+5);
    v8.assign(myArray+1, myArray+6);
    for(int i=0; i<v8.size(); ++i) cout << v8.at(i) << " ";


    return 0;
}

