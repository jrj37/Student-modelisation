#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

// Define the class Student here
class Student: public Person {
    public:
    Student();
    Student(float score,int64_t id,std::string course);
    Student(const Student &student);
    ~Student();

    float get_score() const;
    int64_t Student::get_id() const;
    std::string Student::get_course()const;
    void earnPHD();
    
    void print_data()const;

    private:
    float score;
    int64_t id;
    std::string course;
    int nb_students;
}
#endif // STUDENT_H