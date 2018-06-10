#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	vector <int> b;
	b.push_back(10);
	b.push_back(20);
	for(int i=0; i<b.size(); i++){
		cout<<endl<<b[i];
	}
	
	
	return 0;
}
