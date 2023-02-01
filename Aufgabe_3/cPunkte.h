#include <iostream>
#include <string>


using namespace std;

class cPunkt
{
    private:
        double x,y;
    public:
        cPunkt();
        cPunkt(double x_in,double y_in);
        void ausgabe();
        void set_x(double x_in);
        void set_y(double y_in);
        double get_x();
        double get_y();
};