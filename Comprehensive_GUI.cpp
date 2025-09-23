#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QWidget>
#include <QString>
#include <vector>
using namespace std;

vector<int> arr = {5, 7, 9, 2, 8}; // mảng mẫu

int timMax() {
    int m = arr[0];
    for (int x : arr) if (x > m) m = x;
    return m;
}

int timMin() {
    int m = arr[0];
    for (int x : arr) if (x < m) m = x;
    return m;
}

int timViTriX(int x) {
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == x) return i;
    return -1;
}

void chenX(int x, int pos) {
    if (pos < 0 || pos > arr.size()) return;
    arr.insert(arr.begin() + pos, x);
}

void xoaTaiViTri(int pos) {
    if (pos < 0 || pos >= arr.size()) return;
    arr.erase(arr.begin() + pos);
}

QString xuatMang() {
    QString s;
    for (int x : arr) s += QString::number(x) + " ";
    return s;
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Quan ly mang 1 chieu");

    QVBoxLayout *layout = new QVBoxLayout();

    QLabel *label = new QLabel("Mang: " + xuatMang());
    layout->addWidget(label);

    QLabel *result = new QLabel("Ket qua:");
    layout->addWidget(result);

    // Các input
    QLineEdit *inputX = new QLineEdit();
    inputX->setPlaceholderText("Nhap gia tri x");
    layout->addWidget(inputX);

    QLineEdit *inputPos = new QLineEdit();
    inputPos->setPlaceholderText("Nhap vi tri n");
    layout->addWidget(inputPos);

    // Các button
    QPushButton *btnMax = new QPushButton("Tim Max");
    QPushButton *btnMin = new QPushButton("Tim Min");
    QPushButton *btnFind = new QPushButton("Tim vi tri x");
    QPushButton *btnInsert = new QPushButton("Chen x vao vi tri n");
    QPushButton *btnDelete = new QPushButton("Xoa tai vi tri n");

    layout->addWidget(btnMax);
    layout->addWidget(btnMin);
    layout->addWidget(btnFind);
    layout->addWidget(btnInsert);
    layout->addWidget(btnDelete);

    // Kết nối signal-slot
    QObject::connect(btnMax, &QPushButton::clicked, [&](){
        result->setText("Max = " + QString::number(timMax()));
    });

    QObject::connect(btnMin, &QPushButton::clicked, [&](){
        result->setText("Min = " + QString::number(timMin()));
    });

    QObject::connect(btnFind, &QPushButton::clicked, [&](){
        int x = inputX->text().toInt();
        int pos = timViTriX(x);
        if (pos == -1) result->setText("Khong tim thay " + QString::number(x));
        else result->setText("Tim thay " + QString::number(x) + " tai vi tri " + QString::number(pos));
    });

    QObject::connect(btnInsert, &QPushButton::clicked, [&](){
        int x = inputX->text().toInt();
        int pos = inputPos->text().toInt();
        chenX(x, pos);
        label->setText("Mang: " + xuatMang());
    });

    QObject::connect(btnDelete, &QPushButton::clicked, [&](){
        int pos = inputPos->text().toInt();
        xoaTaiViTri(pos);
        label->setText("Mang: " + xuatMang());
    });

    window.setLayout(layout);
    window.show();

    return app.exec();
}
