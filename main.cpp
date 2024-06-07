#include <iostream>
#include "Vector.h"
using namespace std;



void menu(void){
    cout<<"1 - Setting vector "<<endl;
    cout<<"2 - X"<< endl;
    cout<<"3 - Y"<< endl;
    cout<<"4 - Show  the Vector "<<endl;
    cout<< "5 - length of the vector"<<endl;
    cout<<"6 - Angle"<<endl;
    cout<<"0 - EXIT"<<endl;
}


int main()
{
    int option = 0;
   double x,y;
    do {
       menu();
       cin>>option;
        switch (option) {
            case 0:
                break;
            case 1 :
                cout<<"Write X of the vector"<<endl;
                cin>>x;
                cout<<"Write Y of the vector"<<endl;
                cin>>y;
                Vector::setXY();
                break;
            case 2:
                cout << "X coordinate: " << Vector::getX() << endl;
                break;
            case 3:
                cout << "Y coordinate: " << Vector::getY() << endl;
                break;
            case 4:
                cout<<"Showing the vector"<<Vector::show<<endl;
                break;
            case 5:
                cout<<"Length of the vector"<<Vector::lenght<<endl;
                break;
            case 6:
                cout<<"its"<<Vector::angle<<"degrees"<<endl;
                break;
        }
   }
}