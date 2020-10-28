/**
* M�todo que calcula FGTS a partir do sal�rio passado como par�metro
* Retorna o valor do FGTS
* @param double salario
*
* link de refer�ncia: https://www.jornalcontabil.com.br/como-calcular-fgts-aprenda-como-fazer-de-forma-simples/
*
*/

float calcularFGTS(float salario) {
	return salario * 0.08;
}


/**
* M�todo que calcula INSS a partir do sal�rio passado como par�metro
* Retorna o valor do INSS
* @param double salario
*
* link de refer�ncia: https://blog.convenia.com.br/como-calcular-irrf-na-folha-de-pagamento/
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
* M�todo que calcula IRRF a partir do sal�rio passado como par�metro
* Retorna o valor do IRRF
* @param double salario
*
* link de refer�ncia: https://blog.convenia.com.br/como-calcular-irrf-na-folha-de-pagamento/
*
*/

float calcularIRRF (float salario) {
	return (salario - calcularINSS(salario));
}
