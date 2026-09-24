#include "zoo.h"
#include <iostream>

animal::animal() = default;
animal::~animal() = default;
animal::animal(const animal &other) = default;
animal::animal(animal &&other) = default;


void animal::MakeSound(){
    std::cout<<"silence"<<std::endl;
};
void animal::AskForFood()
{
    std::cout<<"i want to eat"<<std::endl;

}
void animal::Move()
{
    std::cout<<"i move like an ainmal"<<std::endl;
}
void animal::Natural_Habitat(){
    std::cout<<"Earth"<< std::endl;
}

cat::cat():animal() {};
cat::~cat() = default;
cat::cat(const cat &cat)= default;
cat::cat(cat &&cat) = default;
cat &cat::operator=(const cat &cat)= default;
cat &cat::operator=(cat &&cat) = default;


void cat::MakeSound(){
    std::cout<<"miau"<<std::endl;

}
void cat::AskForFood(){
    std::cout<<"i want the fih"<< std::endl;

}
void cat::Move(){
    std::cout<<"move like a cat"<< std::endl;
}
void cat::Natural_Habitat(){
    std::cout<<"in human homes"<< std::endl;
}

vorobey::vorobey():animal(){};
vorobey::~vorobey() = default;
vorobey::vorobey(const vorobey &vorobey)= default;
vorobey::vorobey(vorobey &&vorobey)= default;
vorobey &vorobey::operator=(const vorobey &vorobey) = default;
vorobey &vorobey::operator=(vorobey &&vorobey) = default;




 void vorobey::MakeSound(){
    std::cout<<"chiki briki"<< std::endl;

 }
 void vorobey::AskForFood(){
    std::cout<<"i want the semechki"<< std::endl;

 }
 void vorobey::Move(){
    std::cout<<"flying in the sky"<< std::endl;
 }
void vorobey::Natural_Habitat(){
   std::cout<<"in cities and other populated localities"<< std::endl;
}



medoed::medoed():animal(){};
medoed::~medoed() = default;
medoed::medoed(const medoed &medoed) = default;
medoed::medoed(medoed &&medoed)= default;
medoed &medoed::operator=(const medoed &medoed) =default;
medoed &medoed::operator=(medoed &&medoed) = default;



void medoed::MakeSound(){
    std::cout<<"Rattling"<< std::endl;
}
void medoed::AskForFood(){
    std::cout<<"i want eat everyone"<< std::endl;
}
void medoed::Move(){
    std::cout<<"moving like a honey badger"<< std::endl;
}
void medoed::Natural_Habitat(){
    std::cout<<"Earth: Asia and Africa"<< std::endl;
}

SBEU_KOMAR::SBEU_KOMAR():animal(){};
SBEU_KOMAR::~SBEU_KOMAR() = default;
SBEU_KOMAR::SBEU_KOMAR(const SBEU_KOMAR &SBEU_KOMAR) = default;
SBEU_KOMAR::SBEU_KOMAR(SBEU_KOMAR &&SBEU_KOMAR) = default;
SBEU_KOMAR &SBEU_KOMAR::operator=(const SBEU_KOMAR &SBEU_KOMAR) = default;
SBEU_KOMAR &SBEU_KOMAR::operator=(SBEU_KOMAR &&SBEU_KOMAR)= default;

void SBEU_KOMAR::MakeSound(){
    std::cout<<"buzzing"<< std::endl;
}
void SBEU_KOMAR::AskForFood(){
    std::cout<<"suck some blood"<< std::endl;
}
void SBEU_KOMAR::Move(){
    std::cout<<"flying"<< std::endl;
}
void SBEU_KOMAR::Natural_Habitat(){
    std::cout<<"VEZDE"<< std::endl;
}


fish::fish():animal(){};
fish::~fish()= default;
fish::fish(const fish &fish)= default;
fish::fish(fish &&fish)= default;
fish &fish::operator=(const fish &fish) =default;
fish &fish::operator=(fish &&fish)= default;

void fish::MakeSound(){
    std::cout<<"bulp"<< std::endl;
}
void fish::AskForFood(){
    std::cout<<"some planktons"<< std::endl;
}
void fish::Move(){
    std::cout<<"swimming"<< std::endl;
}
void fish::Natural_Habitat(){
    std::cout<<"in the water"<< std::endl;
}



