#include "person.h"

Person::Person(){
    std::cout<< "Personne créé"<<std::endl;
}

Person::Person(std::string first_name,std::string last_name,Statuts statut):first_name(first_name),last_name(last_name),statut(statut){
    std::cout<< "Personne créé"<<std::endl;
}

Person::Person(const Person &person): first_name(person.first_name),last_name(person.last_name),statut(person.statut){
    std::cout<< "Personne créé"<<std::endl;
}
Person::~Person(){
    std::cout<< "Personne morte"<<std::endl;
}

std::string Person::get_first_name()const{
    return first_name;
}
std::string Person::get_last_name()const{
    return last_name;
}
Statuts Person::get_statut()const{
    return statut;
}
void Person::set_statut(Statuts statut){
    this->statut=statut;
}