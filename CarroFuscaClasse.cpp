#include<stdio.h>

class Carro{
	
	public:
	int qtd_comb;
	int velocimetro;
	int litros;
	int vel_max;
	int vel_inser;
	
// método com o mesmo nome da classe é um método construtor
// isso abaixo é um método, então consigo instanciar o carro
// sem  precisar declarar os valores da classe la embaixo

	Carro(){
		qtd_comb = 50;
		velocimetro = 0;
	}
	
	void acelerar(void){
		if (qtd_comb > 0){
			printf("\nQual a velocidade maxima do seu carro? ");
			scanf("%i", &vel_max);
			printf("\nE quanto voce gostaria de acelerar? ");
			scanf("%i,", &vel_inser);
			printf("\n------Acelerando...");
			if (vel_inser > vel_max){
				printf("Voce nao consegue ultrapassar %i km/h\n", vel_inser);
			}else if(vel_inser = vel_max){
				printf("Voce atingiu a velocidade maxima permitida!");
			}
			velocimetro = vel_inser;
			qtd_comb--;
		}
		else{
			printf("\nSem combustivel...");
			velocimetro = 0;
		}
	}
	
	void frear(void){
		printf("\n------Desacelerando...");
		velocimetro = velocimetro - 10;	
	}
	
	void abastecer(void){
		printf("\n------Abastecendo... Quanto quer abastecer? ");
		scanf("%i", &litros);
		qtd_comb = qtd_comb + litros;
	}
	
	void exibirPainel(void){
		printf("\n\n");
		printf("***PAINEL***\n");
		printf("Qtd combustivel: %i\n", qtd_comb);
		printf("Velocimetro: %i\n", velocimetro);
		printf("\n");
	}
	
};

main(){
	
	Carro fusca;	
	
	fusca.exibirPainel();
	fusca.acelerar();
	fusca.exibirPainel();
	fusca.abastecer();
	fusca.exibirPainel();
	fusca.frear();
	fusca.exibirPainel();
	
}
