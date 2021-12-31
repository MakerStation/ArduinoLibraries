#ifndef MYSIM800L_H
#define MYSIM800L_H

#include "Arduino.h"

class MYSIM800L
{
   private:
      // qui ci va tutto quello che è private e quindi non visibile da fuori la libreria

   public:
      // qui ci va tutto quello che deve essere VISIBILE DA FUORI, compreso eventuali variabili di ritorno o tipi di ritorno
      void begin (void);
};

#endif