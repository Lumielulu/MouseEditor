#include <vector>
class Colors{
    
    private:
        int red;
        int green;
        int blue;
        int alpha;
        int colorsArray[4]; /*contains the numbers of the colors (based on rgba structure)*/
    public:
    void setColors(int red, int green, int blue, int alpha){
        this->alpha = alpha;
        this->green = green;
        this->blue = blue;
        this->red = red;
        this->colorsArray[0] = this->red;
        this->colorsArray[1] = this->green;
        this->colorsArray[2] = this->blue;
        this->colorsArray[3] = this->alpha;
    };

    int* getColorsArray(){
        return this->colorsArray;

    };
};




class SavedColors{
    private:
        std::vector<Colors>savedColors;
    public:
        int hellow(){

            return 0;
        };


};

class Mouse{
    private:
        Colors mouseColor;
    public:
        void setMouseColor(Colors){
            

        }




};

int main(){

    return 0;


}