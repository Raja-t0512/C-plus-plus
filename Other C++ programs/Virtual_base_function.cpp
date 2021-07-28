#include <iostream>
using namespace std;
class AM
{
protected:
    float rating;
    string title;

public:
    AM(float f, string s)
    {
        rating = f;
        title = s;
    }
    virtual void display()
    {
        cout << "Base class function called." << endl;
    }
};
class AMYT : public AM
{
    float length;

public:
    AMYT(float f, string s, float l) : AM(f, s)
    {
        length = l;
    }
    void display()
    {
        cout << "Title of your video is " << title << endl;
        cout << "Length of your video is " << length << " minutes" << endl;
        cout << "Rating: " << rating << endl;
    }
};
class AMW : public AM
{
    int words;

public:
    AMW(float f, string s, int w) : AM(f, s)
    {
        words = w;
    }
    void display()
    {
        cout << "Title of your text tutorial is " << title << endl;
        cout << "Words in this text tutorial is " << words << endl;
        cout << "Rating: " << rating << endl;
    }
};
int main()
{
    int size = 2;
    float rating;
    float length;
    string title;
    int words;
    cout << "Enter the title of video "
         << ": " << endl;
    getline(cin, title);
    cout << "Enter the Length of video: " << endl;
    cin >> length;
    cout << "Enter Rating: " << endl;
    cin >> rating;
    cout << "Enter Word count: " << endl;
    cin >> words;
    AMYT Yt_channel(rating, title, length);
    cout << "Enter the title of text file "
         << ": " << endl;
    getline(cin, title);
    cout << "Enter Rating: " << endl;
    cin >> rating;
    cout << "Enter Word count: " << endl;
    cin >> words;
    AMW Website(rating, title, words);
    AM *Rajat[size];
    Rajat[0] = &Yt_channel;
    Rajat[1] = &Website;
    Rajat[0]->display();
    Rajat[1]->display();
}