#include "total.h"
class User1 : public Observer {
public:
    void Update(void *str) {
        cout << "Get " + *static_cast<string*>(str) << " from User1" << endl;
    }
};

class User2 : public Observer {
public:
    void Update(void *str) {
        cout << "Get " + *static_cast<string*>(str) << " from User2" << endl;
    }
};

class News : public Observerable {

};
int main() {
    User1 u1;
    User2 u2;
    News news;
    news.Attench(&u1);
    news.Attench(&u2);
    news.GetNews();
    /*space312::FuncString();
    space312::FuncArray();
    space312::FuncPoint();

    space314::pointerFun();
    space319::FuncDigitSize();
    space322::func();
    space324::hexoct();
    space324::bondini();
    space324::signedusignedchar();
    space324::typecase();
    space324::funcGetGetline();
    space325::funcStruct();
    space326::funcUnion();
    space327::enumFunc();
    space331::pointerplusfunc();
    space41::func();
    space44::mainfunc();
    space45::mainFunction();
    space47::decltypeFunction();
    space414::stackFunc();
    space416::objectTest();
    space417::operatorfunc();
    space59::testThread();
    space510::Ccharfunction();
    space510::leftrightmove();*/

    return 0;
}
