#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
    string name, id, age, batch, section, gpa;
    ofstream file;
    int n;

    file.open("Student details.o",ios::out|ios::app);

    cout<<"How many student: ";
    cin>>n;
    cin.ignore();
    cout<<endl;

    file<<setw(20)<<"Name"<<setw(20)<<"ID"<<setw(20)<<"Age"<<setw(20)<<"Batch"<<setw(20)<<"Section"<<setw(20)<<"GPA"<<endl<<endl;

    for(int i=1; i<=n; i++){
        cout<<"Enter student name: ";
        getline(cin,name);

        cout<<"Enter student id: ";
        getline(cin,id);

        cout<<"Enter student age: ";
        getline(cin,age);

        cout<<"Enter batch: ";
        getline(cin,batch);

        cout<<"Enter section: ";
        getline(cin,section);

        cout<<"Enter student gpa: ";
        getline(cin,gpa);

        file<<setw(20)<<name<<setw(20)<<id<<setw(20)<<age<<setw(20)<<batch<<setw(20)<<section<<setw(20)<<gpa<<endl;

        cin.ignore();
    }


    file.close();

    cout<<"File written successfully"<<endl;

}

