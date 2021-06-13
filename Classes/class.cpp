#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age{0};
    string first_name{"John"};
    string last_name{"Doe"};
    int standard{0};

public:
    void set_age(int userAge)
    {
        age = userAge;
    }

    int get_age()
    {
        return age;
    }

    void set_first_name(string userName)
    {
        first_name = userName;
    }

    string get_first_name()
    {
        return first_name;
    }

    void set_last_name(string userLastName)
    {
        last_name = userLastName;
    }

    string get_last_name()
    {
        return last_name;
    }

    void set_standard(int userStandard)
    {
        standard = userStandard;
    }

    int get_standard()
    {
        return standard;
    }

    string to_string()
    {
        stringstream jointString;
        char comma{','};
        jointString << age << comma << first_name << comma << last_name << comma << standard;
        return jointString.str();
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}