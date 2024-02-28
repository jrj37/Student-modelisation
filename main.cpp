#include "student.h"
#include "person.h"
int main(int argc, char** argv)
{
    Person *person= new Person("JR","Julien",Mr);
    std::cout<< person->get_first_name()<<std::endl;
    std::cout<<person->get_last_name()<<std::endl;
    std::cout<<person->get_statut()<<std::endl;
    person->set_statut(Dr);
    std::cout<<person->get_statut()<<std::endl;
    return 0;
}