#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>


struct {
//atributos basicos:
	char nome[50];
	char perfil[20];
	int  pv;
	int  pvtotal;
	int  forca;
	int  constituicao;
	int  agilidade;
	int  destreza;
//atributos extras:
	int  carisma;
	int  sorte;
	int  percepcao;
	int  inteligencia;

	struct {
		char arma[20];
		int  dano;
		int  danopadrao;
		char tipo_arma;
		char armadura[20];
		int  defesa, defpadrao1;
		char tipo_armadura;
		int  BFG9000;
		int  carga;

	} itens;

	int nivel;
} personagem;


struct {

	char nome[50];
	int  vida;
	int  vidatotal;
	int  dano;
	int  defesa;
	int  defpadrao;
	int  agilidade;

} inimigo;

void Escolha1();
void Escolha2();
void Escolha3();
void Traje();
void Luta();
void gameover();
void youwin();
void Premiacao1();
void Premiacao2();




void main() {

	srand(time(NULL));
	int dado1l6=(rand()%6)+1;
	int dado2l6=(rand()%6)+1;
	int dado3l6=(rand()%6)+1;
	int dado1l12=(rand()%12)+1;
	int dado1l4=(rand()%4)+1;

	srand(time(NULL));
	SMALL_RECT windowSize = {0, 0, 120, 50};
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
	system ("color 2");

	int soma=0;
	int comando=0;
	int escolha1=0;
	int escolha2=0;
	int menu;
	int loading, i, j;


		char load[43] = "ROBCO CONSOLE DE JOGOS ELETRONICOS   v1.12";
		for (loading = 0; loading < 43; loading++) {
			printf("%c",load[loading]);
			Sleep(100); // sleep 0,5 segundo
		}
		
    youwin();
	printf("\n\nGostaria de iniciar\?:\n");
	printf("SIM[1] NAO[0] \n->");
	scanf("%i",&menu);
	
	for (i = 0; i <= 100; i++)
   {                
      //printf ("\r  %d%%", i);      
      printf ("  %d%%\r", i);
      fflush (stdout);
	  Sleep(50);                      
         
      for (j = 0; j < i; j++)
      {
         if (!j) // Da espaco na barra pra nao enconstar na borda da tela
           printf ("  ");
           
         printf ("%c", 219);
         Sleep(0.1);
      }                      
   } 

   printf("\n\n");
   system ("cls");
   
	while(menu) {

	printf("\n\n----------------------//\\            *******************************************************************************************************************\n");
	printf("---------------------///\\                *******************************************************************************************************************\n");
	printf("--------------------// + \\               *******************************************************************************************************************\n");
	printf("--------------------\\ + //               XXXXXXXX   XXXXXXXXXX   XX         XX         XXXXXXXXXX   XX      XX   XXXXXXXXXXXXXX      XX           XXXXXXXXXX\n");
	printf("--------------------- \\//                XX         XX      XX   XX         XX         XX      XX   XX      XX         XX            XX           XX      XX\n");
	printf("-------------------- (___)                XX         XX      XX   XX         XX         XX      XX   XX      XX         XX            XX           XX      XX\n");
	printf("---------------------(___)                XX         XX      XX   XX         XX         XX      XX   XX      XX         XX            XX           XX      XX\n");
	printf("---------------------(___)                XXXXXXXX   XXXXXXXXXX   XX         XX         XX      XX   XX      XX         XX            XXXXXXXXXX   XXXXXXXXXX\n");
	printf("---------------------(___)_________       XX         XX      XX   XX         XX         XX      XX   XX      XX         XX            XX      XX           XX\n");
	printf("----------\\_____/\\__/----\\__/\\_____/  XX         XX      XX   XX         XX         XX      XX   XX      XX         XX            XX      XX           XX\n");
	printf("------------\\_°__[-MODELAGI-]__°/        XX         XX      XX   XX         XX         XX      XX   XX      XX         XX            XX      XX           XX\n");
	printf("----------------\\_°_+ ---- +_°_/         XX         XX      XX   XXXXXXXX   XXXXXXXX   XXXXXXXXXX   XXXXXXXXXX         XX            XXXXXXXXXX           XX\n");
	printf("--------------------\\ __°__ /            *******************************************************************************************************************\n");
	printf("---------------------|\\_°_/|             *******************************************************************************************************************\n");
	printf("---------------------[|\\_/|]             *******************************************************************************************************************\n");
	printf("---------------------[|[+]|]\n");
	printf("---------------------[|;+;|]\n");
	printf("---------------------[;;+;;]\n");
	printf("--------------------;;;;+]|]\\\n");
	printf("-------------------;;;;;+]|]-\\\n");
	printf("------------------;;;;;[+]|]--\\\n");
	printf("-----------------;;;;;|[+]|]---\\\t\t\t\t      Opcao 1: Contar historia do jogo\n");
	printf("----------------;;;;;[|[+]|]|---|\t\t\t\t      Opcao 2: Iniciar campanha\n");
	printf("---------------;;;;;[|[+]|]|---|\t\t\t\t      Opcao 3: Sair e desligar\n");
	printf("----------------;;;;[|[+]|/---/\t\t\t\t\t      Comando\?:\n");  
    printf("-----------------;;;[|[+]/---/\n");
    printf("------------------;;[|[+/---/\n");
    printf("-------------------;[|[/---/\n");
    printf("--------------------[|/---/\n");
    printf("---------------------/---/\n");
    printf("--------------------/---/|]\n");
    printf("-------------------/---/]|];\n");
    printf("------------------/---/+]|];;\n");
    printf("-----------------|---|[+]|];;;\n");
    printf("-----------------|---|[+]|];;;\n");
    printf("------------------\\--|[+]|];;\n");
    printf("-------------------\\-|[+]|];\n");
    printf("---------------------\\|[+]|]\n");
    printf("----------------------\\\\+//\n");
    printf("-----------------------\\|/\n");
    printf("------------------------V\n\n");
    scanf("%i",&comando);
		

		switch(comando) {

			case 1:
				system("cls");
				printf("Em um universo paralelo no ano de 2050, a escassez do petroleo levou a uma crise economica e geopolitica global.\n");Sleep(300);
				printf("A humanidade entra em colapso e em 23 de outubro de 2077 a terceira guerra mundial comeca. Os poucos que\n");Sleep(300);
				printf("sobreviveram passaram a residir em abrigos subterraneos chamados de Vaults. Apos anos se escondendo, a humanidade\n");Sleep(300);
				printf("retorna para a superficie com um mundo devastado e cheio de perigos e com a missao de colonizar novamente o que um dia foi seu.\n");Sleep(300);
				printf("O ano eh 2387, voce eh um membro da NCR de New Vegas, sua missao eh deter o avanco do terrivel exercito Comando Vermelho, um exercito\n");Sleep(300);
				printf("que luta para conquistar o que sobrou dos EUA, deixando um rastro de opressao e destruicao por onde passam. Voce esta a bordo de um B-52 a \n");Sleep(300);
				printf("caminho de Massachussets, local da base do temivel General GIROTTO, sua missao eh suicida e consiste em invadir o castelo e derrotar o \n");Sleep(300);
				printf("cabeca por tras do Comando Vermelho e impedir a guerra no Mojave. Boa sorte, soldado... Voce vai precisar.\n");Sleep(300);
				system("pause");
				system("cls");
				break;


			case 3:
				exit(0);
				break;



			case 2:

				system("cls");
//modo campanha ativo após quebrar o laço,iniciando criação do personagem.

				printf("-Antes de comecar a histora, devemos montar seu personagem. O primeiro passo eh escolher o nome de seu personagem\n");
				printf("-Digite o nome do seu personagem: ");
				fflush(stdin);
				fgets(personagem.nome,50,stdin);
				printf("-Belo nome, senhor %s\n",personagem.nome);
				personagem.constituicao=0;
				printf("-Agora, devemos escolher qual o perfil tera seu personagem durante a campanha:\n\n");

				printf("  1-Cientista:     |  2-Sobrevivente:  |  3-Diplomata:     |  4-Soldado:\n");
				printf("                   |                   |                   |\n");
				printf("  Inteligencia=10  |  Inteligencia=6   |  Inteligencia=8   |  Inteligencia=5\n");
				printf("  Carisma=4        |  Carisma=2        |  Carisma=10       |  Carisma=6\n");
				printf("  Sorte=3          |  Sorte=5          |  Sorte=5          |  Sorte=5\n");
				printf("  Percepcao=7      |  Percepcao=9      |  Percepcao=7      |  Percepcao=10\n");
				printf("  Bonus P.V=5      |  Bonus P.V=8      |  Bonus P.V=4      |  Bonus P.V=7\n");
				printf("  Bonus forca=2    |  Bonus forca=8    |  Bonus forca=3    |  Bonus forca=5\n");
				printf("  Bonus agilidade=1|  Bonus agilidade=3|  Bonus agilidade=2|  Bonus agilidade=7\n");
				printf("  Bonus destreza=5 |  Bonus destreza=10|  Bonus destreza=5 |  Bonus destreza=7\n");
				printf("-Escolha\?:");
				scanf("%i",&escolha1);

				switch(escolha1) {

					case 1:
						printf("-Personagem Cientista escolhido\n");
						strcpy(personagem.perfil,"Cientista");
						personagem.inteligencia=10;
						personagem.carisma=4;
						personagem.sorte=3;
						personagem.percepcao=7;
						personagem.pv=5;
						personagem.forca=2;
						personagem.agilidade=1;
						personagem.destreza=5;

						break;

					case 2:
						printf("-Personagem Sobrevivente escolhido\n");
						strcpy(personagem.perfil,"Sobrevivente");
						personagem.inteligencia=6;
						personagem.carisma=2;
						personagem.sorte=5;
						personagem.percepcao=9;
						personagem.pv=8;
						personagem.forca=8;
						personagem.agilidade=3;
						personagem.destreza=10;
						break;

					case 3:
						printf("-Personagem Diplomata escolhido\n");
						strcpy(personagem.perfil,"Diplomata");
						personagem.inteligencia=8;
						personagem.carisma=10;
						personagem.sorte=5;
						personagem.percepcao=7;
						personagem.pv=4;
						personagem.forca=3;
						personagem.agilidade=2;
						personagem.destreza=5;
						break;

					case 4:
						printf("-Personagem Soldado escolhido\n");
						strcpy(personagem.perfil,"Soldado");
						personagem.inteligencia=5;
						personagem.carisma=6;
						personagem.sorte=5;
						personagem.percepcao=10;
						personagem.pv=7;
						personagem.forca=5;
						personagem.agilidade=7;
						personagem.destreza=7;
						break;

					//God mode rock and roll para testes
					case 5:
						printf("-Personagem secreto Ximbinha desbloqueado, guie o Rock rumo a gloria!\n");
						printf("-Modo Rock and Roll ativo, todas as atribuicoes estao maximas\n");
						strcpy(personagem.perfil,"Guitar Slayer");
						personagem.inteligencia=10;
						personagem.carisma=10;
						personagem.sorte=10;
						personagem.percepcao=10;
						personagem.pv=10;
						personagem.forca=10;
						personagem.agilidade=10;
						personagem.destreza=10;
						break;

					default:
						printf("-Comando invalido\n");
				}
				system("pause");
				system("cls");
				printf("-Tudo certo por enquanto, agora devemos escolher os atributos basicos de seu personagem.");
				printf(" Lembrando que voce possui apenas 15 para gastar.\n");

//Distribuição de pontos nos atributos padrões:
				int pontos=15;
				int retirada=0;

				while(pontos!=0 && pontos>0) {

					printf("\nPontos restantes: %i\n",pontos);
					printf("Atributos padroes do personagem:\n");
					printf("1-Forca=%i\n",personagem.forca);
					printf("2-Contituicao=%i\n",personagem.constituicao);
					printf("3-Agilidade=%i\n",personagem.agilidade);
					printf("4-Destreza=%i\n\n",personagem.destreza);
					printf("-Escolha um atributo:");
					scanf("%i",&escolha1);

					switch(escolha1) {

						case 1:
							printf("-Digite o quanto gostaria de atribuir: ");
							scanf("%i",&retirada);
							if(retirada<=pontos && retirada>=0) {
								pontos=pontos-retirada;
								personagem.forca=personagem.forca+retirada;
							} else printf("ERROR, pontos invalidos\n");
							break;

						case 2:
							printf("-Digite o quanto gostaria de atribuir: ");
							scanf("%i",&retirada);
							if(retirada<=pontos && retirada>=0) {
								pontos=pontos-retirada;
								personagem.constituicao=personagem.constituicao+retirada;
							} else printf("ERROR, pontos invalidos\n");
							break;

						case 3:
							printf("-Digite o quanto gostaria de atribuir: ");
							scanf("%i",&retirada);
							if(retirada<=pontos && retirada>=0) {
								pontos=pontos-retirada;
								personagem.agilidade=personagem.agilidade+retirada;
							} else printf("ERROR, pontos invalidos\n");
							break;

						case 4:
							printf("-Digite o quanto gostaria de atribuir: ");
							scanf("%i",&retirada);
							if(retirada<=pontos && retirada>=0) {
								pontos=pontos-retirada;
								personagem.destreza=personagem.destreza+retirada;
							} else printf("ERROR, pontos invalidos\n");
							break;

						default:
							printf("-Comando invalido\n");
					}
					system("pause");
					system("cls");
				}
				personagem.pv=personagem.constituicao;

				//Atributos finais

				printf("Por fim, devemos nos preocupar com a arma, P.V e armadura que seu personagem tera.\n");
				printf("Para isso, usaremos o sistema de rolagem de dados sendo dados de 6 lados e de 12 lados\n");
				printf("agora vamos definir seus pontos vitais(P.V), para isso, voce devera jogar 3 dados de 6 lados\n\n");
				printf("Aperte enter para rolar os dados\n");
				system("pause");
				dado1l6=(rand()%6)+1;
				dado2l6=(rand()%6)+1;
				dado3l6=(rand()%6)+1;
				printf("\nDADO 1 = %i DADO 2 = %i DADO 3 = %i\n",dado1l6,dado2l6,dado3l6);
				soma=dado1l6+dado2l6+dado3l6;
				printf("SOMA = %i\n",soma);
				personagem.pv=personagem.pv+soma;
				printf("PONTOS VITAIS: %i\n\n",personagem.pv);

				system("pause");
				system("cls");
				printf("Agora vamos escolher seus equipamentos, para isso, escolha dentre as opcoes leve, media e pesada.\n");
				printf("Escolha a sua Arma:\n");
				printf("1-LEVE: Pistola 9mm\n");
				printf("2-MEDIA: Rifle de Laser\n");
				printf("3-PESADA: Minigun\n");
				printf("->");
				scanf("%i",&escolha1);

				switch(escolha1) {
					//Arma Pesada = 3 + d12 + 1,5*For.;
					//Arma media = 2 + d6 + d12 + (dest. + agil. + agil.)/3
					//o Arma Leve = 1 + d6 + d6 + d4 + Des.;
					case 1:

						printf("\nArma Leve Escolhida\n");
						strcpy(personagem.itens.arma,"Pistola 9mm");
						printf("NOME: %s\n",personagem.itens.arma);
						personagem.itens.tipo_arma='L';
						printf("TIPO: %c\n",personagem.itens.tipo_arma);
						soma= 0;
						dado1l6=(rand()%6)+1;
						dado2l6=(rand()%6)+1;
						dado1l4=(rand()%4)+1;
						soma= 1 + dado1l6 + dado2l6 + dado1l4 + personagem.destreza;
						personagem.itens.dano=soma;
						printf("DANO: %i\n",personagem.itens.dano);

						break;



					case 2:

						printf("\nArma Media Escolhida\n");
						strcpy(personagem.itens.arma,"Rifle de Laser");
						printf("NOME: %s\n",personagem.itens.arma);
						personagem.itens.tipo_arma='M';
						printf("TIPO: %c\n",personagem.itens.tipo_arma);
						soma= 0;
						dado1l6=(rand()%6)+1;
						dado1l12=(rand()%12)+1;
						soma= 2 + dado1l6 + dado1l12 + (personagem.destreza + personagem.agilidade + personagem.forca)/3; 
						personagem.itens.dano=soma;
						printf("DANO: %i\n",personagem.itens.dano);


						break;

					case 3:

						printf("\nArma Pesada Escolhida\n");
						strcpy(personagem.itens.arma,"Minigun");
						printf("NOME: %s\n",personagem.itens.arma);
						personagem.itens.tipo_arma='P';
						printf("TIPO: %c\n",personagem.itens.tipo_arma);
						soma= 0;
						int dado1l12=(rand()%12)+1;
						soma= 3 + dado1l12 + (1.5*personagem.forca);
						personagem.itens.dano=soma;
						printf("DANO: %i\n",personagem.itens.dano);

						break;
				}

				printf("\n\nPor fim, escolha o seu tipo de Armadura:\n");
				printf("1-LEVE: Uniforme Basico\n");
				printf("2-MEDIA: NCR Ranger\n");
				printf("3-PESADA: Traje Pretor\n");
				printf("->");
				scanf("%i",&escolha1);

				switch(escolha1) {
					//Armadura pesada = 1.5 * const. + 1.5 * forca
					//Armadura media = (1.5 * const.) + 1.5 * (forca + agilid.)/2
					//Armadura leve = 1.5 * const. + 1.5 * agilid.
					case 1:

						strcpy(personagem.itens.armadura,"Uniforme Basico");
						printf("\nArmadura escolhida:%s\n",personagem.itens.armadura);
						personagem.itens.tipo_armadura='L';
						printf("TIPO: %c\n",personagem.itens.tipo_armadura);
						soma=0;
						soma = (1.5*personagem.constituicao) + 1.5*personagem.agilidade;
						personagem.itens.defesa=soma;
						printf("DEFESA: %i\n",personagem.itens.defesa);
						break;



					case 2:

						strcpy(personagem.itens.armadura,"NCR Ranger");
						printf("\nArmadura escolhida:%s\n",personagem.itens.armadura);
						personagem.itens.tipo_armadura='M';
						printf("TIPO: %c\n",personagem.itens.tipo_armadura);
						soma=0;
						soma = (1.5*personagem.constituicao) + 1.5*(personagem.forca+personagem.agilidade)/2;
						personagem.itens.defesa=soma;
						printf("DEFESA:%i\n",personagem.itens.defesa);
						break;

					case 3:

						strcpy(personagem.itens.armadura,"Traje Pretor");
						printf("\nArmadura escolhida:%s\n",personagem.itens.armadura);
						personagem.itens.tipo_armadura='P';
						printf("TIPO: %c\n",personagem.itens.tipo_armadura);
						soma=0;
						soma = (1.5*personagem.constituicao) + (1.5*personagem.forca);
						personagem.itens.defesa=soma;
						printf("DEFESA:%i\n",personagem.itens.defesa);
						break;



				}

				system("pause");
				system("cls");
				personagem.nivel=1;
				printf("ESTA SATISFEITO COM O SEGUINTE PERSONAGEM \?:\n");
				printf("NOME:\t%s\n",personagem.nome);
				printf("NIVEL:\t%i\n",personagem.nivel);
				printf("PEFIL:\t%s\n",personagem.perfil);
				printf("ARMADURA:\t%i\n",personagem.itens.defesa);
				printf("PONTOS DE VIDA:\t%i\n",personagem.pv);
				personagem.pvtotal = personagem.pv;
				personagem.itens.defpadrao1=personagem.itens.defesa;
				personagem.itens.danopadrao=personagem.itens.dano;
				printf("ARMA:\t%s\n",personagem.itens.arma);
				printf("DANO:\t\t%i\n",personagem.itens.dano);
				printf("INTELIGENCIA:\t%i\n",personagem.inteligencia);
				printf("CARISMA:\t%i\n",personagem.carisma);
				printf("SORTE:\t\t%i\n",personagem.sorte);
				printf("PERCEPCAO:\t%i\n",personagem.percepcao);
				printf("FORCA:\t\t%i\n",personagem.forca);
				printf("AGILIDADE:\t%i\n",personagem.agilidade);
				printf("DESTREZA:\t%i\n",personagem.destreza);
				printf("CONTITUICAO:\t%i\n",personagem.constituicao);
				printf("SIM[1] NAO[0]\n");
				scanf("%i",&escolha1);

				if(escolha1==1) {
					printf("Aperter qualquer tecla para comecar o jogo\n");
					system("pause");
					system("cls");
				}

				else {
					printf("AGORA JA ERA, AGORA EH DIA 11 DIA 11 DIA 11 DIA 11 DIA 11 DIA 11\n");
					printf("Aperter qualquer tecla para comecar o jogo\n\n");
					system("pause");
					system("cls");
				}



				//Aqui a historia se inicia   ;)  :
				printf("A guerra... A guerra nunca muda.\n\n");Sleep(300);
				printf("Voce acorda no B-52 faltando poucos minutos ate o inicio da operacao de derrotar o general GIROTTO. O medo toma conta conforme os minutos passam\n");Sleep(300);
				printf("Uma ameca iminente parece inevitavel. Alguem se aproxima de voce...\n\n");Sleep(300);
				printf("Richarlison: Ah, voce finalmente acordou. Estamos a 30 minutos de nosso destino. Com um pouco de sorte, os radares nao conseguirao nos detectar.\n");Sleep(300);
				printf("Caso aconteca... bem... ainda temos os nossos esquadroes logo atras, deve dar conta da defesa aerea, CONFIA!\n");Sleep(300);
				printf("Certo, preciso dar um mijao. Fica de olho enquanto iss...\n\n");Sleep(300);
				system("pause");
				printf("De repente, algo acerta a aeronave, o motor esquerdo foi severamente danificado. Voces estao sob ataque inimigo, um esquadrao de cacas se aproxima\n\n");Sleep(300);
				printf("Richarlison: Merda, fomos atingidos, tem varios deles se aproximando! Estamos perdendo altidude, nos vamos cair, se prepare para o impa...\n");Sleep(300);
				system("pause");
				system("cls");
				printf("Voce acorda novamente, ha sangue em seu rosto, nada grave. Ao seu redor ha varios destrocos de seu B-52. No ceu uma batalha parece ocorrer entre\n");Sleep(300);
				printf("avioes aliados e inimigos,voce adentra os destrocos e procura por um rosto familiar.\n");Sleep(300);
				fflush(stdin);
				Escolha1();
				printf("De repente voce sente a presenca de mais alguem com voce.\n");Sleep(300);
				printf("%s: Hora de morrer, %s!.\n",inimigo.nome,personagem.perfil);Sleep(300);
				system("pause");
				system("cls");
				Luta();


                
				if(personagem.pv<=0 && inimigo.vida>0) {
					gameover();
					printf("       \t\tAperte 1 para voltar para o menu\n");
					printf("       \t\t->");
					scanf("%i", &menu);
					system("cls");
					continue;
				}

				else if(personagem.pv>0 && inimigo.vida<=0) {

					printf("VOCE VENCEU! INIMIGO DERROTADO\n");
					//DEVOLVENDO AS ATRIBUIÇÕES DO PERSONAGEM.

					personagem.pv=personagem.pvtotal;
					personagem.itens.defesa=personagem.itens.defpadrao1;
					personagem.itens.dano=personagem.itens.danopadrao;

					printf("Vida o personagem eh de %i\n",personagem.pv);
					printf("Armadura do personagem eh de %i\n",personagem.itens.defesa);
					printf("Dano do personagem eh de %i\n",personagem.itens.dano);
					system("pause");
					system("cls");
				}


				printf("Apos a batalha um grande silencio pairou. Explosoes e fumacas aconteciam no ceu,parece que estamos perdendo a guerra.\n");Sleep(300);
				printf("Voce se sente sozinho em meio aos destrocos e se pergunta o que deve ser feito. A sensacao de ter alguem a mais com voce retorna.\n");Sleep(300);
				printf("Bruscamente voce vira seu rosto para tras com sua arma apontada para o desconhecido.\n\n");Sleep(300);
				system("pause");
				printf("\nRicharlison: Ei ei,vai com calma. Sou eu. Meu cavaleiro de armadura reluzente, que bom que voce me livrou\n");Sleep(300);
				printf("dessa saia justa, a alguns minutos atras eu estava me perguntando quanto tempo eu ia durar escondido nesses destrocos. Escuta, parace que estamos\n");Sleep(300);
				printf("na merda, fomos descobertos, precisamos agir rapido e deixar a area o mais rapido o possivel antes que mais e mais deles comecem a brotar.\n");Sleep(300);
				printf("Mas antes acho melhor voce dar uma olhada no compartimento de cargas, deve ter algo util pra voce,com certeza esses trapos\n");Sleep(300);
				printf("nao vai durar muito nesse fim de mundo\n\n");Sleep(300);
				printf("Entao Voce se dirige ao que um dia pertenceu ao B-52, os conteudos do compartimento de carga estao intactos, hora de mudar de aparencia\n");Sleep(300);

			    Premiacao1(&personagem.nivel,&personagem.pv,&personagem.pvtotal,&personagem.forca,&personagem.constituicao,&personagem.agilidade,&personagem.destreza,&personagem.itens.dano);

				printf("Richarlison: Certo, agora estamos com tudo pronto, eh uma boa hora para partir. Ja estive aqui uma vez, com minha equipe em uma missao de reconhecimento.\n");Sleep(300);
				printf("As coisas estao bem diferentes, eles estao bem mais sofisticados e consiguiram reeguer uma boa parte do que um dia foi Boston, se quisermos derrota-los\n");Sleep(300);
				printf("vamos precisar nao entrar em conflito se quisermos concluir nossa missao. Ok, escuta eu tenho um plano, talvez devessemos entrar em contato com a central da NCR,\n");Sleep(300);
				printf("eles podem nos ajudar quanto a nossa missao aqui, se devemos recuar ou nao. Por isso eu proponho que devemos ir na direcao do sudoeste, sei que as chances de toparmos\n");Sleep(300);
				printf("com algum posto de verificacao ou ate mesmo um batalhao do Comando Vermelho sao altas, mas temos que correr o risco e chegar em um lugar chamado Antenas de Revere\n");Sleep(300);
				printf("Eh de la que eu planejo usar os equipamentos e entrar em contato com algum radio da NCR e saber os proximos procedimentos da missao.Entao eh um longa estrada a frente.\n");Sleep(300);
				printf("Eh melhor ir andando, precisamos agir rapido.\n\n");Sleep(300);
				system("pause");
				printf("\n-Voce e Richarlison partem rumo ao sudoeste em direcao a uma antiga estacao militar chamada de Antena de Revere, voces aproveitam os ultimos raios do dia na tentativa\n");Sleep(300);
				printf("de evitarem serem vistos pelo Comando Vermelho. A caminhada dura horas mas depois do que pareceu ser uma eternidade, voces finalmente avistam as antenas\n\n");Sleep(300);
				system("pause");
				printf("\nRicharlison: Finalmente, quase pensei qua estavamos indo na direcao errada. Bem aquilo ali na nossa frente eh o nosso destino, as antenas custumavam ser utilizadas\n");Sleep(300);
				printf("no pre-guerra pelas forcas armadas pra algum tipo de finalidade, enfim, nao sobrou muita coisa depois que as bombas cairam. Da ultima vez que estive aqui ela era um\n");Sleep(300);
				printf("quartel general de super-mutantes, mas com o Comando Vermelho dominando toda Massachussets, acho dificil o lugar ainda pertencer a eles. No entanto as luzes estao acesas\n");Sleep(300);
				printf("possivelmente o Comando Vermelho deve utilizar para seus proprios fins, ao que tudo indica vamos ter que ser furtivos enquanto estivermos la dentro\n\n");Sleep(300);
				system("pause");
				printf("\n-Os dois soldados cuidadosamente se aproximam da construcao, a suspeita se tornou verdadeira, ha varios soldados de patrulha cercando todo o perimetro\n\n");Sleep(300);
				system("pause");
				system("cls");
				printf("\nRicharlison: Maldicao! Ok, ainda podemos prosseguir com cautela. Consegue ver aquela cerca\? ha uma abertura,podemos passar por ela e logo mais adiante eh a sala de controle\n");Sleep(300);
				printf("das antenas, eh ali onde vamos tentar nosso contato com a NCR\n\n");Sleep(300);
				system("pause");
				printf("\n-Cuidadosamente os dois soldados atravessam a cerca por uma falha estrutural na mesma. Rastejando sem serem vistos, os dois chegam a uma cabine de concreto\n");Sleep(300);
				printf("que fica abaixo de uma das quatro grandes antenas, ao perceber que as luzes dos paineis estavam acessas indicando que as torres das antenas estavam operantes,\n");Sleep(300);
				printf("Richarlison comeca a mexer nos paineis na tentativa de estebelecer uma conexao com a NCR e seus aliados\n\n");Sleep(300);
				system("pause");
				printf("Richarlison: Perfeito, estao todos operando. Com um pouco de sorte isso vai levar menos de 10 minutos e ainda podemos sair inteiros dessa! Acho que preciso apertar\n");Sleep(300);
				printf("esse botao aqui e...\n");
				printf("-Um grande estrondo pode ser ouvido logo acima da cabine\n");Sleep(300);
				printf("Richarlison: Relaxa, nao eh nada demais as antenas estao meio velhas e coisas como essas podem acontecer aqui e ali. Certo estou detectando uma frequencia muito proxima\n");Sleep(300);
				printf("Pegue um headset e tente operar junto comigo. Quase la e parece que tudo esta funcinando,consegui chegar na frequencia,escute!\n\n");Sleep(300);
				system("pause");
				printf("\nVoz Misteriosa: Que merda foi essa\?\n");Sleep(300);
				printf("Voz misteriosa: Eu nao faco ideia, comandante; Talvez alguma falha mecanica ou...\n");Sleep(300);
				printf("Voz misteriosa: Encontre imediatamente quem esta fazendo isso com as antenas e execute\n");Sleep(300);
				printf("Voz misteriosa: Afirmativo, comandante. Iniciando a varredura em todos os sistemas eletronicos para descobrir o invasor\n\n");Sleep(300);
				printf("Voz misteriosa: Encontramos o invasor, parece estar vindo da cabine de comando\n\n");Sleep(300);
				system("pause");
				printf("\nRicharlison: Merda! Fomos descobertos. O sistema esta bloqueado nao consigo acessar as frequencias, eles estao vindo. Protege a porta enquanto eu tento recuperar o sistema\n");Sleep(300);
				printf("-Voce corre ate a porta e sai da cabine de comando, la fora o perigo o espera\n\n");Sleep(300);
				system("pause");
				Escolha2();
				printf("\n%s: Eu admiro a sua coragem em vim aqui e enfrentar seus problemas como um homem de verdade\n",inimigo.nome);Sleep(300);
				printf("Felizmente nos dois sabemos como isso termina, sem mais delongas, vamos acabar com isso!\n");Sleep(300);
				Luta();

				if(personagem.pv<=0 && inimigo.vida>0) {
					gameover();
					printf("       \t\tAperte 1 para voltar para o menu\n");
					printf("       \t\t->");
					scanf("%i", &menu);
					system("cls");
					continue;
				}

				else if(personagem.pv>0 && inimigo.vida<=0) {

					printf("VOCE VENCEU! INIMIGO DERROTADO\n");
					//DEVOLVENDO AS ATRIBUIÇÕES DO PERSONAGEM.

					personagem.pv=personagem.pvtotal;
					personagem.itens.defesa=personagem.itens.defpadrao1;
					personagem.itens.dano=personagem.itens.danopadrao;

					printf("Vida o personagem eh de %i\n",personagem.pv);
					printf("Armadura do personagem eh de %i\n",personagem.itens.defesa);
					printf("O dano do personagem eh de %i\n",personagem.itens.dano);
					system("pause");
					system("cls");
				}


				printf("-Voce se sente fatigado apos a batalha. Voce sente seus pes molhados na poca de sangue do inimigo derrotado. De repente barulho de motores e claroes tomam \n");Sleep(300);
				printf("conta do ceu noturno, voce avista fileiras de helicopteros inimigos se aproximando cada vez mais. \"Estamos mortos\" voce pensa por um instante. Um  estranho objeto\n");Sleep(300);
				printf("surge da escuridao e alcanca o seu ombro, voce parece acordar de um transe\n\n");Sleep(300);
				system("pause");
				printf("\nRicharlison: Acorda! Temos dar o fora daqui agora, eles estao se reagrupando e chegando cada vez mais perto, vamos ter que evacuar rapido,rapido\n\n");Sleep(300);
				system("pause");
				printf("\n-Os dois soldados correm em direcao sul e depois do que pareceram ser horas, eles finalmente param e descancam\n\n");Sleep(300);
				system("pause");
				printf("\nRicharlison: Maldicao! Essa foi por pouco, precisamos ficar mais atentos da proxima vez. Escuta...O nosso contato... So um instante,preciso parar\n");Sleep(300);
				printf("Richarlison: Ok, nosso contato esta ciente da nossa situacao no leste. Ha um esquadrao de bombardeiros e caças vindo para em 48 horas. Como a maior parte\n");Sleep(300);
				printf("do pais pertence ao dominio do Comando Vermelho, eles esperam contornar os estados do centro. Uma rota foi elaborada na esperanca de evitar as artilharias\n");Sleep(300);
				printf("inimigas, para isso os bombardeiros sairao da base aerea Nellis, seguir pelo extremo norte evitando os Ermos de Seattle, fazendo um atravessia ate Halifax.\n");Sleep(300);
				printf("Por favor nao me pergunte o que eh, so sei que existe. Enfim, apos essa localizao os bombardeiros vao parar nesse lugar abastecerem e seguir seu caminho ate\n");Sleep(300);
				printf("o Oceano Atlantico, por fim eles darao meio volta e atacarao a Ilha Spectatle, justamente onde fica o castelo. Por favor me diz que entendeu tudo...\n\n");Sleep(300);
				printf("%s : Alguma ideia do que devemos fazer nesse meio tempo\? Nao eh uma boa ideia ficarmos aqui fora esperando 36 horas, Os vermelhos devem estar a nossa\n",personagem.nome);Sleep(300);
				printf("procura e mais cedo ou mais tarde eles podem nos encontrar e dai...\n\n");Sleep(300);
				printf("Richarlison: Ah quer dizer que voce fala\? Meu Deus, por um instante cheguei a pensar que estavamos em uma historia de RPG em que o autor nao sabia como\n");Sleep(300);
				printf("encaixar um dialogo estilo Mass Effect sem tornar o codigo mais 3 vezes mais complexo. De qualquer forma eh um milagre voce estar falando. Respondendo sua\n");Sleep(300);
				printf("pergunta, voce tem toda razao. Da ultima vez que eu estive aqui.\n\n");Sleep(300);
				printf("%s: La vamos nos de novo...\n\n",personagem.nome);Sleep(300);
				system("pause");
				printf("\nRicharlison: Custumava existir um grupo, dedicado a salvar os sinteticos. Isso foi a muito tempo, quando o Instituto foi destruido nao havia muito a ser feito.\n");Sleep(300);
				printf("Depois que nao havia mais sinteticos para salvar, eles dedicaram seu tempo em ajudar a Comunidade. Depois o Comando Vermelho surgiu, levantou a atencao da\n");Sleep(300);
				printf("Irmandade do Aco pela rapidez com que cresciam, eles batalharam e a Irmandade foi banida dessas bandas, por fim eles declaram ilegal qualquer tipo de faccao\n");Sleep(300);
				printf("ou grupo em que eles tivessem que dividir o poder, e entao o caça as bruxas comecou. O grupo se chamava a Ferrovia, depois que os Vermelhos tomaram o poder\n");Sleep(300);
				printf("eles se dedicaram a pequenos atentados a bomba e pequenos assaltos na tentativa de frear ou quebrar a maquina vermelha. Nao sei que fim levou mas de todas as\n");Sleep(300);
				printf("formas, devemos tentar entrar em contato com eles. Eles viviam no leste de Boston no subsolo de uma igreja...\n\n");Sleep(300);
				system("pause");
				system("cls");
				printf("-%s e Richarlison partem em busca de uma das antigas facçoes da Comunidade, aproveitando a  escuridao noturna para se tornarem mais furtivos. Antes que os\n",personagem.nome);Sleep(300);
				printf("primeiros raios solares tocassem o chao, os dois finalmente chegam na Old North Church, antigo QG da Ferrovia. Apos um longo dialogo com os dois sobreviventes\n");Sleep(300);
				printf("e os demais membros da Ferrovia, ambos chegam em um consenso. As duas partes pretendem invandir na calada da noite uma delegacia do Comando Vermelho em Cambridge,\n");Sleep(300);
				printf("derrotar todos os que tivessem ali dentro, roubar os equipamentos e usar o helicoptero que havia no terraco para invadir o Castelo");Sleep(300);
				printf("-Apos Cambridge ser afogada pela escuridao da noite, o silencio pairou no ar, tudo o que podia escutado era apenas o som do silencio e de pequenos insetos.\n");Sleep(300);
				printf("La fora escondido em pequenas construcoes do que um dia fora Cambridge, o grupo se preparava para o ataque a delegacia.\n\n");Sleep(300);
				system("pause");
				printf("Richarlison: Certeza que isso vai dar certo\? Um ou dois ate da pra segurar mas um quartel inteiro\?\n");Sleep(300);
				printf("Agente da Ferrovia: Nao se preocupe, foque em apenas um, deixe que a equipe de invasao cuida do resto\n");Sleep(300);
				printf("Tamborista: Tudo certo em 5 segundos vamos cortar a energia, e ai que entramos. Ok prerem se, %s vai pra entrada agora e tente acabar com o maximo que conseguir\n\n",personagem.nome);Sleep(300);
				system("pause");
				Escolha2();
				printf("-Apos o apagao, o %s parecia desnorteado, voce sorrateiramente aparece e comeca a batalha",inimigo.nome);Sleep(300);
				Luta();


				if(personagem.pv<=0 && inimigo.vida>0) {
					gameover();
					printf("       \t\tAperte 1 para voltar para o menu\n");
					printf("       \t\t->");
					scanf("%i", &menu);
					system("cls");
					continue;
				}

				else if(personagem.pv>0 && inimigo.vida<=0) {

					printf("VOCE VENCEU! INIMIGO DERROTADO\n");
					//DEVOLVENDO AS ATRIBUIÇÕES DO PERSONAGEM.

					personagem.pv=personagem.pvtotal;
					personagem.itens.defesa=personagem.itens.defpadrao1;
					personagem.itens.dano=personagem.itens.danopadrao;

					printf("Vida o personagem eh de %i\n",personagem.pv);
					printf("Armadura do personagem eh de %i\n",personagem.itens.defesa);
					printf("O dano do personagem eh de %i\n",personagem.itens.dano);
					system("pause");
					system("cls");
				}
				
			    Premiacao2(&personagem.nivel,&personagem.pv,&personagem.pvtotal,&personagem.forca,&personagem.constituicao,&personagem.agilidade,&personagem.destreza,&personagem.itens.dano);
			    
			    
				printf("Richarlison: Conseguimos a delegacia eh nossa. Rapido, sobe no terraco, estamos com tudo pronto pra partir.\n\n");Sleep(300);
				system("pause");
				printf("\n-Entao os 4 personagens se reunem no helicoptero no terraco. Com a ignicao pronta o helicoptero levanta voo rumo ao Castelo do Sub-camandante Girotto\n");Sleep(300);
				printf("Durante horas de voo,finalmente voces avistam o Castelo\n\n");Sleep(300);
				system("pause");
				printf("\nAgente da Ferrovia: Ali esta ele, O Ninho da Aguia, O Castelo ou A Fortaleza. Espero que os seus amigos nao demorem a chegar\n");Sleep(300);
				printf("Richarlison: Nao se preocupe eles parecem atrasados mas tenho certeza que logo chegarao, alguma ideia de como podemos atravessar as muralhas\?");Sleep(300);
				printf("Agente da Ferrovia: Tenho! Geralmente eles possuem um sinal de radio de comicacao com senha. Apenas preciso estar na zona do radar deles...\n");Sleep(300);
				printf("Sinal de Radio: Alto! Identifique-se!\n");Sleep(300);
				printf("Agente da Ferrovia: Ahhhh, nos somos aa\n");Sleep(300);
				printf("Tamborista: Aqui, tenta esse codigo na prancheta, estava no porta luvas.\n");Sleep(300);
				printf("Agente da Ferrovia: Certo, nos somos a equipe Delta, codigo de identificacao 22300009, senha F2004.\n");Sleep(300);
				printf("Sinal de Radio: Espera mais como isso eh......Ok, entrada autorizada. Cuidado com a aterrisagem\n");Sleep(300);
				printf("Richarlison: Conseguimos!\n\n");Sleep(300);
				system("pause");
				printf("\n-O helicoptero sobrevoa tranquilamente sobre as defesas anti-aereas do Castelo e depois atravessa a grande muralha que cerca a ilha inteira. Apos a aterrissagem,\n");Sleep(300);
				printf("um grande tumulto se forma do lado de fora, o veiculo esta cercado por uma horda de soldados do Comando Vermelho, todos estao com suas armas apontadas para o\n");Sleep(300);
				printf("veiculo. No meio da horda, alguns soldados abaixam suas armas e abrem caminho para o que parece ser uma pessoa\n");Sleep(300);
				system("pause");
				system("cls");
				printf("Sub-camandante Girotto: Ah nao, eu nao acredito nisso. Achou mesmo que voces podiam chegar aqui depois de todo o caos e destruicao que voces causaram\?\n");Sleep(300);
				printf("Eu admiro a coragem de voces, sinceramente. Invadir as Torres de Comunicacoes, Destruir e matar todos na delegacia mas tudo isso nao vai passar impune.\n");Sleep(300);
				printf("A delegacia que voces destruiram mais cedo, foi pensado como uma isca pra atrair voces, deixamos as defesas expostas. Sabiamos que voces cair, tanto que voces\n");Sleep(300);
				printf("estao aqui. Sem mais delongas, chega disso tudo. Voces estao derrotados e acabados, saiam do helicoptero e entrenguem as armas se nao oferecerem resistencia\n");Sleep(300);
				printf("podemos pensar em algumas utilidades pra voces, eu vou contar ate 5 e se nao sairem se considerem mortos\n\n");Sleep(300);
				system("pause");
				printf("\n-Um agudo e sonoro bip do painel ecoa dentro do veiculo,despertando a atencao de todos dentre dele, exceto da multidao la fora\n\n");Sleep(300);
				system("pause");
				printf("\nSub-camandante Girotto: 1...\n");Sleep(300);
				printf("-O som ficou mais alto\n");Sleep(300);
				printf("Richarlison: Ninguem se mexe. Ao meu sinal, saquem as armas e abram as portas\n\n");Sleep(300);
				system("pause");
				printf("\nSub-camandante Girotto: 2...\n");Sleep(300);
				printf("-O som ficou mais alto e dessa vez podem se escutar varios bips simultaneamente\n");Sleep(300);
				printf("Richarlison: Esperem...\n\n");Sleep(300);
				system("pause");
				printf("\nSub-camandante Girotto: 3... 4...\n");Sleep(300);
				printf("-O som se torna mais evidente a cada segundo, dessa vez varios bips simultaneos aparecem formando um som unico,agudo e continuo");Sleep(300);
				printf("Richarlison: Esperem...\n\n");Sleep(300);
				system("pause");
				printf("\nSub-camandante Girotto: 5...\n");Sleep(300);
				system("pause");
				system("cls");
				printf("-Um som agudo e estridente rasga os ceus e acerta uma parte da multidao de soldados causando uma grande explosao. Os sistemas de defesas anti-aereas ficam\n");Sleep(300);
				printf("completamente desnorteadas atirando para todos os lugarem do ceu. Sons de explosoes e barulhos de motores podem ouvidos a distancia.\n\n");Sleep(300);
				system("pause");
				printf("\nRicharlison: Agora! Vai,vai vai\n");Sleep(300);
				printf("-As portas do helicoptero se abrem revelando os rebeldes escondidos no interior do veiculo,pegando de surpresa a multidao do Comando Vermelho que estavam\n");Sleep(300);
				printf("desantentas pela explosao que dizimou parte de seu exercito.\n\n");Sleep(300);
				printf("General Girotto: Malditos! Soldados, acabem com eles, protejam o forte da invasao inimiga\n");Sleep(300);
				printf("Richarlison: %s va atras dele, nao se preocupe com a gente, logos os paraquedistas vao estar no solo e vao nos ajudar. Nao deixe ele escapar!\n",personagem.nome);Sleep(300);
				printf("B-52: %s , vamos arremessar uma carga preciosa. Pegue, sao equipamentos de ultima tecnologia, voce vai precisar deles\n\n",personagem.nome);Sleep(300);
				system("pause");
				Traje();
				printf("-Voce corre em direcao a torre do castelo, local que voce avistou o General indo pela ultima vez. Apos escalar ate a torre, voce encontra uma sala e depois de\n");
				printf("arrebentar a porta, voce encontra o General se rendendo.\n");
				printf("General Girotto: Voce venceu, eu me rendo. Por favor eu imploro, nao me mate. Nao sou eu a pessoa por tras desse exercito. Confie em mim, se realmente quiser\n");
				printf("saber quem esta por tras disso tudo, ele esta atras daquela porta\n");
				printf("-Voce caminha em diracao a uma grande porta de ferro, voce abre a porta, ha uma longa escada, e de repende alguem empurra voce e a porta se tranca atras de voce\n");
				printf("General Girotto: Eu sinto muito, eu nao sou o vilao dessa historia. Ha uma antiga profecia, voce tem que torna-la verdadeira. Eh a nossa ultima esperanca, salve\n");
				printf("nossas almas, por favor.\n");
				printf("-Voce lentamente desce as escadas, quando finalmente termina de descer, o mau o aguarda\n");
				system("pause");
				system("cls");
				Escolha3();
				printf("%s : Entao, voce aqui estamos nos. A profecia dos antigos ancioes diz que o dia final do imperio comeca hoje, mas eles podem estar errados.Mas antes\n",inimigo.nome);
				printf("eu tenho duas propostas para voce a primeira eh, voce desiste de lutar contra mim e nos dois podemos reinar cada centimetro desse pais, o imperio sera seu e \n");
				printf("todas as almas serao nossas e voce ter tudo o que sempre desejou. Tambem tenho a segunda opccao: voce e eu em uma luta ate a morte, pode tentar a sorte e tornar\n");
				printf("a profecia verdadeira. E entao, o que vai ser\?\n");
				printf("-Voce rapidamente puxa a sua arma e destrava.");
				printf("%s : Parece que voce ja fez sua escolha...\n",inimigo.nome);  
				// DIALOGO FINAL ATÉ O BOSS  
				Luta();

                if(personagem.pv<=0 && inimigo.vida>0) {
					gameover();
					printf("-Apos uma longa batalha, a profecia se tornou falsa. Voce foi destruido, o exercito da NCR foi massacrado e todas as resistencias foram exterminadas, o pais foi\n");
					printf("dizimado e renasceu sobre a bandeira do Comando Vermelho, a liberdade como conhecemos hoje jamais sera alcancada novamente e seu nome jaz como um mito de esperenca\n");
					printf("o irrefreavel exercito avanca por todo o territorio, voce nunca mais sera lembrado...");
					printf("FIM\?");
					printf("       \t\tAperte 1 para voltar para o menu\n");
					printf("       \t\t->");
					scanf("%i", &menu);
					system("cls");
					continue;
				}

				else if(personagem.pv>0 && inimigo.vida<=0) {
                    youwin();
					printf("-Apos uma longa batalha, a profecia se concretizou. Os soldados do Comando Vermelho parecem terem sido libertados de uma especie de transe, a cena caotica de guerra\n");
					printf("no castelo cessou, o restos do que um dia foi o grande senhor do Comando Vermelho jaz no chao. A luz do sol chega revelando um renascimento de esperanca e liberdade\n");
					printf("para todo o pais, as estruturas do Comando Vermelho foram destruidas. Seu nome ecoa e sera para sempre lembrado por todos como uma luz na escuridao\n");
					printf("FIM\n");
					system("pause");
					exit(0);

		}
	}
} 

}

