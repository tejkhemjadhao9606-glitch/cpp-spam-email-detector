//Student Marksheet

#include<iostream>
using namespace std;
 
int main(){
    int Rollno;
    int Physics,Maths,Chemistry,English,Computer;
    int Total;
    double Percentage;
    char Grade;
    string Name;
    cout<<"Enter Student Name: "<<endl;
    cin>>Name;
    
    cout<<"Enter Student Roll No: "<<endl;
    cin>>Rollno;

    cout<<"Ente Physics Marks: "<<endl;
    cin>>Physics;
    cout<<"Ente Maths Marks: "<<endl;
    cin>>Maths;
    cout<<"Ente Chemistry Marks: "<<endl;
    cin>>Chemistry;
    cout<<"Ente English Marks: "<<endl;
    cin>>English;
    cout<<"Ente Computer Marks: "<<endl;
    cin>>Computer;
    
    Total = Physics+Maths+Chemistry+English+Computer;
    Percentage = (Total/500.0)*100;

    if(Percentage>=90){
        Grade = 'A';
    }
    else if(Percentage>=80){
        Grade ='B';
    }
    else if(Percentage>=70){
        Grade ='C';
    }
    else if(Percentage>=60){
        Grade ='D';
    }
    else if(Percentage>=40){
        Grade ='E';
    }
    else{
        Grade = 'F';
    }
    cout<<"\nTotal = "<<Total<<"/500"<<endl; //
    cout<<"Percentage = "<<Percentage<<" % "<<endl;
    cout<<"Grade = "<<Grade<<endl;

    if (Percentage >=40){
        cout<<"Result = PASS"<<endl;
    }
    else{
        cout<<"Result = FAIL"<<endl;
    }
    return 0;
}