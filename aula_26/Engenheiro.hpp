#ifndef ENGENHEIRO_HPP
#define ENGENHEIRO_HPP

class Engenheiro{
	public:
		Engenheiro();
		Engenheiro(const unsigned int numeroCrea);
		virtual ~Engenheiro();

		unsigned int getNumeroCrea() const;
		void setNumeroCrea(const unsigned int numeroCrea);

		virtual unsigned int getSalaraio() const;

	private:
		const static unsigned int SALARIO_PADRAO;
		unsigned int numeroCrea;
};
#endif
