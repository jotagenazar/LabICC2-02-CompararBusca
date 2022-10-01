<p align="center">
  <img src="https://user-images.githubusercontent.com/106783009/191138556-b0ec92fb-8eb0-4151-b109-d5ca961b5c3c.png" />
</p>
Aluno: João Gabriel Manfré Nazar (13733652)

# LabICC2 - Trabalho 2 - Onde está Wall-e - Comparação entre Busca Binária e Busca Sequencial
&ensp;Esse trabalho tem como intuito explorar a diferença de demanda computacional e tempo de execução entre um algoritmo de busca sequêncial e um algoritmo de busca binária. A ordenação dos vetores foi feita por meio do algoritmo de ordenação qsort.


## Implementação da Busca Sequencial (iterativa)

![image](https://user-images.githubusercontent.com/106783009/193417223-cc35d17c-1b9c-49c6-bb79-480390403e05.png)


## Implementação da Busca Binária (recursiva)

![image](https://user-images.githubusercontent.com/106783009/193417200-54907d91-7b30-40c4-b2a8-8d18cc99129f.png)


## Casos de teste
&ensp;Os casos de teste de entrada podem ser encontrados na pasta input. A entrada consiste no tamanho do vetor que vai ser buscado, seguida por cada elemento do vetor. Depois, é inserida a quantidade de consultas a serem realizadas, e então cada consulta. As saídas do programa estão nas respectivas pastas para cada algoritmo. 

![image](https://user-images.githubusercontent.com/106783009/193417475-b529ce0f-06fd-499d-ad06-871793377d40.png)


## Comparação dos Tempos de Execução
&ensp;O computador utilizado para os testes foi um notebook Dell G15 5510, com um processador Intel Core i5-10500H, funcionando à bateria com Eficiência Agressiva selecionado como opção de modo de aumento de desempenho do processador nas opções de energia do Windows 10 Pro 21H2. O computador possui 24GB de Memória RAM.

### Busca Sequencial

![image](https://user-images.githubusercontent.com/106783009/193417335-ed658f3a-1f1f-444c-a641-acea11ab239c.png)

### Busca Binária

![image](https://user-images.githubusercontent.com/106783009/193417357-937aebcb-4c36-4e75-b307-05971640f900.png)


## Considerações
&ensp;Por meio dos tempos de execução, é possível perceber que o algoritmo de busca binária teve maior eficiência computacional para todos os casos de teste. Assim, cria-se a noção de que, excluindo alguns possíveis casos específicos, a busca binária costuma garantir um tempo de execução menor do que o da busca sequencial.
