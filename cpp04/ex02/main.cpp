#include"Animal.hpp"
#include"Brain.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
int main()
{
    Dog* dog = new Dog();
    Cat* cat = new Cat();
    dog->setIdea(5, "sniff anything");
    Dog* dog1 = new Dog(*dog);
    cat->getIdeas();
    dog1->getIdeas();
    delete dog;//
    delete dog1;//
    delete cat;//
    return 0;
}