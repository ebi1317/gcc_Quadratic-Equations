//
//  program reads in the coefficients of the equation, calls the function, and either prints the roots or a message that they are complex.
// created by ebrahim zeinali

#include <iostream>
#include <assert.h>
#include <math.h>
using namespace std;


 void quad(double a, double b, double c, double& r1, double& r2)
{
    double delta = b *b - 4 * a * c;
    assert(delta >= 0);

    if(delta > 0)
    {
        r1 = (-b + sqrt(delta))/ 2*a;
        r2 = (-b - sqrt(delta))/ 2*a;
    }
    else
    {
        r1 = r2 = (-b)/ 2*a;
    }



}

int main()
{
    
    double a = 1;
    double b = 25;
    double c = 2;
    
    double r1;
    double r2;
    
    

}
