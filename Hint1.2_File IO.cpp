// file input/output

#include <fstream>
#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
using namespace std;



int main(){

    fstream file;                       // create an object "file"


    // 1. file open&close
    file.open("fileA.txt", ios::out);   // open a specific file
      // ios::in (Mode: Read) ios::out (Mode: Write) ios::app (Mode: Attach to the end)
      // file.is_open()  a boolean value
      // file.eof()  check if at the end of file
      // file.write(buffer,n)  write n chars in the butter to the file
      //     const int n = 5;
      //     char buffer[n] = {'r','o',' ','e','r'};
      //     file.write(buffer,strlen(buffer));
      // file.read(buffer,n)

    if (! file){                        // check if the open procedure is succeeded
        cout << "Open failed" << endl;
    }
    else{
        // do something
    }
    file.close();


    // 2. Grab contents
    string line, line_seg;
    file.open("file2int_2.txt", ios::in);
    while (getline(file, line, '\n')){           // always read the whole line
    //           target buffer  delim
        if (line.size()!=0){                     // remove empty lines
            stringstream ss(line);               // segmenting/parsing the elements in the line
            while (getline(ss, line_seg, ' ')){
                cout << "seg: " << line_seg << endl;
            }
        }
    }
    file.close();


    //  3. Grab contents_advanced 1: irregular spaces , int sum
    char ch;
    file.open("file2int_2.txt", ios::in);

    stringstream ss2;
    string word = "";
    int word_int;
    vector<int> sum_array;
    string forbid1 = " ";
    string forbid2 = "\n";
    string forbid3 = "\t";


    while (getline(file, line, '\n')){
        if (line.size()!=0){

            for (int i=0; i<line.size(); ++i){

                if ((line[i]!=forbid1[0])&&(line[i]!=forbid2[0])&&(line[i]!=forbid3[0])){
                    string temp = " ";
                    temp = line[i];
                    word = word.append(temp, 0, temp.size());   // start from [0], length = temp.size()
                }
                else {
                    if (word.size()!=0) {
                    cout << "word: " << word << endl;
                    ss2 << word; ss2 >> word_int; ss2.str("");ss2.clear();
                    sum_array.push_back(word_int);
                    word = "";
                    }
                }

                if ((i==(line.size()-1))&&(word.size()!=0)){         // last remain
                    cout << "word: " << word << endl;
                    ss2 << word; ss2 >> word_int; ss2.str("");ss2.clear();
                    sum_array.push_back(word_int);
                    word = "";
                }
            }  //  for -loop end
        }  //  each line end
    }  //  file end

    int sum = 0;
    for (int i=0; i<sum_array.size(); ++i){
        sum += sum_array[i];
        if (i==0) cout << sum_array[i];
        else cout << " + " << sum_array[i];
    }
    cout << "= " << sum << endl;


    //  4. Grab contents_advanced 2: string to int



    //  Extra. convert string <-> int/double/char... by stringstream
    stringstream ss3;
    int num1 = 15862;
    string num1_str;
    ss3 << num1;
    ss3 >> num1_str;     //  int to string
    cout << "(str)" << num1_str << endl;
    ss3.str("");ss3.clear();         //  clear the stringstream before next use

    string num2_str = "26851";
    int num2;
    ss3 << num2_str;
    ss3 >> num2;
    cout << "(int)" << num2 << endl;
    ss3.str("");ss3.clear();

    cout << "ss3: " << ss3.str();    //  print the contents in stringstream

    file.close();
    //  Extra 2.use replace in notepad "  " > " "


    //  5. File output
    file.open("file2int_1.txt", ios::out|ios::app);

    cout << "file output" << endl;
    file << "file output test" << endl;

    file.close();


    return 0;
}
