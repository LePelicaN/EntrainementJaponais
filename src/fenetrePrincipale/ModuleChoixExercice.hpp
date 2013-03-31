
#ifndef ENTR_JAP_FEN_PRINC_MODULECHOIXEXERCICE_HPP
#define ENTR_JAP_FEN_PRINC_MODULECHOIXEXERCICE_HPP

#include <QtGui/QWidget>

#include <QtGui/QCheckBox>
#include <QtGui/QRadioButton>

namespace entrJap { namespace fenPrinc {

class ModuleChoixExercice : public QWidget
{
   Q_OBJECT
   public :
      ModuleChoixExercice();

   private :
      QRadioButton * radioHiragana_;
      QRadioButton * radioKatakana_;
      QRadioButton * radioMot_;
      QCheckBox * loupeUniquement_;

      QRadioButton * radioTotalAleatoire_;
      QRadioButton * radioAleatoireSansOk_;
      QRadioButton * radioALaSuite_;

      QCheckBox * afficherRomaji_;

      void creationFenetre();
      QWidget * creationWidgetTypeMot();
      QWidget * creationWidgetTypeExercice();
};

} }

#endif
