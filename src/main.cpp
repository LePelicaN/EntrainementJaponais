#include "fenetrePrincipale/FenetrePrincipale.hpp"

#include <QApplication>

int main( int argc, char *argv[] ) {

   QApplication app(argc, argv);

   entrJap::fenPrinc::FenetrePrincipale fenetre;

   fenetre.show();

   return app.exec();
}
