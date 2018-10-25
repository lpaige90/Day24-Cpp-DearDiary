#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *window = new QWidget;

    QVBoxLayout *verticalLayout = new QVBoxLayout();

    QString date = QDate::currentDate().toString();
    QLabel *dateLabel = new QLabel();
    dateLabel->setMinimumSize(200,50);

    dateLabel->setText(date);
    QFont textFont("Montserrat",12,QFont::Normal);
    dateLabel->setFont(textFont);

    verticalLayout->addWidget(dateLabel);

    QTextEdit *textEntry = new QTextEdit;
    textEntry->setMinimumSize(750,540);

    textEntry->setFont(textFont);

    verticalLayout->addWidget(textEntry);

    window->setLayout(verticalLayout);
    window->setMinimumSize(800,600);

    window->show();

    return a.exec();
}
