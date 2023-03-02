#include <iostream>
using namespace std;
class concatn
{
	public:
		string a,b;
		int str_ln;
		concatn(string i,string j="how u doin")
		{
			a=i;
			b=j;
		}
		concatn()
		{
			a="heyy ";
			b="how u doin";
		}
		concatn(concatn &x,concatn &y)
		{
			a=x.a;
			b=y.b;
		}
		void add(concatn h)
		{
			string q=h.a + h.b;
			cout<<"concatinated string: "<<q<<endl;
		}
};
int main()
{
	concatn a1;
	a1.add(a1);
	concatn a2("hello ");
	a2.add(a2);
	concatn a3("g ","gayatri");
	a3.add(a3);
	return 0;
}
