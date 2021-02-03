#ifndef MYSIN_H
#define MYSIN_H

/*!
Klasa MySin
*/
class MySin
{
//! \defgroup 1 metody_publiczne 
	public:
//! \{ 
	/**metoda publiczna MySin()*/
	 MySin();
	 /**metoda publiczna MySin(double x)*/
	 MySin(double x);
	 /**metoda publiczna MySin(const MySin &obj)*/
	 MySin(const MySin &obj);
	 /**metoda publiczna ~MySin()*/
	 ~MySin();
	 /**metoda publiczna double value()*/
	  /** Funkcja \b value ma zwracać wartość \b sin(x) która jest wyliczona na podstawie pierwszych 10 wyrazów szeregu
		\f$sin(x)=\sum_{k=0}^\infty (-1)^k\frac{x^{2k+1}}{(2k+1)!}.\f$ \image html funkcja.png
		* \attention Wynik jest bardziej dokładny im większa jest ilość sumowanych elementów szeregu.
		*/
	 double value();
	  /**metoda publiczna void setX(double)*/
	 void setX(double);
	 /**metoda publiczna double getX()*/
	 double getX();
//! \}
//! \defgroup 2 składowe_prywatne 
	 private:
  //! \{
	 /**Deklaracja składowej prywatnej */
	 double mX();
	//! \}
};
#endiff //MYSIN_H
	 
//! \defgroup author Autor dokumentacji
//! \{
//!\author \b Łukasz \b Kapała   
//! \}