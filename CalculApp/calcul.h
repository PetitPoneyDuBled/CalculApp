#ifndef CALCUL_H
#define CALCUL_H

#include <iostream>
#include <string>
#include <QtWidgets>

class calcul : public QWidget
{
    Q_OBJECT
private:
    QLineEdit * _operande1;
    QLineEdit * _operande2;
    QComboBox * _operateur;
    QLabel * _resultat;
    QPushButton * _calculer;
    QPushButton * _quitter;

public slots:
    void onclickcalculer();

public:
    calcul();
};

#endif // CALCUL_H
