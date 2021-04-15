#include"Header.h"
struct Class {
    string class_name = "";
    Students* sthead = 0;
    Class* Next = 0;
};

struct Session {
    string date;
    string timeofSes;
    Session* Next;
};

struct Course {
    string course_id, course_name, teacher_name, cre_num;
    int maxnum_stu = 50, dateofWeek;
    Session* ses;
    Course* Next;
};

struct Semester {
    string sem_name;
    int dateStart;
    int dateEnd;
    Course* Cou;
};

struct Year {
    string year_name;
    Semester sem[3];
    int dateStart, dateEnd;
    Year* Next;
};

void create_new_year(Year* yearh);
Class* Find(Class* classhead, string classname);
void add_one_by_one(Class*& classhead);
void display(Class* classhead);
void add_by_file_csv(Class*& classhead);
void create_class(Class*& classhead);
void Menu_Feature_First_Staff(Students * stu);
void Export_new(Class* classhead, Students* stu);
void CreateSem(Year* yearh, Year*& year_cur);
void PrintSem(Year* yearh, Year*& year_cur);
void Menu_Op();