//FUNÇÃO PERSONAGEM MONTAGEM 1
void Escolha1() {

	srand(time(NULL));
	int dadol3=(rand()%3)+1;

	switch(dadol3) {

		case 1:
			strcpy(inimigo.nome,"Soldado MC Poze do Rodo");
			personagem.nome[strlen(personagem.nome) - 1] = '\0';
			inimigo.agilidade=personagem.agilidade+1;
			inimigo.defesa=personagem.itens.defesa-5;
			inimigo.dano=personagem.itens.dano-5;
			inimigo.vida=personagem.pv-5;
			inimigo.defpadrao=inimigo.defesa;
			inimigo.vidatotal=inimigo.vida;
			break;

		case 2:
			strcpy(inimigo.nome,"Inicante do Comando Vermelho");
			personagem.nome[strlen(personagem.nome) - 1] = '\0';
			inimigo.agilidade=abs(personagem.agilidade-1);
			inimigo.defesa=personagem.itens.defesa;
			inimigo.dano=personagem.itens.dano;
			inimigo.vida=personagem.pv;
			inimigo.defpadrao=inimigo.defesa;
			inimigo.vidatotal=inimigo.vida;
			break;

		case 3:
			strcpy(inimigo.nome,"Aspirante do Comando Vermelho");
			personagem.nome[strlen(personagem.nome) - 1] = '\0';
			inimigo.agilidade=abs(personagem.agilidade-1);
			inimigo.defesa=personagem.itens.defesa+5;
			inimigo.dano=personagem.itens.dano+5;
			inimigo.vida=personagem.pv+5;
			inimigo.defpadrao=inimigo.defesa;
			inimigo.vidatotal=inimigo.vida;
			break;
	}
}

