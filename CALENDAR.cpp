#include<iostream>
#include<string>

int main(){
    int a;
    std::cout<<" Choose month"<< std::endl;
    std::cin>> a;
    switch (a)
    {
    case 1:
        std::cout<<"1st is January"<<std::endl;
        break;
    case 2:
       std::cout<<"2nd is February"<<std::endl;
       break;
    case 3:
        std::cout<<"3rd is March"<<std::endl;
        break;
    case 4:
        std::cout<<"4th is April"<<std::endl;
        break;
    case 5:
        std::cout<<"5th is May"<<std::endl;
        break;
    case 6:
        std::cout<<"6th is June"<<std::endl;
        break;
    case 7:
        std::cout<<"7th is July"<<std::endl;
        break;
    case 8:
        std::cout<<"8th is August"<<std::endl;
        break;
    case 9:
        std::cout<<"9th is September"<<std::endl;
        break;
    case 10:
        std::cout<<"10th is October"<<std::endl;
        break;
    case 11:
        std::cout<<"11th is November"<<std::endl;
        break;
    case 12:
        std::cout<<"12th is December"<<std::endl;
        break;
    default:
        std::cout<<" net takogo mesyaca"<<std::endl;
        break;
    }






    return 0;
}