# Passando variáveis para funções

Este capítulo se dedica a mostrar como passar variáveis locais de uma função para outra.

## Passando argumentos

Quando uma variável passa de uma função para outra dizemos que estamos **passando um argumento**. A função destino, por sua vez, está **recebendo um parâmetro**.

## Métodos para passar argumentos

É possível passar argumentos de duas maneiras:

1. Pelo valor

2. Pelo endereço

Também é possível fazer o caminho contrário, isto é, uma função em execução também pode receber parâmetros de outras funções (o que veremos no próximo capítulo).

Os argumentos são colocados dentro dos parênteses, que até aqui, ficavam vazios. No caso, eles devem estar dentro dos parênteses da função origem e quando forem chamados na função destino.

### Passando por valor (ou por cópia)

Esse método pode ser chamado de *passing by value* ou *passing by copy*. Na prática, significa que o **valor armazenado** na variável da função origem é passado para a função destino, e não a variável em si.

Vejamos o [exemplo](./sample1.c) para entender na prática como funciona.

Como vemos, ao passar uma variável como argumento, sempre será necessário especificar o seu tipo.

Vemos também que o valor da variável `i` é passado para a função `half(int i)`, mas ele em si não se altera, pois o que vai na função é **uma cópia do seu valor**.

Esse método é considerado seguro exatamente por isso: ele não altera o valor da variável original, mas sim uma cópia dele.

A linguagem C usa esse método para todas as variáveis que não são arrays.

### Passando por endereço (Pass By Reference)

Quando passamos um array para outra função, isto ocorre usando o método **by address**. Na prática, em vez de ser passada uma cópia do valor, é passado o endereço de memória onde o array está armazenado.

Isto significa que se a função destino modificar algum valor do array recebido, esse valor também é modificado para a função origem.

Vamos observar este [exemplo](./sample2.c) para aprendermos melhor.

Também é possível passar variáveis que não são arrays por endereço, vejamos neste outro [exemplo](./sample3.c).

Como vimos, para isto precisamos usar o *address of operator* `&` e o *dereferencing operator* `*` antes da variável **aonde quer que ela apareça** na função origem. Na prática, passamos como argumento o **endereço de memória** da variável e ela é recebida por uma **pointer** que é o tipo adequado para armazenar endereços de memória.

Qualquer operação que envolva o valor que está sendo recebido como parâmetro deve ser escrito usando o *dereferencing operator* na função auxiliar.

Isto nos ajuda a entender melhor o que fazemos com a função `scanf()` ao passarmos como segundo argumento, para variáveis não arrays, o `&` seguido do nome da variável. Na prática, estamos atribuindo o valor digitado no endereço de memória daquela variável, atribuindo a ela própria aquele valor.

Vamos a um último [exemplo](./sample4.c) em que vemos as duas formas combinadas de passar variáveis de uma função a outra.

## Concluindo

No próximo capítulo veremos como retornar um valor de uma função para a outra e vamos entender o real uso da biblioteca `stdio.h`.
