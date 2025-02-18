
Turn-in directory : ex01/
Files to turn in : Makefile, *.cpp, *.{h, hpp}
Forbidden functions : None

Bem-vindo aos anos 80 e à sua tecnologia inacreditável! Escreva um programa que se comporte
como um software de lista telefônica incrível e horrível.
Você tem que implementar duas classes:

• Agenda telefônica
◦ Possui uma variedade de contatos.
◦ Pode armazenar no máximo 8 contatos. Se o usuário tentar adicionar um nono contato,
substitua o mais antigo pelo novo.
◦ Observe que a alocação dinâmica é proibida.

• Contato
◦ Significa um contato da agenda telefônica.
No seu código, a lista telefônica deve ser instanciada como uma instância da lista telefônica
aula. A mesma coisa para os contatos. Cada um deles deve ser instanciado como uma instância
da classe Contato. Você é livre para criar as classes como quiser, mas lembre-se de que
qualquer coisa que sempre será usada dentro de uma classe é privada, e qualquer coisa que possa ser
usado fora de uma classe é público.

Não se esqueça de assistir aos vídeos da intranet

Namespaces, classes, funções de membro, fluxos stdio,
listas de inicialização, static, const e algumas outras coisas básicas
Na inicialização do programa, *a agenda está vazia e o usuário é solicitado a inserir uma
de três comandos. 

	O programa aceita apenas ADD, SEARCH e EXIT.



• ADICIONAR:
salve um novo contato
◦ Se o usuário inserir este comando, ele será solicitado a inserir as informações
do novo contato, um campo por vez. Depois que todos os campos estiverem preenchidos,
adicione o contato à lista telefônica.
◦ Os campos de contato são: nome, sobrenome, apelido, número de telefone e
segredo mais obscuro. Um contato salvo não pode ter campos vazios.

• PESQUISA:
exibe um contato específico
◦ Exiba os contatos salvos como uma lista de 4 colunas: índice, nome, sobrenome
nome e apelido.
◦ Cada coluna deve ter 10 caracteres de largura. Um caractere vertical ('|') separa
eles. O texto deve estar alinhado à direita. Se o texto for maior que a coluna,
ele deve ser truncado e o último caractere exibível deve ser substituído por um
ponto ('.').
◦ Em seguida, solicite novamente ao usuário o índice da entrada a ser exibido. Se o índice
está fora do intervalo ou errado, defina um comportamento relevante. Caso contrário, exiba o
informações de contato, um campo por linha.

• SAÍDA
◦ O programa é encerrado e os contatos são perdidos para sempre!
• Qualquer outra entrada é descartada.
Depois que um comando for executado corretamente, o programa aguarda outro. Isto
para quando o usuário digita EXIT.

Dê um nome relevante ao seu executável.

http://www.cplusplus.com/reference/string/st
