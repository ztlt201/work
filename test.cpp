#include <iostream>
using namespace std;
class Copyable
{
	public:
			Copyable(){
						cout << "Copyable()" << endl;
							}
				Copyable(const Copyable& o)
						{
									cout << "Copied" << endl;
										}
};

Copyable ReturnRvalue()
{
		return Copyable();
}

void AcceptVal(Copyable a)
{}

void AcceptRef(const Copyable &)
{
}
int main(int argc, const char * argv[]) {
		// insert code here...
		AcceptVal(ReturnRvalue());
		    return 0;
}

