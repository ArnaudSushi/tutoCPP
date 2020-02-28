#include "FenPrincipale.h"

FenPrincipale::FenPrincipale() {

    QWidget *zoneCentrlale = new QWidget();

    QLineEdit *nom = new QLineEdit;
    QLineEdit *prenom = new QLineEdit;
    QLineEdit *age = new QLineEdit;

    QFormLayout *layout = new QFormLayout;
    layout->addRow("Votre nom", nom);
    layout->addRow("Votre prénom", prenom);
    layout->addRow("Votre age", age);

    zoneCentrlale->setLayout(layout);

    setCentralWidget(zoneCentrlale);
}