//FUNÇÃO PERSONAGEM MONTAGEM 2
void Escolha2() {
	
	srand(time(NULL));
	int dadol3=(rand()%3)+1;

	switch(dadol3) {

		case 1:
			strcpy(inimigo.nome,"Soldado do Comando Vermelho");
			personagem.nome[strlen(personagem.nome) - 1] = '\0';
			inimigo.agilidade=personagem.agilidade-1;
			inimigo.defesa=personagem.itens.defesa+5;
			inimigo.dano=personagem.itens.dano+5;
			inimigo.vida=personagem.pv+5;
			inimigo.defpadrao=inimigo.defesa;
			inimigo.vidatotal=inimigo.vida;
			break;

		case 2:
			strcpy(inimigo.nome,"Cavaleiro do Comando Vermelho");
			personagem.nome[strlen(personagem.nome) - 1] = '\0';
			inimigo.agilidade=abs(personagem.agilidade-1);
			inimigo.defesa=personagem.itens.defesa+10;
			inimigo.dano=personagem.itens.dano+10;
			inimigo.vida=personagem.pv+10;
			inimigo.defpadrao=inimigo.defesa;
			inimigo.vidatotal=inimigo.vida;
			break;

		case 3:
			strcpy(inimigo.nome,"Paladino do Comando Vermelho");
			personagem.nome[strlen(personagem.nome) - 1] = '\0';
			inimigo.agilidade=abs(personagem.agilidade-1);
			inimigo.defesa=personagem.itens.defesa+15;
			inimigo.dano=personagem.itens.dano+15;
			inimigo.vida=personagem.pv+15;
			inimigo.defpadrao=inimigo.defesa;
			inimigo.vidatotal=inimigo.vida;
			break;
	}


}

