
#ifndef ENTR_JAP_FEN_PRINC_MODULEGESTIONFICHIER_HPP
#define ENTR_JAP_FEN_PRINC_MODULEGESTIONFICHIER_HPP

#include <QtGui/QWidget>

namespace entrJap { namespace fenPrinc {

class ModuleGestionFichier : public QWidget
{
   Q_OBJECT
   public :
      ModuleGestionFichier();

   private :
      void creationFenetre();
};

} }

#endif
