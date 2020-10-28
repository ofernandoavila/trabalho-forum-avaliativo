/**
* Método que calcula FGTS a partir do salário passado como parâmetro
* Retorna o valor do FGTS
* @param double salario
*
* link de referência: https://www.jornalcontabil.com.br/como-calcular-fgts-aprenda-como-fazer-de-forma-simples/
*
*/

float calcularFGTS(float salario) {
	return salario * 0.08;
}


/**
* Método que calcula INSS a partir do salário passado como parâmetro
* Retorna o valor do INSS
* @param double salario
*
* link de referência: https://blog.convenia.com.br/como-calcular-irrf-na-folha-de-pagamento/
*
*/

float calcularINSS(float salario) {
	if(salario <= 1039) {
		return (salario * 0.075);
	} else if ( salario > 1039 && salario <= 2098.60) {
		return (salario * 0.09);
	} else if ( salario > 2098.61 && salario <= 3134.40) {
		return (salario * 0.12);	
	} else if ( salario > 3134.41 && salario <= 6101.06) {
		return (salario * 0.14);	
	} else {
		return 713.09;
	}
}

/**
* Método que calcula IRRF a partir do salário passado como parâmetro
* Retorna o valor do IRRF
* @param double salario
*
* link de referência: https://blog.convenia.com.br/como-calcular-irrf-na-folha-de-pagamento/
*
*/

float calcularIRRF (float salario) {
	return (salario - calcularINSS(salario));
}
