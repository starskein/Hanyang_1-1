#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class A{
public:
	virtual void a(){
		cout << "a" << endl;
	}
};
class B: public A{
public:
	virtual void a(){
		cout << "b" << endl;
	}
};
class C: public B{
public:
	virtual void a(){
		cout << "c" << endl;
	}
};
int main(){
	B* bb = new C;
	bb->a();
}