// BOSS
void Escolha3() {
	srand(time(NULL));
	int dadol3=(rand()%3)+1;

	switch(dadol3) {

		case 1:
			strcpy(inimigo.nome,"Capitao Games EduUu");
			inimigo.agilidade=personagem.agilidade+10;
			inimigo.defesa=personagem.itens.defesa+50;
			inimigo.dano=personagem.itens.dano+50;
			inimigo.vida=personagem.pv+50;
			inimigo.defpadrao=inimigo.defesa;
			inimigo.vidatotal=inimigo.vida;
			break;

		case 2:
			strcpy(inimigo.nome,"General BRKsEDU");
			inimigo.agilidade=abs(personagem.agilidade+10);
			inimigo.defesa=personagem.itens.defesa+60;
			inimigo.dano=personagem.itens.dano+60;
			inimigo.vida=personagem.pv+60;
			inimigo.defpadrao=inimigo.defesa;
			inimigo.vidatotal=inimigo.vida;
			break;

		case 3:
			strcpy(inimigo.nome,"ALESSANDRA");
			inimigo.agilidade=abs(personagem.agilidade+70);
			inimigo.defesa=personagem.itens.defesa+75;
			inimigo.dano=personagem.itens.dano+75;
			inimigo.vida=personagem.pv+75;
			inimigo.defpadrao=inimigo.defesa;
			inimigo.vidatotal=inimigo.vida;
			break;
	}


}

