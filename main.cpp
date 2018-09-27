#include <iostream>
#include "addition.h"

using namespace std;

int main(){

    int a,b;

    cout << "Vvedite dva chisla \n";

    cin >> a >> b;

    cout<< "Prybavlenie " << add(a,b) << endl;
    cout<< "Otnimanie " << dif(a,b) << endl;
    cout<< "Ymnozenie " << mul(a,b) << endl;
    cout<< "Delenie " << div(a,b) << endl;

    return 0;
}
