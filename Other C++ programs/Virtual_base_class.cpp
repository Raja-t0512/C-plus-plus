#include<iostream>
using namespace std;
class Student
{
    int roll_no;
public:
    Student(){}
    void set_data(int);
    void get_data();
    ~Student(){}
};
class Marks: virtual public Student //if we do not write virtual then we will get error....
{
protected:
    int Science,Maths,Ss,English,Hindi;
public:
    void set_marks(float,float,float,float,float);
    void get_marks();
};
class Score: virtual public Student //...because our Result class will get Student class 2 times.
{
protected:
    int score;
public:
    void set_score(float);
    void get_score();
};
class Result: public Marks,public Score
{
    float percentage;
public:
    void calc_percentage();
};
void Student ::set_data( int r)
{
    roll_no=r;
}
void Student ::get_data()
{
    cout<<"Your Roll number is "<<roll_no<<endl;
}
void Marks ::set_marks(float s,float m,float ss,float e,float h)
{
    Science=s;
    Maths = m;
    Ss=ss;
    English=e;
    Hindi=h;
}
void Marks :: get_marks()
{
    cout<<"Your marks in Science: "<<Science<<endl;
    cout<<"Your marks in Maths: "<<Maths<<endl;
    cout<<"Your marks in Social studies: "<<Ss<<endl;
    cout<<"Your marks in English: "<<English<<endl;
    cout<<"Your marks in Hindi: "<<Hindi<<endl;
}
void Score :: set_score(float a)
{
    score=a;
}
void Score :: get_score()
{
    cout<<"Your score in Sports: "<<score<<endl;

}
void Result :: calc_percentage()
{
    get_data();
    get_marks();
    get_score();
    cout<<"Your Percentage is "<<(float)(Maths+Science+Hindi+Ss+English+score)/6<<"%"<<endl;
} 
int main()
{
    int r;
    float S,M,E,H,SS,sports;
    Result R;
    cout<<"Enter your Roll-Number: ";
    cin>>r;
    R.set_data(r);
    cout<<endl<<"Enter your marks in Science: ";
    cin>>S;
    cout<<endl<<"Enter your marks in Maths: ";
    cin>>M;
    cout<<endl<<"Enter your marks in Social studies: ";
    cin>>SS;
    cout<<endl<<"Enter your marks in English: ";
    cin>>E;
    cout<<endl<<"Enter your marks in Hindi: ";
    cin>>H;
    R.set_marks(S,M,SS,E,H);
    cout<<endl<<"Enter your score in Sports: ";
    cin>>sports;
    cout<<endl<<"\t\t\t*****OUTPUT*****"<<endl;
    R.set_score(sports);
    R.calc_percentage();
    return 0;
}