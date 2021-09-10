#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
	float a,b,v=0;
int main(int argc, char** argv) {
	cout<<("  \n ESTE PROGRAMA CALCULA EL VOLUMEN DE UN CILINDRO")<<end1;
	cout<<("  \n Ingrese el Radio")<<end1;
	cin>>a;
	cout<<("  \n ingrese la altura del circulo")<<end1;
	cin>>b;
	v=(3.1416*(pow(a,b)*b));
		cout<<("  \n El volumen es: ")<<v<<("unidades cubicas\n");
			cout<<("  \n PROGRAMA 1-0 CILINDROS 08092021")<<end1;
			system("pause");
	return 0;
}
