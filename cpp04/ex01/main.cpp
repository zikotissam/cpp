#include"Animal.hpp"
#include"Brain.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
int main()
{
    Animal *animals[10];
    for(int i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
        {
            animals[i] = new Dog();
            if(!animals[i])
            {
                std::cerr<<"allocation failed"<<std::endl;
                exit(1);
            }
        }
        else
        {
            animals[i] = new Cat();
            if(!animals[i])
            {
                std::cerr<<"allocation failed"<<std::endl;
                exit(1);
            } 
        }
    }
    for(int i = 0; i < 10; i++)
    {
        delete animals[i];
    }

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

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