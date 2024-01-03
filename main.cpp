#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    auto layout = new QGridLayout();

    auto nameLabel = new QLabel("Name:");
    auto txtName = new QLineEdit;

    auto lastNameLabel = new QLabel("Last Name:");
    auto lastNameLineEdit = new QLineEdit;

    auto button = new QPushButton("Ok");

    layout->addWidget(nameLabel, 0, 0);
    layout->addWidget(txtName, 0, 1);

    layout->addWidget(lastNameLabel, 1, 0);
    layout->addWidget(lastNameLineEdit, 1, 1);

    layout->addWidget(button, 2, 0, 1, 2); // Take up one row and 2 columns !

    window->setLayout(layout);
    window->show();
    return a.exec();
}
