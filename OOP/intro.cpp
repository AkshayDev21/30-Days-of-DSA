#include <iostream>
using namespace std;

class Hero {
    //properties
    private:
    int health;

    public:
    char level;

    int gethealth() {
        return health;
    }

    char getlevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setlevel(char  ch){
        level = ch;
    }
};

int main() {
    //create object
    Hero akshay ;
    cout<<"Akshay health is "<<akshay.gethealth()<<endl;
    akshay.setHealth(90);
    akshay.level = 'A';

    cout<<"Health is : "<< akshay.gethealth() <<endl;
    cout<<"Level is : "<< akshay.level << endl;
    return 0;
}