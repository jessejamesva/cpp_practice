#include <iostream>
#include <vector>
using namespace std;

class List {
    private:
    protected:
    public:
    // constructor and destructor
    List() {
        // constructor
    }
    ~List() {
        // destructor
    }
    // vector<datatype> name;
    vector<vector<string>> mainList;
    vector<string> list;
    string name;
    int currentUserIndex;

    // prototype IDs to declare but not build functions
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    bool find_userList();
    void save_list();
};