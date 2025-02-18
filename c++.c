
Compilando
• Compile seu código com c++ e os sinalizadores -Wall -Wextra -Werror
• Seu código ainda deverá ser compilado se você adicionar o sinalizador -std=c++98
Convenções de formatação e nomenclatura
• Os diretórios de exercícios serão nomeados desta forma: ex00, ex01, ... , exn
• Nomeie seus arquivos, classes, funções, funções de membro e atributos conforme exigido em
as diretrizes.
• Escreva nomes de classes no formato UpperCamelCase. Arquivos contendo código de classe serão
sempre ser nomeado de acordo com o nome da classe. Por exemplo:
ClassName.hpp/ClassName.h, ClassName.cpp ou ClassName.tpp. Então, se você
tem um arquivo de cabeçalho contendo a definição de uma classe "BrickWall" que representa um
parede de tijolos, seu nome será BrickWall.hpp.
• A menos que especificado de outra forma, todas as mensagens de saída devem ser finalizadas com uma nova linha
caractere e exibido na saída padrão.
• Adeus Norminette! Nenhum estilo de codificação é imposto nos módulos C++. Você pode
siga o seu favorito. Mas tenha em mente que um código que seus pares avaliadores não conseguem
entender é um código que eles não podem avaliar. Faça o seu melhor para escrever um texto limpo e legível
código.
Permitido/Proibido
Você não está mais codificando em C. É hora de C++! Portanto:
• Você tem permissão para usar quase tudo da biblioteca padrão. Assim, em vez disso
de se ater ao que você já sabe, seria inteligente usar o máximo possível
as versões C++ das funções C com as quais você está acostumado.
• Entretanto, você não pode usar nenhuma outra biblioteca externa. Significa C++ 11 (e derivado
formulários) e bibliotecas Boost são proibidas. As seguintes funções são proibidas
também: *printf(), *alloc() e free(). Se você usá-los, sua nota será 0 e
é isso.


**************
**************

Observe que, a menos que seja explicitamente declarado o contrário, o namespace using <ns_name> e
palavras-chave de amigos são proibidas. Caso contrário, sua nota será -42.
• É permitido utilizar o STL somente nos Módulos 08 e 09. Isso significa:
sem contêineres (vetor/lista/mapa/e assim por diante) e sem algoritmos (qualquer coisa que
requer incluir o cabeçalho <algorithm>) até então. Caso contrário, sua nota será
ser -42.
Alguns requisitos de design
• O vazamento de memória também ocorre em C++. Quando você aloca memória (usando o novo
palavra-chave), você deve evitar vazamentos de memória.
• Do Módulo 02 ao Módulo 09, suas aulas devem ser planejadas no estilo Ortodoxo
Forma Canônica, exceto quando explicitamente indicado de outra forma.
• Qualquer implementação de função colocada em um arquivo de cabeçalho (exceto modelos de função)
significa 0 para o exercício.
• Você deve ser capaz de usar cada um dos seus cabeçalhos independentemente dos outros. Por isso,
eles devem incluir todas as dependências necessárias. No entanto, você deve evitar o
problema de dupla inclusão adicionando guardas de inclusão. Caso contrário, sua nota será
ser 0.
Leia-me
• Você pode adicionar alguns arquivos adicionais se precisar (ou seja, para dividir seu código). Como estes
as tarefas não são verificadas por um programa, sinta-se à vontade para fazê-lo, desde que entregue
os arquivos obrigatórios.
• Às vezes, as orientações de um exercício parecem curtas, mas os exemplos podem mostrar
requisitos que não estão explicitamente escritos nas instruções.
• Leia cada módulo completamente antes de começar! Realmente, faça isso.
• Por Odin, por Thor! Use seu cérebro!!!

****************
****************

Você terá que implementar muitas classes. Isso pode parecer tedioso,
a menos que você consiga criar o script do seu editor de texto favorito.


*****************
*****************

Você tem uma certa liberdade para completar os exercícios.
Porém, siga as regras obrigatórias e não seja preguiçoso. Você faria
perca muitas informações úteis! Não hesite em ler sobre
conceitos teóricos.



