#include <iostream>
#include <string>

using namespace std;

class payEmployees {
    private:
    int paySalary;
    string personName;
    string streetAdress;

    public:
    payEmployees(string person){
        setName(person);
    }

    payEmployees(string name, int salary_in, string adress_in){
        personName = name;
        paySalary = salary_in;
        streetAdress = adress_in;
    }

    int giveRaise(int raise){
        cout << personName << " has been given a raise of " << raise << " dollars." << endl;
        return paySalary = paySalary + raise;
    }

    int salaryInfo(){
        cout << personName << " has a monthly salary of " << paySalary << " dollars." << endl;
    }

//--------------------------------------- Set Functions
    void setName(string name){
        personName = name;
    }

    void setStreetAdress(string adress) {
        streetAdress = adress;
    }

    void setSalary(int salary) {
        paySalary = salary;
    }

//--------------------------------------- Get Functions

    int getInfo(){
        cout << "The individual " << personName << " lives at " << streetAdress << " who's monthly salary is " << paySalary << " dollars" << endl;
    }

    string getName() {
        return personName;
    }

    string getStreetAdress() {
        return streetAdress;
    }

    int getSalary(){
        return paySalary;
    }


};

int main() {

    int salary;
    string adress;
    string name;
    payEmployees *list[4] = {};

    for(int i = 0; i < 4; i++) {

        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
        cout << endl;
        cout << "Enter adress: ";
        cin >> adress;
        cout << endl;
        list[i] = new payEmployees(name, salary, adress);

    }

    int person_choice = 0;
    cout << "Who would you like to give a raise?" << endl;
    for(person_choice = 0; person_choice < 4; person_choice++)
        cout << "[" << person_choice  + 1 << "]" << list[person_choice]->getName() << endl;
    cin >> person_choice;

    if(person_choice - 1 < 0)
        cin >> person_choice;
    else
        person_choice--;
            int raise;
            cout << "How big of a raise would you like to give " << list[person_choice]->getName() << "?" << endl;
            cout << "Raise: ";
            cin >> raise;
            list[person_choice]->giveRaise(raise);
            list[person_choice]->salaryInfo();

}