//FUNÇÃO DA LUTA
void Luta() {
//QUEBRE ESTE COMENTARIO PARA ACESSAR O GODMODE

	personagem.itens.dano=9999;
	personagem.itens.defesa=9999;
	personagem.pv=9999;


	srand(time(NULL));
	int dado1l6=(rand()%6)+1;
	int dado2l6=(rand()%6)+1;
	int dado3l6=(rand()%6)+1;
	int defesa_backup_personagem=personagem.itens.defesa;
	int defesa_backup_inimigo=inimigo.defesa;
	int stimpak1=0;
	int stimpak2=0;
	int comando=0;
	int trava1=0;
	int trava2=0;
	int soma=0;

//ESTRUTURA PRIMARIA CASO PERSONAGEM SEJA MAIS AGIL QUE O INIMIGO
	if(personagem.agilidade>inimigo.agilidade) {

		while(personagem.pv>0 && inimigo.vida>0) {
			system("pause");
			system("cls");
			printf("|PERSONAGEM: %s\t\t\t|ADVERSARIO: %s\n",personagem.nome,inimigo.nome);
			printf("|DANO: %i\t\t\t\t|DANO: %i\n", personagem.itens.dano,inimigo.dano);
			printf("|ARMADURA: %i\t\t\t\t|ARMADURA: %i\n",personagem.itens.defesa,inimigo.defesa);
			printf("|VIDA: %i/%i\t\t\t\t|VIDA: %i/%i\n",personagem.pv,personagem.pvtotal, inimigo.vida, inimigo.vidatotal);
			printf("|AGILIDADE: %i\t\t\t\t|AGILIDADE: %i\n\n",personagem.agilidade,inimigo.agilidade);


			trava1=0;
			personagem.itens.defesa=defesa_backup_personagem;
//INICIO DO PERSONAGEM
//IF CASO O PERSONAGEM AINDA TENHA ARMADURA
			if(personagem.itens.defesa>0) {

				if(stimpak1!=3) {

					printf("1-ATACAR\n");
					printf("2-DEFENDER\n");
					printf("3-USAR STIMPAK\n");
					printf("COMANDO:");
					scanf("%i",&comando);

					switch(comando) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava2==0) {


								//PRIMEIRO IF É PARA SE O INIMIGO AINDA TIVER ARMADURA
								if(inimigo.defesa>0) {
									soma=inimigo.defesa-personagem.itens.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										inimigo.defesa=0;
										defesa_backup_inimigo=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										inimigo.defesa=inimigo.defesa-personagem.itens.dano;
										defesa_backup_inimigo=inimigo.defesa;
										printf("A armadura de %s sofreu um dano de %i\n",inimigo.nome,personagem.itens.dano);
									}

								}

								else if(inimigo.defesa<=0) {
									inimigo.vida=inimigo.vida-personagem.itens.dano;
									printf("Seu inimigo perdeu %i de vida\n",personagem.itens.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							personagem.itens.defesa=2*personagem.itens.defesa;
							printf("Defesa aumentada para %i durante 1 turno\n",personagem.itens.defesa);
							trava1=1;
							break;

						case 3:
							dado1l6=(rand()%6)+1;
							dado2l6=(rand()%6)+1;
							dado3l6=(rand()%6)+1;

							soma=dado1l6+dado2l6+dado3l6;
							personagem.pv=personagem.pv+soma;
							printf("Stimpak te forneceu %i a mais de vida\n",soma);
							printf("Voce possui %i de vida\n",personagem.pv);
							stimpak1=stimpak1+1;
							break;

						default:
							printf("-Comando invalido\n");
					}

				}//interface MOLDE

				else if(stimpak1==3) {

					personagem.itens.defesa=defesa_backup_personagem;
					printf("SEU TURNO\n");
					printf("1-ATACAR\n");
					printf("2-DEFENDER\n");
					printf("COMANDO:");
					scanf("%i",&comando);

					switch(comando) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava2==0) {


								//PRIMEIRO IF É PARA SE O INIMIGO AINDA TIVER ARMADURA
								if(inimigo.defesa>0) {
									soma=inimigo.defesa-personagem.itens.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										inimigo.defesa=0;
										defesa_backup_inimigo=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										inimigo.defesa=inimigo.defesa-personagem.itens.dano;
										defesa_backup_inimigo=inimigo.defesa;
										printf("A armadura de %s sofreu um dano de %i\n",inimigo.nome,personagem.itens.dano);
									}

								}

								else if(inimigo.defesa<=0) {
									inimigo.vida=inimigo.vida-personagem.itens.dano;
									printf("Seu inimigo perdeu %i de vida\n",personagem.itens.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							personagem.itens.defesa=2*personagem.itens.defesa;
							printf("Defesa aumentada para %i durante 1 turno\n",personagem.itens.defesa);
							trava1=1;
							break;

						default:
							printf("-Comando invalido\n");
					}
				}
			}
//FIM DO IF CASO O PERSONAGEM AINDA TENHA ARMADURA



//INICIO DO IF CASO O PERSONAGEM NÃO TENHA MAIS ARMADURA

			else if(personagem.itens.defesa==0) {

				if(stimpak1!=3) {

					personagem.itens.defesa=defesa_backup_personagem;
					printf("SEU TURNO\n");
					printf("1-ATACAR\n");
					printf("2-USAR STIMPAK\n");
					printf("COMANDO:");
					scanf("%i",&comando);

					switch(comando) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava2==0) {


								//PRIMEIRO IF É PARA SE O INIMIGO AINDA TIVER ARMADURA
								if(inimigo.defesa>0) {
									soma=inimigo.defesa-personagem.itens.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										inimigo.defesa=0;
										defesa_backup_inimigo=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										inimigo.defesa=inimigo.defesa-personagem.itens.dano;
										defesa_backup_inimigo=inimigo.defesa;
										printf("A armadura de %s sofreu um dano de %i\n",inimigo.nome,personagem.itens.dano);
									}

								}

								else if(inimigo.defesa<=0) {
									inimigo.vida=inimigo.vida-personagem.itens.dano;
									printf("Seu inimigo perdeu %i de vida\n",personagem.itens.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							dado1l6=(rand()%6)+1;
							dado2l6=(rand()%6)+1;
							dado3l6=(rand()%6)+1;

							soma=dado1l6+dado2l6+dado3l6;
							personagem.pv=personagem.pv+soma;
							printf("Stimpak te forneceu %i a mais de vida\n",soma);
							printf("Voce possui %i de vida\n",personagem.pv);
							stimpak1=stimpak1+1;
							break;

						default:
							printf("-Comando invalido\n");
					}
				}

				else if(stimpak1==3) {

					personagem.itens.defesa=defesa_backup_personagem;
					printf("SEU TURNO\n");
					printf("1-ATACAR\n");
					printf("COMANDO:");
					scanf("%i",&comando);

					switch(comando) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava2==0) {


								//PRIMEIRO IF É PARA SE O INIMIGO AINDA TIVER ARMADURA
								if(inimigo.defesa>0) {
									soma=inimigo.defesa-personagem.itens.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										inimigo.defesa=0;
										defesa_backup_inimigo=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										inimigo.defesa=inimigo.defesa-personagem.itens.dano;
										defesa_backup_inimigo=inimigo.defesa;
										printf("A armadura de %s sofreu um dano de %i\n",inimigo.nome,personagem.itens.dano);
									}

								}

								else if(inimigo.defesa<=0) {
									inimigo.vida=inimigo.vida-personagem.itens.dano;
									printf("Seu inimigo perdeu %i de vida\n",personagem.itens.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						default:
							printf("-Comando invalido\n");
					}
				}
			}
//FIM DO IF CASO O PERSONAGEM NÃO TENHA MAIS A ARMADURA
//FIM DE TODAS AS POSSIBILIDADES DE TURNO DO PERSONAGEM
			if(inimigo.vida<=0) {
				break;
			}









			else

				trava2=0;
			inimigo.defesa=defesa_backup_inimigo;
//INICIO DO TURNO DO INIMIGO
//IF CASO O INIMIGO AINDA TENHA ARMADURA

			if(inimigo.defesa>0) {

				if(stimpak2!=3) {

					printf("TURNO INIMIGO\n");
					system("pause");
					srand(time(NULL));
					int dado1l3=(rand()%3)+1;


					switch(dado1l3) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava1==0) {


								//PRIMEIRO IF É PARA SE O PERSONAGEM AINDA TIVER ARMADURA
								if(personagem.itens.defesa>0) {
									soma=personagem.itens.defesa-inimigo.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										personagem.itens.defesa=0;
										defesa_backup_personagem=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										personagem.itens.defesa=personagem.itens.defesa-inimigo.dano;
										defesa_backup_personagem=personagem.itens.defesa;
										printf("Sua armadura sofreu um dano de %i\n",inimigo.dano);
									}

								}

								else if(personagem.itens.defesa<=0) {
									personagem.pv=personagem.pv-inimigo.dano;
									printf("Voce perdeu %i de vida\n",inimigo.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							inimigo.defesa=2*inimigo.defesa;
							printf("Defesa aumentada para %i durante 1 turno\n",inimigo.defesa);
							trava2=1;
							break;

						case 3:
							dado1l6=(rand()%6)+1;
							dado2l6=(rand()%6)+1;
							dado3l6=(rand()%6)+1;

							soma=dado1l6+dado2l6+dado3l6;
							inimigo.vida=inimigo.vida+soma;
							printf("Stimpak forneceu %i a mais de vida ao inimigo\n",soma);
							printf("%s possui %i de vida\n",inimigo.nome,inimigo.vida);
							stimpak2=stimpak2+1;
							break;

						default:
							printf("ERROR[1]");

					}

				}//interface MOLDE

				else if(stimpak2==3) {

					printf("TURNO INIMIGO\n");
					system("pause");
					srand(time(NULL));
					int dado1l2=(rand()%2)+1;
					switch(dado1l2) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava1==0) {


								//PRIMEIRO IF É PARA SE O PERSONAGEM AINDA TIVER ARMADURA
								if(personagem.itens.defesa>0) {
									soma=personagem.itens.defesa-inimigo.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										personagem.itens.defesa=0;
										defesa_backup_personagem=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										personagem.itens.defesa=personagem.itens.defesa-inimigo.dano;
										defesa_backup_personagem=personagem.itens.defesa;
										printf("Sua armadura sofreu um dano de %i\n",inimigo.dano);
									}

								}

								else if(personagem.itens.defesa<=0) {
									personagem.pv=personagem.pv-inimigo.dano;
									printf("Voce perdeu %i de vida\n",inimigo.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							inimigo.defesa=2*inimigo.defesa;
							printf("Defesa aumentada para %i durante 1 turno\n",inimigo.defesa);
							trava2=1;
							break;

						default:
							printf("ERROR[2]");
					}
				}
			}
//FIM DO IF CASO O INIMIGO AINDA TENHA ARMADURA

//INICIO DO IF CASO O INIMIGO NÃO TENHA MAIS ARMADURA
			else if(inimigo.defesa<=0) {

				if(stimpak2!=3) {

					printf("TURNO INIMIGO\n");
					system("pause");
					srand(time(NULL));
					int dado1l2=(rand()%2)+1;


					switch(dado1l2) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava1==0) {


								//PRIMEIRO IF É PARA SE O PERSONAGEM AINDA TIVER ARMADURA
								if(personagem.itens.defesa>0) {
									soma=personagem.itens.defesa-inimigo.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										personagem.itens.defesa=0;
										defesa_backup_personagem=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										personagem.itens.defesa=personagem.itens.defesa-inimigo.dano;
										defesa_backup_personagem=personagem.itens.defesa;
										printf("Sua armadura sofreu um dano de %i\n",inimigo.dano);
									}

								}

								else if(personagem.itens.defesa<=0) {
									personagem.pv=personagem.pv-inimigo.dano;
									printf("Voce perdeu %i de vida\n",inimigo.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							dado1l6=(rand()%6)+1;
							dado2l6=(rand()%6)+1;
							dado3l6=(rand()%6)+1;

							soma=dado1l6+dado2l6+dado3l6;
							inimigo.vida=inimigo.vida+soma;
							printf("Stimpak forneceu %i a mais de vida ao inimigo\n",soma);
							printf("%s possui %i de vida\n",inimigo.nome,inimigo.vida);
							stimpak2=stimpak2+1;
							break;

						default:
							printf("ERROR[3]");
					}
				}


				else if(stimpak2==3) {

					printf("TURNO INIMIGO\n");
					system("pause");
					srand(time(NULL));
					int dado1l1=(rand()%1)+1;


					switch(dado1l1) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava1==0) {


								//PRIMEIRO IF É PARA SE O PERSONAGEM AINDA TIVER ARMADURA
								if(personagem.itens.defesa>0) {
									soma=personagem.itens.defesa-inimigo.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										personagem.itens.defesa=0;
										defesa_backup_personagem=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										personagem.itens.defesa=personagem.itens.defesa-inimigo.dano;
										defesa_backup_personagem=personagem.itens.defesa;
										printf("Sua armadura sofreu um dano de %i\n",inimigo.dano);
									}

								}

								else if(personagem.itens.defesa<=0) {
									personagem.pv=personagem.pv-inimigo.dano;

									printf("Voce perdeu %i de vida\n",inimigo.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						default:
							printf("ERROR[4]");
					}
				}
			}
//FIM DO ELSE IF CASO O INIMIGO NÃO TENHA MAIS ARMADURAS
//FIM DE TODAS AS POSSIBILIDADES DURANTE O TURNO INIMIGO

			if(personagem.pv<=0) {
				break;
			}

		}
//FIM DA FUNÇÃO WHILE CASO O PERSONAGEM SEJA MAIS AGIL QUE O INIMIGO


		if(personagem.pv>0 && inimigo.vida<=0) {
			printf("VOCE VENCEU! INIMIGO DERROTADO");

		}
	}
//FIM DA ESTRUTURA PRIMARIA, CASO PERSONAGEM SEJA MAIS AGIL QUE O INIMIGO



















//INICIO DA ESTRUTURA SECUNDARIA, CASO O INIMIGO SEJA MAIS AGIL QUE O PERSONAGEM
	else if(inimigo.agilidade>personagem.agilidade) {


//INICIO DO LOOP DA LUTA
		while(personagem.pv>0 && inimigo.vida>0) {

			system("pause");
			system("cls");
			printf("|PERSONAGEM: %s\t\t\t\t|ADVERSARIO: %s\n",personagem.nome,inimigo.nome);
			printf("|DANO: %i\t\t\t\t|DANO: %i\n", personagem.itens.dano,inimigo.dano);
			printf("|ARMADURA: %i\t\t\t\t|ARMADURA: %i\n",personagem.itens.defesa,inimigo.defesa);
			printf("|VIDA: %i/%i\t\t\t\t|VIDA: %i/%i\n",personagem.pv,personagem.pvtotal, inimigo.vida, inimigo.vidatotal);
			printf("|AGILIDADE: %i\t\t\t\t|AGILIDADE: %i\n\n",personagem.agilidade,inimigo.agilidade);

			trava2=0;
			inimigo.defesa=defesa_backup_inimigo;
//INICIO DO TURNO DO INIMIGO
//IF CASO O INIMIGO AINDA TENHA ARMADURA

			if(inimigo.defesa>0) {

				if(stimpak2!=3) {

					printf("TURNO INIMIGO\n");
					system("pause");
					srand(time(NULL));
					int dado1l3=(rand()%3)+1;


					switch(dado1l3) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava1==0) {


								//PRIMEIRO IF É PARA SE O PERSONAGEM AINDA TIVER ARMADURA
								if(personagem.itens.defesa>0) {
									soma=personagem.itens.defesa-inimigo.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										personagem.itens.defesa=0;
										defesa_backup_personagem=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										personagem.itens.defesa=personagem.itens.defesa-inimigo.dano;
										defesa_backup_personagem=personagem.itens.defesa;
										printf("Sua armadura sofreu um dano de %i\n",inimigo.dano);
									}

								}

								else if(personagem.itens.defesa<=0) {
									personagem.pv=personagem.pv-inimigo.dano;
									printf("Voce perdeu %i de vida\n",inimigo.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							inimigo.defesa=2*inimigo.defesa;
							printf("Defesa aumentada para %i durante 1 turno\n",inimigo.defesa);
							trava2=1;
							break;

						case 3:
							dado1l6=(rand()%6)+1;
							dado2l6=(rand()%6)+1;
							dado3l6=(rand()%6)+1;

							soma=dado1l6+dado2l6+dado3l6;
							inimigo.vida=inimigo.vida+soma;
							printf("Stimpak forneceu %i a mais de vida ao inimigo\n",soma);
							printf("%s possui %i de vida\n",inimigo.nome,inimigo.vida);
							stimpak2=stimpak2+1;
							break;

						default:
							printf("ERROR[1]");

					}

				}//interface MOLDE

				else if(stimpak2==3) {

					printf("TURNO INIMIGO\n");
					system("pause");
					srand(time(NULL));
					int dado1l2=(rand()%2)+1;
					switch(dado1l2) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava1==0) {


								//PRIMEIRO IF É PARA SE O PERSONAGEM AINDA TIVER ARMADURA
								if(personagem.itens.defesa>0) {
									soma=personagem.itens.defesa-inimigo.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										personagem.itens.defesa=0;
										defesa_backup_personagem=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										personagem.itens.defesa=personagem.itens.defesa-inimigo.dano;
										defesa_backup_personagem=personagem.itens.defesa;
										printf("Sua armadura sofreu um dano de %i\n",inimigo.dano);
									}

								}

								else if(personagem.itens.defesa<=0) {
									personagem.pv=personagem.pv-inimigo.dano;
									printf("Voce perdeu %i de vida\n",inimigo.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							inimigo.defesa=2*inimigo.defesa;
							printf("Defesa aumentada para %i durante 1 turno\n",inimigo.defesa);
							trava2=1;
							break;

						default:
							printf("ERROR[2]");
					}
				}
			}
//FIM DO IF CASO O INIMIGO AINDA TENHA ARMADURA

//INICIO DO IF CASO O INIMIGO NÃO TENHA MAIS ARMADURA
			else if(inimigo.defesa<=0) {

				if(stimpak2!=3) {

					printf("TURNO INIMIGO\n");
					system("pause");
					srand(time(NULL));
					int dado1l2=(rand()%2)+1;


					switch(dado1l2) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava1==0) {


								//PRIMEIRO IF É PARA SE O PERSONAGEM AINDA TIVER ARMADURA
								if(personagem.itens.defesa>0) {
									soma=personagem.itens.defesa-inimigo.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										personagem.itens.defesa=0;
										defesa_backup_personagem=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										personagem.itens.defesa=personagem.itens.defesa-inimigo.dano;
										defesa_backup_personagem=personagem.itens.defesa;
										printf("Sua armadura sofreu um dano de %i\n",inimigo.dano);
									}

								}

								else if(personagem.itens.defesa<=0) {
									personagem.pv=personagem.pv-inimigo.dano;
									printf("Voce perdeu %i de vida\n",inimigo.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							dado1l6=(rand()%6)+1;
							dado2l6=(rand()%6)+1;
							dado3l6=(rand()%6)+1;

							soma=dado1l6+dado2l6+dado3l6;
							inimigo.vida=inimigo.vida+soma;
							printf("Stimpak forneceu %i a mais de vida ao inimigo\n",soma);
							printf("%s possui %i de vida\n",inimigo.nome,inimigo.vida);
							stimpak2=stimpak2+1;
							break;

						default:
							printf("ERROR[3]");
					}
				}


				else if(stimpak2==3) {

					printf("TURNO INIMIGO\n");
					system("pause");
					srand(time(NULL));
					int dado1l1=(rand()%1)+1;


					switch(dado1l1) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava1==0) {


								//PRIMEIRO IF É PARA SE O PERSONAGEM AINDA TIVER ARMADURA
								if(personagem.itens.defesa>0) {
									soma=personagem.itens.defesa-inimigo.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										personagem.itens.defesa=0;
										defesa_backup_personagem=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										personagem.itens.defesa=personagem.itens.defesa-inimigo.dano;
										defesa_backup_personagem=personagem.itens.defesa;
										printf("Sua armadura sofreu um dano de %i\n",inimigo.dano);
									}

								}

								else if(personagem.itens.defesa<=0) {
									personagem.pv=personagem.pv-inimigo.dano;

									printf("Voce perdeu %i de vida\n",inimigo.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						default:
							printf("ERROR[4]");
					}
				}
			}
//FIM DO ELSE IF CASO O INIMIGO NÃO TENHA MAIS ARMADURAS
//FIM DE TODAS AS POSSIBILIDADES DURANTE O TURNO INIMIGO

			if(personagem.pv<=0) {
				break;
			}







			else
				trava1=0;
			personagem.itens.defesa=defesa_backup_personagem;
//INICIO DO PERSONAGEM
//IF CASO O PERSONAGEM AINDA TENHA ARMADURA
			if(personagem.itens.defesa>0) {

				if(stimpak1!=3) {

					printf("1-ATACAR\n");
					printf("2-DEFENDER\n");
					printf("3-USAR STIMPAK\n");
					printf("COMANDO:");
					scanf("%i",&comando);

					switch(comando) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava2==0) {


								//PRIMEIRO IF É PARA SE O INIMIGO AINDA TIVER ARMADURA
								if(inimigo.defesa>0) {
									soma=inimigo.defesa-personagem.itens.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										inimigo.defesa=0;
										defesa_backup_inimigo=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										inimigo.defesa=inimigo.defesa-personagem.itens.dano;
										defesa_backup_inimigo=inimigo.defesa;
										printf("A armadura de %s sofreu um dano de %i\n",inimigo.nome,personagem.itens.dano);
									}

								}

								else if(inimigo.defesa<=0) {
									inimigo.vida=inimigo.vida-personagem.itens.dano;
									printf("Seu inimigo perdeu %i de vida\n",personagem.itens.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							personagem.itens.defesa=2*personagem.itens.defesa;
							printf("Defesa aumentada para %i durante 1 turno\n",personagem.itens.defesa);
							trava1=1;
							break;

						case 3:
							dado1l6=(rand()%6)+1;
							dado2l6=(rand()%6)+1;
							dado3l6=(rand()%6)+1;

							soma=dado1l6+dado2l6+dado3l6;
							personagem.pv=personagem.pv+soma;
							printf("Stimpak te forneceu %i a mais de vida\n",soma);
							printf("Voce possui %i de vida\n",personagem.pv);
							stimpak1=stimpak1+1;
							break;

						default:
							printf("-Comando invalido\n");
					}

				}//interface MOLDE

				else if(stimpak1==3) {

					personagem.itens.defesa=defesa_backup_personagem;
					printf("SEU TURNO\n");
					printf("1-ATACAR\n");
					printf("2-DEFENDER\n");
					printf("COMANDO:");
					scanf("%i",&comando);

					switch(comando) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava2==0) {


								//PRIMEIRO IF É PARA SE O INIMIGO AINDA TIVER ARMADURA
								if(inimigo.defesa>0) {
									soma=inimigo.defesa-personagem.itens.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										inimigo.defesa=0;
										defesa_backup_inimigo=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										inimigo.defesa=inimigo.defesa-personagem.itens.dano;
										defesa_backup_inimigo=inimigo.defesa;
										printf("A armadura de %s sofreu um dano de %i\n",inimigo.nome,personagem.itens.dano);
									}

								}

								else if(inimigo.defesa<=0) {
									inimigo.vida=inimigo.vida-personagem.itens.dano;
									printf("Seu inimigo perdeu %i de vida\n",personagem.itens.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							personagem.itens.defesa=2*personagem.itens.defesa;
							printf("Defesa aumentada para %i durante 1 turno\n",personagem.itens.defesa);
							trava1=1;
							break;

						default:
							printf("-Comando invalido\n");
					}
				}
			}
//FIM DO IF CASO O PERSONAGEM AINDA TENHA ARMADURA



//INICIO DO IF CASO O PERSONAGEM NÃO TENHA MAIS ARMADURA

			else if(personagem.itens.defesa==0) {

				if(stimpak1!=3) {

					personagem.itens.defesa=defesa_backup_personagem;
					printf("SEU TURNO\n");
					printf("1-ATACAR\n");
					printf("2-USAR STIMPAK\n");
					printf("COMANDO:");
					scanf("%i",&comando);

					switch(comando) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava2==0) {


								//PRIMEIRO IF É PARA SE O INIMIGO AINDA TIVER ARMADURA
								if(inimigo.defesa>0) {
									soma=inimigo.defesa-personagem.itens.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										inimigo.defesa=0;
										defesa_backup_inimigo=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										inimigo.defesa=inimigo.defesa-personagem.itens.dano;
										defesa_backup_inimigo=inimigo.defesa;
										printf("A armadura de %s sofreu um dano de %i\n",inimigo.nome,personagem.itens.dano);
									}

								}

								else if(inimigo.defesa<=0) {
									inimigo.vida=inimigo.vida-personagem.itens.dano;
									printf("Seu inimigo perdeu %i de vida\n",personagem.itens.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						case 2:
							dado1l6=(rand()%6)+1;
							dado2l6=(rand()%6)+1;
							dado3l6=(rand()%6)+1;

							soma=dado1l6+dado2l6+dado3l6;
							personagem.pv=personagem.pv+soma;
							printf("Stimpak te forneceu %i a mais de vida\n",soma);
							printf("Voce possui %i de vida\n",personagem.pv);
							stimpak1=stimpak1+1;
							break;

						default:
							printf("-Comando invalido\n");
					}
				}

				else if(stimpak1==3) {

					personagem.itens.defesa=defesa_backup_personagem;
					printf("SEU TURNO\n");
					printf("1-ATACAR\n");
					printf("COMANDO:");
					scanf("%i",&comando);

					switch(comando) {

						case 1:
							//A TRAVA FAZ COM QUE A DEFESA ADVERSARIA ESTEJA ATIVA,LOGO NENHUM DANO SERA CAUSADO AO ADVERSARIO

							if(trava2==0) {


								//PRIMEIRO IF É PARA SE O INIMIGO AINDA TIVER ARMADURA
								if(inimigo.defesa>0) {
									soma=inimigo.defesa-personagem.itens.dano;

									//SE DER NEGATIVO,IGUALAMOS A ARMADURA A 0
									if(soma<=0) {
										inimigo.defesa=0;
										defesa_backup_inimigo=0;
										printf("ARMADURA DESTRUIDA\n");
									}


									//CASO CONTRARIO, CAUSAMOS DANOS A ARMADURA
									else if(soma>0) {
										inimigo.defesa=inimigo.defesa-personagem.itens.dano;
										defesa_backup_inimigo=inimigo.defesa;
										printf("A armadura de %s sofreu um dano de %i\n",inimigo.nome,personagem.itens.dano);
									}

								}

								else if(inimigo.defesa<=0) {
									inimigo.vida=inimigo.vida-personagem.itens.dano;
									printf("Seu inimigo perdeu %i de vida\n",personagem.itens.dano);
								}
							} else
								printf("A defesa esta ativa, nenhum dano foi causado\n");
							break;

						default:
							printf("-Comando invalido\n");
					}
				}
			}
//FIM DO IF CASO O PERSONAGEM NÃO TENHA MAIS A ARMADURA
//FIM DE TODAS AS POSSIBILIDADES DE TURNO DO PERSONAGEM
			if(inimigo.vida<=0) {
				break;
			}






		}
//FIM DO LOOP DA LUTA

	}
//FIM DA ESTRUTURA SECUNDARIA,CASO O INIMIGO SEJA MAIS AGIL QUE O PERSONAGEM

} //funcao


