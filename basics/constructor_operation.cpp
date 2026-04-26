#include<iostream>
using namespace std;

class user{
    private:
    int id;
    string password;

    public:
    string username;

    user(int id){
        this->id = id;
    }

    // setter
    void setPassword(string password){
        this->password = password;
    }

    // getter
    string getPassword(){
        return password;
    }
};

int main(){
    user user1(101);
    user1.username = "mandeep";
    user1.setPassword("abcde");

    cout << "User name: " << user1.username << endl;
    cout << "Password is: " << user1.getPassword();

    return 0;
}