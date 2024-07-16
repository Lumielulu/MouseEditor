#include <iostream>
#include "colors.h"
#include "savedColors.h"
using namespace std;
int main(){

    SavedColors sc;
    Colors a = Colors(123,123,123,123,"COLOR 1");
    Colors b = Colors(255,255,255,255,"COLOR 2");
    Colors c = Colors(0,0,0,0,"COLOR 3");
    Colors d = Colors(1,2,221,255,"COLOR 4");
    Colors e = Colors(13,21,255,556,"COLOR 5");
    sc.saveColor(a);
    sc.saveColor(b);
    sc.saveColor(c);
    sc.saveColor(d);
    sc.saveColor(e);
    sc.showAllSavedColors();
    return 0;

};