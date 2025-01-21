#ifndef BRAIN
#define BRAIN
#include <iostream>
class Brain {
    private :
        std::string ideas[100];
    public :
    //default constructer
        Brain();

    //destructer
        ~Brain();

    //copy constructer
        Brain(const Brain& copy);

    //copy operator assignement
		Brain &operator=(const Brain &src);
    
    //method
       std::string getIdea(const int &i)const;
       void setIdea(const int &i, const std::string &ide);
};

#endif