//3. Control flow statements- prog 1- Grade calculator
#include <iostream>
using namespace std;

main(){
    int marks;
    cout<<"\nEnter your marks in percent : ";
    cin>>marks;
    if (marks >= 90){
        cout<<"Grade : A+";
    }
    else if (marks >= 80){
        cout<<"Grade : A";
    }
    else if (marks >= 70){
        cout<<"Grade : B+";
    }
    else if (marks >= 60){
        cout<<"Grade : B";
    }
    else if (marks >= 50){
        cout<<"Grade : C+";
    }
    else if (marks >= 40){
        cout<<"Grade : C";
    }
    else {
        cout<<"Fail";
    }
}