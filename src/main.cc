#include<iostream>

void printValue(int value)
{
    std::cout<<"memmory of value: "<<&value<<" value inside value "<<value<<std::endl;
}

struct Person
{
    const char* name;
    int age;
    float height;

    Person(const char* name, int age, float height)
    {
        this->age = age;
        this->name = name;
        this->height = height;
    }
};

int main()
{
   /* int something{5}; //STACK
    int &ref{something};
    int* ptr1{&something};

    std::cout<<"Memmory of something: "<< &something << " value inside memmory:"<< something <<std::endl; 
    std::cout<<"Memmory of ref: "<< &ref << " value inside memmory:"<< ref <<std::endl; 
    std::cout << "memmory of pointer: " << &ptr1 << " value inside pointer: " << *ptr1 << " memmory of the value inside pointer " << ptr1 << std::endl;
    std::cout<<std::endl;
    printValue(something);*/

    Person* person1{new Person("Jose", 19, 1.60)};

    std::cout << "memmory of person1: " << &person1 << std::endl;
    std::cout << "name of person1: " << person1->name << std::endl;
    std::cout << "age of person1: " << person1->age << std::endl;
    std::cout << "height of person1: " << person1->height << std::endl;


    std::cin.get();
    return 0;

}