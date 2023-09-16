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
    vector<vector<string>> mainList;
    string name;

    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();

};