void Traje() {
	system("cls");
	printf("\n-Uma grande capsula de metal cai na sua frente, ela se abre revelando uma grande quantidade de itens interessantes.\n\n");Sleep(300);
	printf("Soro misterioso adquirido.\n\n");Sleep(300);
	system("pause");
	printf("\n-O soro misterioso te forneceu PV maximo\n");Sleep(300);
	personagem.pv=200;
	personagem.pvtotal=personagem.pv;
	printf("-Vida do personagem: %i\n\n",personagem.pv);Sleep(300);
	printf("Power Armor X-01 adquirida\n");Sleep(300);
	system("pause");
	strcpy(personagem.itens.armadura,"Power Armor X-01");Sleep(300);
	personagem.itens.defesa=200;
	personagem.itens.defpadrao1=personagem.itens.defesa;
	personagem.itens.tipo_armadura='P';
	printf("\n-A armadura X-01 te forneceu %i de defesa\n\n",personagem.itens.defesa);Sleep(300);
	printf("BFG9000 adquirida\n");Sleep(300);
	system("pause");
	personagem.itens.BFG9000=100;
	personagem.itens.carga=1;
	printf("-Voce pegou a arma BFG9000, ela possui %i de dano e apenas %i de carga disponivel\n",personagem.itens.BFG9000,personagem.itens.carga);Sleep(300);
	printf("Fuzil Pesado adquirido\n");Sleep(300);
	system("pause");
	strcpy(personagem.itens.arma,"Fuzil Pesado");Sleep(300);
	personagem.itens.dano=60;
	personagem.itens.danopadrao=personagem.itens.dano;
	personagem.itens.tipo_arma='P';
	printf("Voce se equipou com tudo o que podia\n\n");
	printf("--|PERSONAGEM: %s \n",personagem.nome); 
	printf("--|PONTOS VITAIS: %i\n",personagem.pv);
	printf("--|ARMADURA: %s\n",personagem.itens.armadura);
	printf("--|DEFESA: %i\n",personagem.itens.defesa);
	printf("--|TIPO ARMADURA: %c\n",personagem.itens.tipo_armadura);
	printf("--|TIPO ARMA: %c\n",personagem.itens.tipo_arma);
	printf("--|ARMA: %s\n",personagem.itens.arma);
	printf("--|DANO: %i\n",personagem.itens.dano);
	printf("--|BFG9000 DANO: %i\n",personagem.itens.BFG9000);
	printf("--|BFG9000 CARGA:%i\n",personagem.itens.carga);

}



