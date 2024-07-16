#include "colors.h"
#include <vector>
#include <iostream>



class SavedColors{
    private:
        std::vector<Colors>savedColors;
    public:
    void setSaveColor(){
        this->savedColors = savedColors;
    };
    void saveColor(const Colors& color) {
        this->savedColors.push_back(color);
    };

    Colors getColors(int index){
            return this->savedColors[index];
    };

    size_t getSize() const{

            return this->savedColors.size();
    };


    std::vector<Colors> getAllSavedColors(){
        return this->savedColors;
    };

};