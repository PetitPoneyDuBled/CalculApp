#include "calcul.h"

void calcul::onclickcalculer()
{
//    std::cout<<_operande1->text().toStdString()<<"\n";
//    std::cout<<_operande2->text().toStdString()<<"\n";
    float op1,op2;
    if(_operande1->text()=="") op1=0;
    else op1=std::stof(_operande1->text().toStdString());
    if(_operande2->text()=="") op2=0;
    else op2=std::stof(_operande2->text().toStdString());
    float result(0);
    QString ope = _operateur->currentText();
    if(ope=="/") result=op1/op2;
    if(ope=="*") result=op1*op2;
    if(ope=="-") result=op1-op2;
    if(ope=="+") result=op1+op2;
    _resultat->setText(QString::fromStdString(std::to_string(result)));
}

calcul::calcul():QWidget()
{
    resize(450,50);
    _operande1 = new QLineEdit("",this);
    _operande2 = new QLineEdit("",this);
    _operateur = new QComboBox(this);
    _resultat = new QLabel("Resultat",this);
    _calculer = new QPushButton("=",this);
    _quitter = new QPushButton("Quitter",this);
    _operateur->addItems({"/","-","+","*"});
    _operande1->setGeometry(1,1,50,50);
    _operateur->setGeometry(52,1,50,50);
    _operande2->setGeometry(104,1,50,50);
    _calculer->setGeometry(156,1,50,50);
    _resultat->setGeometry(218,1,70,50);
    _quitter->setGeometry(330,1,100,50);
    connect(_quitter,&QPushButton::clicked,this,&calcul::close);
    connect(_calculer,&QPushButton::clicked,this,&calcul::onclickcalculer);
    connect(_operateur,&QComboBox::currentTextChanged,this,&calcul::onclickcalculer);
    connect(_operande1,&QLineEdit::textChanged,this,&calcul::onclickcalculer);
    connect(_operande2,&QLineEdit::textChanged,this,&calcul::onclickcalculer);
}
