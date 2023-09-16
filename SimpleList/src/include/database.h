#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


class Database {
    private:
    protected:

    public:
    // constructor and destructor
    Database() {
        // constructor
    }
    ~Database() {
        // destructor
    }
    // vector<datatype> name;
    vector<string> list;
    string name;

    void write(vector<string> list);
    void read();

};