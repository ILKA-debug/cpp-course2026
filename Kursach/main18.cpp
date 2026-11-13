#include<iostream>
#include"vector18.h"


int main()
{
    v18 vec1(5);
    v18  const vec2( {9.0 , 3.0 , 5.4 , 22.3 ,  1.34 , 21.3 , 0.0} );

    std::cout << vec1[4]<< std::endl;
    std::cout << vec2[4]<< std::endl;
    // vec2=vec1;
    // vec2[1] = 1.1;
    std::cout << vec2.size() << std::endl;
    for (size_t i = 0; i < vec2.size(); ++i)
    { std::cout << vec2[i] << " ";}
    
    return 0;
}
