
#ifndef ENTR_JAP_FEN_PRINC_MODULEMOTSLOUPES_HPP
#define ENTR_JAP_FEN_PRINC_MODULEMOTSLOUPES_HPP

#include <QtGui/QWidget>

namespace entrJap { namespace fenPrinc {

class ModuleMotsLoupes : public QWidget
{
   Q_OBJECT
   public :
      ModuleMotsLoupes();

   private :
      void creationFenetre();
};

} }

#endif