//FUNÇÃO PREMIAÇÃO 1
//ESTOU USANDO PONTEIROS E TRABALHANDO COM A INVOCAÇÃO DA STRUCT, NÃO PERDEMOS PONTO NISSO
void Premiacao1(int *nivel,int *pv, int *pvtotal, int *forca, int *constituicao, int *agilidade, int *destreza, int *dano) {

	srand(time(NULL));
	int dado1l6=(rand()%6)+1;
	int dado2l6=(rand()%6)+1;
	int dado3l6=(rand()%6)+1;
	int dado1l12=(rand()%12)+1;
	int dado1l4=(rand()%4)+1;
	personagem.nivel=personagem.nivel+1;
	srand(time(NULL));
	int soma=0;


	printf("Parabens,voce mudou de nivel. Nivel atual: %i ",personagem.nivel);
	printf("Voce possui 5 pontos disponiveis para gastar.");
	system("pause");
	system("cls");
	int ponto=5;
	int retirada=0;
	int comando=0;

	while(ponto!=0 && ponto>0) {
		system("pause");
		system("cls");
		printf("Voce ainda possui %i pontos para gastar\n",ponto);

		printf("1-FORCA: %i\n",*forca);
		printf("2-CONSTITUICAO: %i\n",*constituicao);
		printf("3-AGILIDADE: %i\n",*agilidade);
		printf("4-DESTREZA: %i,\n",*destreza);
		printf("ESCOLHA UM ATRIBUTO:");
		scanf("%i",&comando);

		switch(comando) {

			case 1:
				printf("DIGITE O QUANTO GOSTARIA DE ATRIBUIR:");
				scanf("%i",&retirada);
				if(retirada<=ponto && retirada>=0) {
					ponto=ponto-retirada;
					(*forca)=(*forca)+retirada;
				}

				else printf("ERROR, PONTOS INVALIDOS\n");
				break;


			case 2:
				printf("DIGITE O QUANTO GOSTARIA DE ATRIBUIR:");
				scanf("%i",&retirada);
				if(retirada<=ponto && retirada>=0) {
					ponto=ponto-retirada;
					(*constituicao)=(*constituicao)+retirada;

				} else printf("ERROR, PONTOS INVALIDOS\n");
				break;


			case 3:
				printf("DIGITE O QUANTO GOSTARIA DE ATRIBUIR:");
				scanf("%i",&retirada);
				if(retirada<=ponto && retirada>=0) {
					ponto=ponto-retirada;
					(*agilidade)=(*agilidade)+retirada;

				} else printf("ERROR, PONTOS INVALIDOS\n");
				break;


			case 4:
				printf("DIGITE O QUANTO GOSTARIA DE ATRIBUIR:");
				scanf("%i",&retirada);
				if(retirada<=ponto && retirada>=0) {
					ponto=ponto-retirada;
					(*destreza)=(*destreza)+retirada;

				} else printf("ERROR, PONTOS INVALIDOS\n");
				break;

		}
	}

	printf("Dentro do B-52 voce encontra uma bolsa contendo varios stimpaks e um armario contendo varias armas.\n");Sleep(300);
	printf("BOLSA DE STIMPAKS ADQUIRIDA, STIMPAKS RECARREGADOS\n");Sleep(300);
	printf("\nSUPER STIMPAK ADQUIRIDO\n");Sleep(300);
	printf("APERTE QUALQUER TECLA PARA APLICAR\n");Sleep(300);
	system("pause");
	soma=(*constituicao)+dado1l12;
	(*pv)=(*pv)+soma;
	(*pvtotal)=(*pv);
	printf("O SUPER STIMPAK TE FORNECEU %i DE VIDA A MAIS\n",soma);Sleep(300);
	printf("VIDA AUMENTADA PARA %i\n",personagem.pv);Sleep(300);

	printf("Richarlison: Porcaria, o armario do arsenal ta trancado. Vai demorar pelo menos uma eternidade ate encontrarmos a chave.\n");Sleep(300);
	printf("A menos eh claro que voce tenha alguma solucao.\n");Sleep(300);
	printf("-Aperter qualquer tecla para atirar na fechadura do armario\n");Sleep(300);
	system("pause");
	system("cls");
	printf("-A fechadura do arsenal foi destruida, lentamente a porta se abre deixando as armas ao alcance dos dois soldados\n");Sleep(300);
	printf("Richarlison: Eh...isso eu esqueci que isso tambem funciona\n");Sleep(300);
	printf("ESCOLHA UMA NOVA ARMA:\n");
	printf("1-LEVE: Pistola 10mm\n");
	printf("2-MEDIA: Fuzil de Assalto\n");
	printf("3-PESADA: Laser Gatling\n");
	printf("->");
	scanf("%i",&comando);

	switch(comando) {
		//Arma Pesada = 3 + d12 + 1,5*For.;
		//Arma media = 2 + d6 + d12 + (dest. + agil. + agil.)/3
		//o Arma Leve = 1 + d6 + d6 + d4 + Des.;
		case 1:

			printf("\nArma Leve Escolhida\n");
			strcpy(personagem.itens.arma,"Pistola 10mm");
			printf("NOME: %s\n",personagem.itens.arma);
			personagem.itens.tipo_arma='L';
			printf("TIPO: %c\n",personagem.itens.tipo_arma);
			soma= 0;
			dado1l6=(rand()%6)+1;
			dado2l6=(rand()%6)+1;
			dado1l4=(rand()%4)+1;
			soma= 1 + dado1l6 + dado2l6 + dado1l4 + (*destreza);
			(*dano)=(*dano)+soma;
			printf("DANO: %i\n",(*dano));
			break;



		case 2:

			printf("\nArma Media Escolhida\n");
			strcpy(personagem.itens.arma,"Fuzil de Assalto");
			printf("NOME: %s\n",personagem.itens.arma);
			personagem.itens.tipo_arma='M';
			printf("TIPO: %c\n",personagem.itens.tipo_arma);
			soma= 0;
			dado1l6=(rand()%6)+1;
			dado1l12=(rand()%12)+1;
			soma= 2 + dado1l6 + dado1l12 + ( (*destreza) + (*agilidade) + (*forca) )/3;
			(*dano)=(*dano)+soma;
			printf("DANO: %i\n",(*dano));
			break;

		case 3:

			printf("\nArma Pesada Escolhida\n");
			strcpy(personagem.itens.arma,"Laser Gatling");
			printf("NOME: %s\n",personagem.itens.arma);
			personagem.itens.tipo_arma='P';
			printf("TIPO: %c\n",personagem.itens.tipo_arma);
			soma= 0;
			int dado1l12=(rand()%12)+1;
			soma= 3 + dado1l12 + (1.5 * (*forca));

			(*dano)=(*dano)+soma;
			printf("DANO: %i\n",(*dano));

			break;
	}





	printf("\n\nESTA SATISFEITO COM O SEGUINTE PERSONAGEM \?:\n");
	printf("NOME:\t%s\n",personagem.nome);
	printf("NIVEL:\t%i\n",personagem.nivel);
	printf("PEFIL:\t%s\n",personagem.perfil);
	printf("ARMADURA:\t%i\n",personagem.itens.defesa);
	printf("PONTOS DE VIDA:\t%i\n",personagem.pv);
	personagem.pvtotal = personagem.pv;
	personagem.itens.defpadrao1=personagem.itens.defesa;
	personagem.itens.danopadrao=personagem.itens.dano;
	printf("ARMA:\t%s\n",personagem.itens.arma);
	printf("DANO:\t\t%i\n",personagem.itens.dano);
	printf("INTELIGENCIA:\t%i\n",personagem.inteligencia);
	printf("CARISMA:\t%i\n",personagem.carisma);
	printf("SORTE:\t\t%i\n",personagem.sorte);
	printf("PERCEPCAO:\t%i\n",personagem.percepcao);
	printf("FORCA:\t\t%i\n",personagem.forca);
	printf("AGILIDADE:\t%i\n",personagem.agilidade);
	printf("DESTREZA:\t%i\n",personagem.destreza);
	printf("CONTITUICAO:\t%i\n",personagem.constituicao);
	printf("SIM[1] NAO[0]\n");
	scanf("%i",&comando);
	if(comando==1) {
		system("pause");
		system("cls");
	}

	else if(comando==0) {
		printf("SINTO MUITO, AGORA JA ERA. NAO CRIEI ESSA PARTE DO CODIGO\n");
		system("pause");
		system("cls");
	}


}



