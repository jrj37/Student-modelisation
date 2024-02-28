#include "student.h"
#include <iostream>

Student::Student(){
    std::cout<<"étudiant créé"<<std::endl;
}
Student::Student(float score,int64_t id,std::string course):score(score),id(id),course(course){
    std::cout<<"étudiant créé"<<std::endl;
}
Student::Student(const Student &student):score(student.score),id(student.id),course(student.course){
    std::cout<<"étudiant créé"<<std::endl;
}
Student::~Student(){
    std::cout<<"étudiant détruit"<<std::endl;
}

float Student::get_score() const{
    return score;
}
int64_t Student::get_id()const{
    return id;
}

std::string Student::get_course()const{
    return course;
}

void Student::earnPHD(){
    set_statut(Dr);
}

void Student::print_data()const{
    std::cout<<" " <<std::endl;
}