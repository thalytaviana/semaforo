## Relato das conexões e montagem.

&nbsp;&nbsp;&nbsp;&nbsp;A montagem inicial foi realizada no TinkerCad utilizando um Arduino. Após a testagem bem-sucedida, todo o protótipo foi transferido para um protoboard físico, utilizando um ESP32.

&nbsp;&nbsp;&nbsp;&nbsp;Primeiramente, foi implementado os LEDs, conectando-os corretamente aos pinos de terra e às portas apropriadas para seguir com a programação. Com a montagem concluída, passamos para a lógica do código. O código começa acendendo o LED verde por 2 segundos, em seguida o apaga e acende o LED amarelo. Após 2 segundos, o LED vermelho começa a piscar junto com o amarelo por 3 segundos, indicando que o sinal está prestes a fechar, e em seguida fica somente o vermelho aceso por 3 segundos, totalizando os 6 segundos estipulados. Além disso, quando o LED vermelho está aceso, o buzzer começa a tocar, sinalizando que o farol está fechado.

<div align="center">

Tabela 1 - Componentes
|Componentes|	Quantidade|
|-|-
|Led vermelho | 1 | 
|Led amarelo | 1 |
|Led verde | 1 |
| Jumper M-F | 6 |
| Jumper M-M | 3 |
| ESP32 | 1 |
| Cabo USB-C | 1 |
| Resistores 330 Ohms | 1|
| Buzzer | 1

</div>

___

<div align="center">
<sub>Figura 1 - Montagem do semáforo </sub><br>
<img src="../assets/semaforo1.png" width="80%" ><br>
<sup>Fonte: Material produzido pelo autor (2024)</sup>
</div>

<div align="center">
<sub>Figura 2 - Montagem do semáforo </sub><br>
<img src="../assets/semaforo2.png" width="80%" ><br>
<sup>Fonte: Material produzido pelo autor (2024)</sup>
</div>

___ 


- Vídeo do funcionamento do semáforo : https://youtu.be/_JovdRXdNqI?si=K3SmqKqdyq6pHful