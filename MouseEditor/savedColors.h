#include "colors.h"
#include <vector>
#include <iostream>



class SavedColors{
    private:
        std::vector<Colors>savedColors;
    public:

    SavedColors(){};
    void saveColor(const Colors& color) {
        this->savedColors.push_back(color);
    };

    Colors getColors(int index){
            return this->savedColors[index];
    };

    size_t getSize() const{

            return this->savedColors.size();
    };

    void showAllSavedColors() {
        for(Colors& color : savedColors){
            std::cout<<"Colors code: ["<<color.getAlpha()<<","<<color.getBlue()<<","<<color.getGreen()<<","<<color.getRed()<<"]. Color name saved as: "<<color.getNameColor()<<endl;
        };
    };

};