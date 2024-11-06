#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

#define NUM_OF_MARKS 6

class Person{
    
    public:
        virtual void getdata(){};
        virtual void putdata(){};
    
    protected:
        int age;
        string name;
        
    private:
};


class Professor : public Person{
    public:
        Professor(){
            this->cur_id = ++id;
        }
        
        void getdata() override {
            cin>>name;
            cin>>age;
            cin>>publications;
        }
        
        void putdata() override {
            cout<< name << " " << age << " " << publications << " " << cur_id << endl;
        }

    private:
        int publications;
        static int id;
        int cur_id;

};
int Professor::id = 0;

class Student : public Person{
    public:
        Student(){
            this->cur_id = ++id;
        }
        
        void getdata() override {
            cin>>name;
            cin>>age;

            for (int i = 0; i < NUM_OF_MARKS; i++)
            {
                cin>> marks[i];
            }
        }
        
        void putdata() override {
            int sum = 0;
            
            for (int i = 0; i < NUM_OF_MARKS; i++)
            {
                sum += marks[i];
            }
            cout<< name << " " << age << " " << sum << " " << cur_id << endl;
        }
        
    private:
        int marks[NUM_OF_MARKS];
        int cur_id;
        static int id;
};
int Student::id = 0;

int main(){

    int n, val;
    cin>>n;
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            per[i] = new Professor;

        }
        else per[i] = new Student;

        per[i]->getdata();

    }

    for(int i=0;i<n;i++)
        per[i]->putdata();

    return 0;
}
