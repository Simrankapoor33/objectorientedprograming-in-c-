#include <iostream>
#include <string>
using namespace std;
        
 class person {
        public:
            string name;
            int age;
            void getdata();
            void displaydata();
        };
        
        void person::getdata() {
            cout << "Enter the name of person: ";
            cin >> name;
            cout << "Enter the age of person: ";
            cin >> age;
        }
        
        void person::displaydata() {
            cout << "The name of person is: " << name << endl;
            cout << "The age of person is: " << age << endl;
        }
        
        int main() {
            person p1;
            p1.getdata();
            p1.displaydata();
            return 0;
        }
          

