# Organizando seus programas com funções

Até aqui temos visto programas que concentram toda a sua lógica dentro da função `main()`. Mas não é assim na vida real. Os programas costumam ser muito mais longos.

Por isso, em programas com milhares ou milhões de linhas de códigos, se torna impraticável colocar tudo dentro da função principal. Isto porque, levaria muito tempo só para encontrar o trecho de código que se desejaria modificar.

Este é o primeiro de três capítulos onde iremos aprender algumas maneiras de organizar nosso código em seções por meio de várias funções. Isto o tornará mais fácil de ler e manter.

Quanto mais organizarmos nosso código para que ele contenha várias funções, cada uma com tarefas específicas, mais ele se tornará fácil de ler e de manter, facilitando o foco das mudanças apenas nas partes relevantes.

## Sobre a modularização ao programar em C

Quando a linguagem C foi criada, o paradigma de programação dominante na indústria era o **estruturado**. Em linhas gerais, esse paradigma preconiza a criação de programas complexos por meio da criação e execução de funções menores, cada qual responsável por tarefas específicas.

Portanto, ao programarmos em C, somos forçados a pensar em nossos programas de forma modularizada, procurando dividi-lo em pequenas funções que, em conjunto, cumprem o conjunto de requisitos especificados no início do projeto.

Como boa prática, não devemos utilizar a função principal, `main()` para fazer tudo. Na verdade, nela nós devemos apenas, majoritariamente, chamar outras funções. Ela age quase como um *table of contents* para as funcionalidades do programa. Com a documentação certa (comentários), é possível saber exatamente quais funções devem ser alteradas.

Via de regra, cada função deve compor uma parte específica do todo e ser responsável por uma **única** tarefa.

Quão grande deve ser uma função? Uma boa regra é escrever funções que possam ser lidas sem precisar *scrollar* para chegar até o fim, isto é, possíveis de ser lidas totalmente em uma única tela. Assim como em textos normais, capítulos mais curtos são mais fáceis de ser entendidos, funções curtas são mais legíveis.

Importante notar que uma função também pode chamar outras funções, ou seja, isto não é uma prerrogativa exclusiva da função `main()`.

A modularização de código é essencial para a existência de um sistema complexo e ao mesmo tempo simples de ser mantido. Tendo componentes bem separados e estruturados, as modificações se tornam bem pontuais e não afetarão demasiadamente o funcionamento das demais partes do sistema.

## Variáveis Locais e Globais

Até aqui as variáveis que trabalhamos foram **locais**, isto é, existem apenas enquanto a função estiver sendo executada. Elas são mais seguras do que as globais, que existem ao longo de toda a execução do programa, porque caso elas sejam necessárias em outra função elas podem ser passadas por um processo que aprenderemos no próximo capítulo.

Para definir uma **variável global**, basta declará-la antes de declarar a função. Para definir uma **variável local**, basta declará-la dentro do bloco de execução da função.

Vamos a este [exemplo](./sample1.c) para ver na prática como declarar os dois tipos de variáveis discutidos aqui.

Podemos ver no exemplo que `g1` e `g2` são as variáveis globais e `l1` e `l2` são as locais.

Perceba que `g1` é acessível a todas as funções do programa, porém `g2` apenas do ponto onde foi definida para baixo, isto é, somente `prAgain()`. Como boa prática, devemos usar variáveis globais em último caso, e nestas situações, é melhor defini-las antes da função principal para facilitar sua localização principalmente em sessões de depuração (debugging).
