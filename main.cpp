 #include"Header.h"
int main()
{    
    Students* stu = nullptr;
	LoadFileStudents(stu);
	delete[] stu;
    displayUI();
    cout<<"pull ve roi code nao!!!";
}
    