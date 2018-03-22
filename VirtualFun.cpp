#include<iostream>
#include<stdio.h>
using namespace std;


class Person{
    public:
    char *name;
    int age;
    virtual void getdata(){
    }
    virtual void putdata(){
    }
};


class Professor: public Person{
    int publications,cur_id;
    static int seq_id;
    public:

    Professor(){
        inc();
    }
    void inc(){
        seq_id++;
    }
    static int incre(){
        return seq_id;
    }

    void getdata(){
        cin >> name >> age >> publications;
        cur_id = seq_id;
    }
    void putdata(){
        cout << name << " "  << age << " "  << publications << " "  << cur_id  << " " << endl;
    }
};
class Student: public Person{
  int marks[6],sum=0,cur_id;
    static int seq_id;
    public:
    Student(){
        inc();
    }
    void inc(){
        seq_id++;
    }
    static int incre(){
        return seq_id;
    }
    void getdata(){
        cin >> name >> age;
        cur_id = seq_id;
        for (int i=0; i<6; i++){
            cin >> marks[i];
            sum = sum + marks[i];
        }

    }
    void putdata(){
        cout << name << " " << age << " " << sum << " " << cur_id << " "<< endl;
    }
};
int Professor::seq_id;
int Student::seq_id;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

