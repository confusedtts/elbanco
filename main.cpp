#include <iostream>
#include "Cliente.h"
#include "ContaBancaria.h"
using namespace std;

int main() {
    // Criação dos clientes
    Cliente cliente1("Ana", "111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");

    // Criação das contas bancárias com saldos iniciais
    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2);
    ContaBancaria conta3(1003, cliente3);

    // Exibe o saldo inicial da conta de Ana
    conta1.exibirSaldo();

    // Ana transfere R$200 para Bruno
    conta1.transferir(200.0, conta2);

    // Ana transfere R$300 divididos entre Bruno e Carla
    conta1.transferir(300.0, conta2, conta3);

    // Exibição dos saldos finais
    cout << endl;
    conta1.exibirInformacoes();
    conta2.exibirInformacoes();
    conta3.exibirInformacoes();

    return 0;
}


//                             ...,?77??!~~~~!???77?<~.... 
//                        ..?7`                           `7!.. 
//                    .,=`          ..~7^`   I                  ?1. 
//       ........  ..^            ?`  ..?7!1 .               ...??7 
//      .        .7`        .,777.. .I.    . .!          .,7! 
//      ..     .?         .^      .l   ?i. . .`       .,^ 
//       b    .!        .= .?7???7~.     .>r .      .= 
//       .,.?4         , .^         1        `     4... 
//        J   ^         ,            5       `         ?<. 
//       .%.7;         .`     .,     .;                   .=. 
//       .+^ .,       .%      MML     F       .,             ?, 
//        P   ,,      J      .MMN     F        6               4. 
//        l    d,    ,       .MMM!   .t        ..               ,, 
//        ,    JMa..`         MMM`   .         .!                .; 
//         r   .M#            .M#   .%  .      .~                 ., 
//       dMMMNJ..!                 .P7!  .>    .         .         ,, 
//       .WMMMMMm  ?^..       ..,?! ..    ..   ,  Z7`        `?^..  ,, 
//          ?THB3       ?77?!        .Yr  .   .!   ?,              ?^C 
//            ?,                   .,^.` .%  .^      5. 
//              7,          .....?7     .^  ,`        ?. 
//                `<.                 .= .`'           1 
//                ....dn... ... ...,7..J=!7,           ., 
//             ..=     G.,7  ..,o..  .?    J.           F 
//           .J.  .^ ,,,t  ,^        ?^.  .^  `?~.      F 
//          r %J. $    5r J             ,r.1      .=.  .% 
//          r .77=?4.    ``,     l ., 1  .. <.       4., 
//          .$..    .X..   .n..  ., J. r .`  J.       `' 
//        .?`  .5        `` .%   .% .' L.'    t 
//        ,. ..1JL          .,   J .$.?`      . 
//                1.          .=` ` .J7??7<.. .; 
//                 JS..    ..^      L        7.: 
//                   `> ..       J.  4. 
//                    +   r `t   r ~=..G. 
//                    =   $  ,.  J 
//                    2   r   t  .; 
//              .,7!  r   t`7~..  j.. 
//              j   7~L...$=.?7r   r ;?1. 
//               8.      .=    j ..,^   .. 
//              r        G              . 
//            .,7,        j,           .>=. 
//         .J??,  `T....... %             .. 
//      ..^     <.  ~.    ,.             .D 
//    .?`        1   L     .7.........?Ti..l 
//   ,`           L  .    .%    .`!       `j, 
// .^             .  ..   .`   .^  .?7!?7+. 1 
//.`              .  .`..`7.  .^  ,`      .i.; 
//.7<..........~<<3?7!`    4. r  `          G% 
//                          J.` .!           % 
//                            JiJ           .` 
//                              .1.         J 
//                                 ?1.     .'         
//                                     7<..%             sog