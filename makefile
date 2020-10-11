all: run clear

run:
	@echo "Inicializando programa..."
	g++ URI1037.cpp && ./a.out

clear: 
	@echo "Deletando arquivos temporários..."
	rm -rf ./a.out