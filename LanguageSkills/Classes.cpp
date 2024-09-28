#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

class Student{
    private:
        int age;
        string firstName;
        string lastName;
        int standard;
        
    public:
        void setAge(int age) {
            this->age = age;
        }
        int getAge() {
            return age;
        }
        
        void setFirstName(string firstName) {
            this->firstName = firstName;
        }
        string getFirstName() {
            return firstName;
        }
        
        void setLastName(string lastName) {
            this->lastName = lastName;
        }
        string getLastName() {
            return lastName;
        }

        void setStandard(int standard) {
            this->standard = standard;
        }
        int getStandard() {
            return standard;
        }

        string to_string() {
            stringstream ss;
            ss << age << "," << firstName << "," << lastName << "," << standard;
            return ss.str();
        }
};
    

int main() {
    
    Student student;
    
    int age;
    string firstName;
    string lastName;
    int standard;
    
    cin>>age;
    cin>>firstName;
    cin>>lastName;
    cin>>standard;
    
    student.setAge(age);
    student.setFirstName(firstName);
    student.setLastName(lastName);
    student.setStandard(standard);
    
    cout<< student.getAge() << endl;
    cout<< student.getLastName() << ", " << student.getFirstName() << endl;
    cout<< student.getStandard() << endl << endl;
    
    cout<< student.to_string() << endl;
    
    return 0;
}