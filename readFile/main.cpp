#include <iostream>
#include <fstream>

using namespace std;

/* A program to read a specific customized file structure (products.txt) */

int main() {

    ifstream infile("products.txt");

    int id;
    string name;
    double price;


    //how we will read = products.txt -> 1 -> Banana -> 3.44 (using  ">>" operator , its a file pointer)
    while(infile >> id >> name >> price){
        //customized output
        cout << id << " -> " << name << " " << price <<endl;
    }
    //when the EOF is identified the reading stops

   return 0;
}
