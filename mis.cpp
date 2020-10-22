#include <iostream>
using namespace std;

//名字类
class Name {
    public:
        void GetData ( string );
        void PrintData ( );
    private:
        string hero;
        string goods;
        string nenmy;
};
//
void Name::GetData ( string name ) {
    hero = name;
    goods = name;
    nenmy = name;
}
//
void Name::PrintData ( ) {
    cout << hero << endl << goods << endl << nenmy << endl;
}
//
int main ( ) {
    Name name;
    string text;

    cin >> text;
    name.GetData ( text );
    name.PrintData ( );

    return 0;
}
