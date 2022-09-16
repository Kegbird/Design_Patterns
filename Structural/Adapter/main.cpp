#include "headers/Person.hpp"
#include "headers/GradeEnum.hpp"
#include "headers/PoliceManClassAdapter.hpp"
#include "headers/PoliceManObjectAdapter.hpp"

int main(int argc, const char * argv[])
{
    std::cout<<"\nAdapter pattern stupid example\n"<<std::endl;
    Person* person = new Person("Rick", "Morrison", "A nerdy guy.", 22);
    person->SayHello();
    std::cout<<"Class adapter"<<std::endl;
    PoliceManClassAdapter* police_man_class_adapter = new PoliceManClassAdapter("Alan", "Golly", 45, GradeEnum::Lieutenant);
    police_man_class_adapter->SayHello();
    std::cout<<"Object adapter"<<std::endl;
    PoliceManObjectAdapter* police_man_object_adapter = new PoliceManObjectAdapter("Gordon", "Ramsey", 69, GradeEnum::Commander);
    police_man_object_adapter->SayHello();
    
    delete person;
    delete police_man_class_adapter;
    return 0;
}