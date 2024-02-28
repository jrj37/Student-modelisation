#ifndef PERSON_H
#define PERSON_H
#include <iostream>

enum Statuts{Mr, Ms, Mrs, Miss, Dr};
// Define the class Person here
class Person{
    public:
        Person();
        Person(std::string first_name,std::string last_name,Statuts statut);
        Person(const Person &person);
        ~Person();
        std::string get_first_name()const;
        std::string get_last_name()const;
        Statuts get_statut()const;

        void set_statut(Statuts statut);
    private:
        std::string first_name;
        std::string last_name;
        Statuts statut;

};
#endif // PERSON_H