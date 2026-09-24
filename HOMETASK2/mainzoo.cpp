#include<iostream>
#include"zoo.h"

int main(){
    std::cout<< "   CAT"<<std::endl;
    cat cat1;
    cat1.MakeSound();
    cat1.AskForFood();
    cat1.Move();
    cat1.Natural_Habitat();
    std::cout<< "   VOROBEY"<<std::endl;
    vorobey vorobey1;
    vorobey1.AskForFood();
    vorobey1.MakeSound();
    vorobey1.Move();
    vorobey1.Natural_Habitat();
    std::cout<< "   MEDOED"<<std::endl;
    medoed medoed1;
    medoed1.AskForFood();
    medoed1.MakeSound();
    medoed1.Move();
    medoed1.Natural_Habitat();   
    std::cout<< "   KOMAR"<<std::endl;
    SBEU_KOMAR komar;
    komar.AskForFood();
    komar.MakeSound();
    komar.Move();
    komar.Natural_Habitat();
    std::cout<< "   FISH"<<std::endl;
    fish fish1;
    fish1.AskForFood();
    fish1.MakeSound();
    fish1.Move();
    fish1.Natural_Habitat();
return 0;
}