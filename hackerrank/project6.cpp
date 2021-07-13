#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    int a;
    int s;
    char f_name[60];
    char l_name[60];

public:
    void set_age(int age)
    {
        a = age;
    }
    void set_standard(int standard)
    {
        s = standard;
    }
    void set_first_name(char first_name[50])
    {
        strcpy(f_name, first_name);
    }
    void set_last_name(char last_name[50])
    {
        strcpy(l_name, last_name);
    }
    int get_age()
    {
        return a;
    }
    int get_standard()
    {
        return s;
    }
    void get_first_name()
    {
        cout << f_name;
    }
    void get_last_name()
    {
        cout << l_name;
    }
};

int main()
{
    int age, standard;
    char first_name[60], last_name[60];

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << endl;
    st.get_last_name();
    cout << ", ";
    st.get_first_name();
    cout << endl;
    cout << st.get_standard() << endl;
    cout << "\n";
    cout << st.get_age() << ",";
    st.get_first_name();
    cout << ",";
    st.get_last_name();
    cout << "," << st.get_standard();
    return 0;
}
