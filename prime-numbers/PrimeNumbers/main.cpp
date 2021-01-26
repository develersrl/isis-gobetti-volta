#include <QCoreApplication>
#include <QDebug>

// is_prime takes an integer and returns true if
// it is a prime number, false otherwise
bool is_prime(int v) {
    for (int i = 2; i < v; i++) {
        if (v % i == 0) {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // number to test: try the program with different values,
    // like: 17, 62, 99, 3, etc.
    int num = 20;

    if (is_prime(num) == true) {
        qDebug() << "Primo";
    } else {
        qDebug() << "Composto";
    }

    return a.exec();
}