// DETERMINAR A SOMA DE CADA ARMADURA MAIS FORTE QUE AS PRIMEIRAS, COLOCAR OS PONTEIROS E FAZER A HISTORINHA  !!!!!!!!!!!!!
void Premiacao2(int *nivel,int *pv, int *pvtotal, int *forca, int *constituicao, int *agilidade, int *destreza, int *dano) {

	srand(time(NULL));
	int dado1l6=(rand()%6)+1;
	int dado2l6=(rand()%6)+1;
	int dado3l6=(rand()%6)+1;
	int dado1l12=(rand()%12)+1;
	int dado1l4=(rand()%4)+1;
	personagem.nivel=personagem.nivel+2;
	srand(time(NULL));
	int soma=0;


	printf("Parabens, voce mudou de nivel. Nivel atual: %i ",personagem.nivel);
	printf("Voce possui 10 pontos disponiveis para gastar.");
	system("pause");
	system("cls");
	int ponto=10;
	int retirada=0;
	int comando=0;

	while(ponto!=0 && ponto>0) {
		system("pause");
		system("cls");
		printf("Voce ainda possui %i pontos para gastar\n",ponto);

		printf("1-FORCA: %i\n",*forca);
		printf("2-CONSTITUICAO: %i\n",*constituicao);
		printf("3-AGILIDADE: %i\n",*agilidade);
		printf("4-DESTREZA: %i,\n",*destreza);
		printf("ESCOLHA UM ATRIBUTO:");
		scanf("%i",&comando);

		switch(comando) {

			case 1:
				printf("DIGITE O QUANTO GOSTARIA DE ATRIBUIR:");
				scanf("%i",&retirada);
				if(retirada<=ponto && retirada>=0) {
					ponto=ponto-retirada;
					(*forca)=(*forca)+retirada;
				}

				else printf("ERROR, PONTOS INVALIDOS\n");
				break;


			case 2:
				printf("DIGITE O QUANTO GOSTARIA DE ATRIBUIR:");
				scanf("%i",&retirada);
				if(retirada<=ponto && retirada>=0) {
					ponto=ponto-retirada;
					(*constituicao)=(*constituicao)+retirada;

				} else printf("ERROR, PONTOS INVALIDOS\n");
				break;


			case 3:
				printf("DIGITE O QUANTO GOSTARIA DE ATRIBUIR:");
				scanf("%i",&retirada);
				if(retirada<=ponto && retirada>=0) {
					ponto=ponto-retirada;
					(*agilidade)=(*agilidade)+retirada;

				} else printf("ERROR, PONTOS INVALIDOS\n");
				break;


			case 4:
				printf("DIGITE O QUANTO GOSTARIA DE ATRIBUIR:");
				scanf("%i",&retirada);
				if(retirada<=ponto && retirada>=0) {
					ponto=ponto-retirada;
					(*destreza)=(*destreza)+retirada;

				} else printf("ERROR, PONTOS INVALIDOS\n");
				break;

		}
	}



	printf("\nSUPER STIMPAK ADQUIRIDO\n");
	printf("APERTE QUALQUER TECLA PARA APLICAR\n");
	system("pause");
	soma=(*constituicao)+dado1l12;
	(*pv)=(*pv)+soma;
	(*pvtotal)=(*pv);
	printf("O SUPER STIMPAK TE FORNECEU %i DE VIDA A MAIS\n",soma);
	printf("VIDA AUMENTADA PARA %i\n",personagem.pv);


	printf("\n\nPor fim, escolha o seu tipo de Armadura:\n");
	printf("1-LEVE: Uniforme Basico\n");
	printf("2-MEDIA: NCR Ranger\n");
	printf("3-PESADA: Traje Pretor\n");
	printf("->");
	scanf("%i",&comando);

	switch(comando) {
		//Armadura pesada = 1.5 * const. + 1.5 * forca
		//Armadura media = (1.5 * const.) + 1.5 * (forca + agilid.)/2
		//Armadura leve = 1.5 * const. + 1.5 * agilid.
		case 1:

			strcpy(personagem.itens.armadura,"Uniforme Basico");
			printf("\nArmadura escolhida:%s\n",personagem.itens.armadura);
			personagem.itens.tipo_armadura='L';
			printf("TIPO: %c\n",personagem.itens.tipo_armadura);
			soma=0;
			soma = (1.5*personagem.constituicao) + 1.5*personagem.agilidade;
			personagem.itens.defesa=personagem.itens.defesa+soma;
			printf("DEFESA: %i\n",personagem.itens.defesa);
			break;



		case 2:

			strcpy(personagem.itens.armadura,"NCR Ranger");
			printf("\nArmadura escolhida:%s\n",personagem.itens.armadura);
			personagem.itens.tipo_armadura='M';
			printf("TIPO: %c\n",personagem.itens.tipo_armadura);
			soma=0;
			soma = (1.5*personagem.constituicao) + 1.5*(personagem.forca+personagem.agilidade)/2;
			personagem.itens.defesa=personagem.itens.defesa+soma;
			printf("DEFESA:%i\n",personagem.itens.defesa);
			break;

		case 3:

			strcpy(personagem.itens.armadura,"Traje Pretor");
			printf("\nArmadura escolhida:%s\n",personagem.itens.armadura);
			personagem.itens.tipo_armadura='P';
			printf("TIPO: %c\n",personagem.itens.tipo_armadura);
			soma=0;
			soma = (1.5*personagem.constituicao) + (1.5*personagem.forca);
			personagem.itens.defesa=personagem.itens.defesa+soma;
			printf("DEFESA:%i\n",personagem.itens.defesa);
			break;


	}



	printf("\n\nESTA SATISFEITO COM O SEGUINTE PERSONAGEM \?:\n");
	printf("NOME:\t%s\n",personagem.nome);
	printf("NIVEL:\t%i\n",personagem.nivel);
	printf("PEFIL:\t%s\n",personagem.perfil);
	printf("ARMADURA:\t%i\n",personagem.itens.defesa);
	printf("PONTOS DE VIDA:\t%i\n",personagem.pv);
	personagem.pvtotal = personagem.pv;
	personagem.itens.defpadrao1=personagem.itens.defesa;
	printf("ARMA:\t%s\n",personagem.itens.arma);
	printf("DANO:\t\t%i\n",personagem.itens.dano);
	printf("INTELIGENCIA:\t%i\n",personagem.inteligencia);
	printf("CARISMA:\t%i\n",personagem.carisma);
	printf("SORTE:\t\t%i\n",personagem.sorte);
	printf("PERCEPCAO:\t%i\n",personagem.percepcao);
	printf("FORCA:\t\t%i\n",personagem.forca);
	printf("AGILIDADE:\t%i\n",personagem.agilidade);
	printf("DESTREZA:\t%i\n",personagem.destreza);
	printf("CONTITUICAO:\t%i\n",personagem.constituicao);
	printf("SIM[1] NAO[0]\n");
	scanf("%i",&comando);
	if(comando==1) {
		system("pause");
		system("cls");
	}

	else if(comando==0) {
		printf("NAO APRENDE MESMO NE IDIOTA? AGORA JA ERA");
		system("pause");
		system("cls");

	}
}


//TELA DE GAYME-OVER
void gameover() {
	printf("\n\n\n\n\n\n\n\n\n");
	printf("       \t\tXXXXXXXXXX   XXXXX   XXX      XXX  XXXXXXX   \n");
	printf("       \t\tXX          XX   XX  XX XX  XX XX  XX        \n");
	printf("       \t\tXX          XX   XX  XX   XX   XX  XX        \n");
	printf("       \t\tXX   XXXXX  XXXXXXX  XX        XX  XXXXX     \n");
	printf("       \t\tXX   XXXXX  XX   XX  XX        XX  XX        \n");
	printf("       \t\tXX      XX  XX   XX  XX        XX  XX        \n");
	printf("       \t\tXXXXXXXXXX  XX   XX  XX        XX  XXXXXXX   \n");
	printf("\n");
	printf("       \t\tXXXXXXXX   XX      XX   XXXXXXX  XXXXXXX      \n");
	printf("       \t\tXX    XX   XX      XX   XX       XX     XX     \n");
	printf("       \t\tXX    XX   XX      XX   XX       XX     XX    \n");
	printf("       \t\tXX    XX    XX    XX    XXXXX    XXXXXXXX     \n");
	printf("       \t\tXX    XX     XX  XX     XX       XX     XX    \n");
	printf("       \t\tXX    XX      XXXX      XX       XX      XX   \n");
	printf("       \t\tXXXXXXXX       XX       XXXXXXX  XX      XX   \n\n");
} 

void youwin() {
	
	printf("\n\n\n\n\n\n\n\n\n");
	printf("       \t\tXX  XX    XXXX    XX  XX            XX   XX   XXXX    XX  XX\n");
	printf("       \t\tXX  XX   XX  XX   XX  XX            XX   XX    XX     XXX XX\n");
	printf("       \t\tXX  XX   XX  XX   XX  XX            XX   XX    XX     XXXXXX\n");
	printf("       \t\t XXXX    XX  XX   XX  XX            XX X XX    XX     XXXXXX\n");
	printf("       \t\t  XX     XX  XX   XX  XX            XXXXXXX    XX     XX XXX\n");
	printf("       \t\t  XX     XX  XX   XX  XX            XXX XXX    XX     XX  XX\n");	
	printf("       \t\t  XX      XXXX     XXXX             XX   XX   XXXX    XX  XX\n\n");
	
	 
}
