#include <QCoreApplication>
#include <QDebug>
#include <iostream>

//using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;

    qInfo() << "Enter your age:";

    //Notice the std:: because we are not "using namespace std"
    std::cin >> age;

    qInfo() << "You are "  << age << " years old.";

    return a.exec();
}
