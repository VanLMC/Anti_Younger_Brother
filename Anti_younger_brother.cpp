#include<stdlib.h>
#include<stdio.h>

main(){
	int n=0;    // for stoping it "shutdown -a"
	FILE *arquivo;
	
	
	//======================= Ler ao iniciar ===============
	
	arquivo = fopen("C:\\Anti Younger Brother\\test.txt", "rt");
	if(arquivo == NULL ){
		
		printf("nao foi possivel abrir o arquivo");
		exit(0);
}
	fscanf(arquivo,"%d", &n);
	fclose(arquivo);

	if (n==1){	
		
		
		printf("Acesso nao autorizado!");
		system("shutdown -s -t 120");
		
	}
	
	
	else{
//=================== Escrever ====================
	arquivo = fopen("C:\\Anti Younger Brother\\test.txt", "wt");

	if(arquivo == NULL ){
		
		printf("nao foi possivel abrir o arquivo");
		exit(0);
}
	
	fprintf(arquivo,"1");
	fclose(arquivo); 
// ===================== LER ========================	
	arquivo = fopen("C:\\Anti Younger Brother\\test.txt", "rt");


	if(arquivo == NULL ){
		
		printf("nao foi possivel abrir o arquivo");
		exit(0);
}
	system("shutdown -s -t 7200");
	fscanf(arquivo,"%d", &n);
	fclose(arquivo);
	
	
}
}

