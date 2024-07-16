#include <iostream>
#include "colors.h"
#include "savedColors.h"
using namespace std;
int main(){

    SavedColors sc;
    Colors c;
    c.setAlpha(123);
    c.setBlue(122);
    c.setGreen(021);
    c.setRed(255);
    c.setNameColor("PRUEBA STRING");
    sc.saveColor(c);
    sc.showAllSavedColors();
    return 0;

};