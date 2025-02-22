# 🏆 DESAFIO SUPER TRUNFO - PAISES - CADASTRO DE CARTAS
Bem vindo ao meu repositório do Desafio Super Trunfo, aqui terá dos 3 níveis propostos no tema 1 da matéria: Introdução à Programação de Computadores.

## 🎮 Nível Novato
Neste primeiro nível, meu objetivo foi construir a base do nosso jogo Super Trunfo de Países: um sistema para cadastrar as cartas com informações sobre as cidades. 
Foi um nível bem básico, apenas para o uso de printf e scanf para exibir e colotar os dados para armanezar nas seguintes váriaveis:
- Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
- Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
- Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
- População: O número de habitantes da cidade. Tipo: int
 
- Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
- PIB: O Produto Interno Bruto da cidade. Tipo: float
 
- Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

## 🎮 Nível Aventureiro
Aprimorei o meu programa em C que criei no nível novato. O programa continuou lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. 
A diferença é que, agora, meu programa também deve:

- Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
- Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
- Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.

## 🎮 Nível Mestre
Nesse nível meu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, assim como nos níveis anteriores, mas com uma mudança importante: a população agora deve ser armazenada como unsigned long int para acomodar números maiores. 
As demais informações permanecem com os mesmos tipos. Após a leitura dos dados, meu programa deverá:

- Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcular e armazenar esses valores.
 
- Calcular o Super Poder: Para cada carta, calcular o "Super Poder" somando todos os atributos numéricos 
(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder").
Armazenar o Super Poder como float.
 
- Comparar as Cartas: Comparar as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. 
Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
 
- Exibir os Resultados das Comparações: Para cada atributo, imprimir na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação 
(1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
