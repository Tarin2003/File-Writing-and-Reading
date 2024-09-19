#include<iostream>
#include<fstream>

using namespace std;
int main(){


    string student_details;

    ifstream file("Student details.o");

    while(getline(file,student_details)){
        cout<<student_details<<endl;
    }

    file.close();

    cout<<"File written successfully"<<endl;
}
