
#ifndef ENTR_JAP_FEN_PRINC_MODULEPRINCIPAL_HPP
#define ENTR_JAP_FEN_PRINC_MODULEPRINCIPAL_HPP

#include <QtGui/QWidget>

#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

namespace entrJap { namespace fenPrinc {

class ModulePrincipal : public QWidget
{
   Q_OBJECT
   public :
      ModulePrincipal();

   private :
      QLineEdit * texteHiraKata_;
      QLineEdit * texteRoumaji_;
      QLineEdit * texteFrancais_;

      QLabel * labelResultat_;

      QPushButton * boutonValider_;
      QPushButton * boutonReponse_;
      QPushButton * boutonNouveau_;
      QPushButton * boutonEffacer_;

      void creationFenetre();
};

} }

#endif
