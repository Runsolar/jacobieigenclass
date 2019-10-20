//test file

#include <iostream>
#include <vector>
#include "jacobieigenclass.h"

using namespace std;

int main() { 

    //a test symmetric matrix represented as 1-dimension array.
    vector<double> test = { 1.8, 1.6, 1.7, 1.8,
                            1.6, 2.8, 1.5, 1.3,  
                            1.7, 1.5, 3.8, 1.4, 
                            1.8, 1.3, 1.4, 4.8 };

    JacobiEigensClass *obj = new JacobiEigensClass(test, 0.0001);

    obj->calculateEigensByJacobiMethod();
    
    for(int i=0; i < 4; i++) {
        cout << obj->eigenVals[i] << endl;
    }
    
    cout << endl;
    for(int i = 0; i < 4; i++)
    {
        cout << "[";
        for(int j = 0; j < 4; j++)
        {
            cout << obj->eigenVecs[i*4+j] << ", ";
        }
        cout << "]";
        cout << endl;
    }
    cout << endl;
 
    return 0;
}