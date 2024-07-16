#ifndef COLORS_H
#define COLORS_H
#include <string>
using namespace std;

class Colors {
    private:
        int red;
        int green;
        int blue;
        int alpha;
        std::string nameColor;
    public:
        Colors(int r, int g, int b, int a, std::string n){
            this->alpha = a;
            this->red = r;
            this->green = g;
            this ->blue = b;
            this ->nameColor = n;
        };
        int getRed(){
            return this->red;
        };
        int getGreen(){
            return this->green;
        };
        int getBlue(){
            return this->blue;
        };
        int getAlpha(){
            return this->alpha;
        };
        std::string getNameColor(){

            return this->nameColor;
        };

};

#endif 