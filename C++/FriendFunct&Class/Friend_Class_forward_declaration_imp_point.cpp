
/*
  I've done forward declaration of class CB so that I can use it in CA.
  However if i want to define void CA::print(CB ob) in class A itself, I'll get error. 
  The reason is class B objec ob has incomplete definition. 
  The problem can be solved if we define class B completely and after that define the method void CA::print(CB ob).
  However it is not the case with void CB::print(CA ob)

*/


#include<iostream>

using namespace std;
class CB;
class CA {
  int a;
  int b;
  friend class CB;
  public:
    CA() {
      a = 10;
      b = 20;
    }
  void getCA() {
    cout << "Enter a and b values \n";
    cin >> a >> b;
  }
  void printCA() {
    cout << "CA: Values of CA are " << a << " " << b << "\n";
  }
  void print(CB ob);
};

class CB {
  int c;
  int d;
  public:
    CB() {
      c = 30;
      d = 40;
    }
  void getCB() {
    cout << "Enter c and d values \n";
    cin >> c >> d;
  }
  void printCB() {
    cout << "CB: Values of CB are " << c << " " << d << "\n";
  }
  friend class CA;
    //   void print(CA ob);
    void print(CA ob) {
      cout << "data members of CA are " << ob.a << " " << ob.b << "\n";
    }
};

void CA::print(CB ob) {
  cout << ob.c << " " << ob.d << "\n";
}
// void CB::print(CA ob) {
//   cout << "data members of CA are " << ob.a << " " << ob.b << "\n";
// }
main() {
  CA o1;
  CB o2;
  o1.printCA();
  o1.print(o2);
  o2.printCB();
  o2.print(o1);
  //friend is not symmetric
  //friend is not transitive
}
