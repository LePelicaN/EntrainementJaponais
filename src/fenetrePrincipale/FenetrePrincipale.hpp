
#ifndef ENTR_JAP_FEN_PRINC_FENETREPRINCIPALE_HPP
#define ENTR_JAP_FEN_PRINC_FENETREPRINCIPALE_HPP

#include <QtGui/QWidget>

namespace entrJap { namespace fenPrinc {

class FenetrePrincipale : public QWidget
{
   Q_OBJECT
   public :
      FenetrePrincipale();

   private :
      void creationFenetre();
};

} }

#endif
