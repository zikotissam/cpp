#include"Animal.hpp"
#include"Brain.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
int main()
{
    Dog* j = new Dog();
    Cat* i = new Cat();
    j->setIdea(5, "sniff anuthing");
    i->setIdea(5, "ask for food by meowing soo much");
    i->getIdeas();
    j->getIdeas();
    delete j;//
    delete i;//
    return 0;
}