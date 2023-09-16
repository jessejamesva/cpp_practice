int main(int arg_count, char *args[]) {
    if ( arg_count > 1 ) {
        name = string(args[1]);
        print_menu(name);
    } 
    else {
        cout << "Username not supplied... exiting the program" << endl;    
    }
    return 0;
}

