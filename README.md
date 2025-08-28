# Structured_War_Game

This repository serves as a record of activities developed during my collegiate Data Structures course. It features one
of the key challenges proposed during the semester, with a detailed description of its stages outlined below.

## Building the territories

The mission is to build a database of territories using a composite data structure.

### What will you do?

Create a struct called Territory that will store information such as name, army color, and number of troops. The system
will allow the registration of 5 territories and display the data right after filling it out.

### Functional requirements

See the steps to create and manipulate a structure that represents territories in a simple system.

    Struct Creation: define a struct called Territory with the fields char name[30], char cor[10], and int tropas.

    Territory Registration: the system must allow the user to register five territories by informing the name, army color, and the number of troops for each one.

    Data Display: the system must display the information of all registered territories after registration.

### Non-functional requirements

Also include the following criteria to have functional, efficient, and easy-to-understand code:

    Usability: the input interface must be simple and clear, with messages that guide the user on what to type.

    Performance: the system must present the data right after registration, with a response time of less than 2 seconds.

    Documentation: the code must contain explanatory comments about the creation of the struct, data entry, and display.

    Maintainability: the names of variables and functions must be clear and representative, making the code easy to read and maintain.

## Interactivity in structured WAR

Now, you will take a big step in the development of the structured War, adding the functionality of attacking between
territories. Keep practicing and preparing for the final challenge!

### What will you do?

First, you will be given the mission to implement the attack functionality between territories. Based on the already
registered territories, the system should allow a player to select one territory as an attacker and another as a
defender. The attack will be resolved through a simulation with random data (like dice rolls), and the result will
change the control and troops of the attacked territory.

Remember: this stage should use pointers to manipulate the territory data and dynamic memory allocation to store the
registered territories, providing greater flexibility to the system.

### Functional requirements

See the essential functionalities for implementing a battle simulation between territories.

    Dynamic allocation of territories: use calloc or malloc to allocate memory for a vector of the Territory struct with a size informed by the user.

    Attack simulation: create a function void attack(Territory* attacker, Territory* defender) that simulates an attack, using random numbers as if they were battle dice.

    Data update: the defending territory must change owner (army color) if the attacker wins, and its troops must be updated.

    Post-attack display: the system must display the updated data of the territories after each attack.

### Non-functional requirements

The implementation must follow good practices of organization, efficient memory use, and clear user interaction. Follow
along!

    Modularization: the code must be organized with distinct functions for registration, display, attack, and memory release.

    Use of pointers: all access and modifications to territory data must be done by pointers.

    Memory management: all dynamically allocated memory must be freed at the end of the program using free.

    User-friendly interface: the terminal must guide the player on which territories can be used to attack and defend, with clear messages.

---

# Jogo_War_Estruturado

Este repositório serve como um registro das atividades desenvolvidas durante o meu curso de Estrutura de Dados na
faculdade. Ele apresenta um dos principais desafios propostos durante o semestre, com uma descrição detalhada de suas
etapas logo abaixo.

## Construção dos territórios

Sua missão é construir uma base de dados de territórios utilizando uma estrutura de dados composta.

### O que você vai fazer?

Criar uma struct chamada Territorio que armazenará informações como nome, cor do exército e quantidade de tropas. O
sistema permitirá o cadastro de 5 territórios e exibirá seus dados logo após o preenchimento.

### Requisitos funcionais

Veja os passos para criar e manipular uma estrutura que representa territórios em um sistema simples.

    Criação da struct: definir uma struct chamada Territorio com os campos char nome[30], char cor[10] e int tropas.
     
    Cadastro dos territórios: o sistema deve permitir que o usuário cadastre cinco territórios informando o nome, cor do exército e o número de tropas de cada um.
     
    Exibição dos dados: o sistema deve exibir as informações de todos os territórios registrados após o cadastro.

### Requisitos não funcionais

Inclua também os seguintes critérios para ter um código funcional, eficiente e fácil de entender:

    Usabilidade: a interface de entrada deve ser simples e clara, com mensagens que orientem o usuário sobre o que digitar.
     
    Desempenho: o sistema deve apresentar os dados logo após o cadastro, com tempo de resposta inferior a 2 segundos.
     
    Documentação: o código deve conter comentários explicativos sobre a criação da struct, entrada e exibição de dados.
     
    Manutenibilidade: os nomes das variáveis e funções devem ser claros e representativos, facilitando a leitura e manutenção do código.

## Interatividade no WAR estruturado

Agora, você dará um grande passo no desenvolvimento do War estruturado, adicionando a funcionalidade de ataque entre os
territórios. Continue praticando e se preparando para o desafio final!

### O que você vai fazer?

Primeiro, você receberá a missão de implementar a funcionalidade de ataque entre territórios. Com base nos territórios
já cadastrados, o sistema deverá permitir que um jogador selecione um território como atacante, e outro como defensor. O
ataque será resolvido por meio de uma simulação com dados aleatórios (como rolagem de dados), e o resultado alterará o
controle e as tropas do território atacado.

Lembre-se: essa etapa deve utilizar ponteiros para manipular os dados dos territórios e a alocação dinâmica de memória
para armazenar os territórios cadastrados, fornecendo maior flexibilidade ao sistema.

### Requisitos funcionais

Veja as funcionalidades essenciais para a implementação de uma simulação de batalha entre territórios.

    Alocação dinâmica de territórios: utilizar calloc ou malloc para alocar memória para um vetor de struct Territorio com tamanho informado pelo usuário.
     
    Simulação de ataques: criar uma função void atacar(Territorio* atacante, Territorio* defensor) que simula um ataque, utilizando números aleatórios como se fossem dados de batalha.
     
    Atualização de dados: o território defensor deve mudar de dono (cor do exército) se o atacante vencer, e suas tropas devem ser atualizadas.
     
    Exibição pós-ataque: o sistema deve exibir os dados atualizados dos territórios após cada ataque.

### Requisitos não funcionais

A implementação deve seguir boas práticas de organização, uso eficiente da memória e interação clara com o usuário.
Acompanhe!

    Modularização: o código deve estar organizado com funções distintas para cadastro, exibição, ataque e liberação de memória.
     
    Uso de ponteiros: todos os acessos e modificações aos dados dos territórios devem ser feitos por ponteiros.
     
    Gerenciamento de memória: toda memória alocada dinamicamente deve ser liberada ao final do programa utilizando free.
     
    Interface amigável: o terminal deve orientar o jogador sobre quais territórios podem ser usados para atacar e defender, com mensagens claras.