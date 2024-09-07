# Simulação de Semáfaro

Este projeto simula o funcionamento de um semáforo usando um LED RGB e um microcontrolador, como o ESP32. O código controla o LED para alternar entre as cores vermelho, verde e amarelo, imitando o comportamento de um semáforo real, e exibe mensagens no monitor serial para indicar cada mudança de cor.

https://github.com/user-attachments/assets/1f667235-abc1-484f-90ae-bcf972126c07


## Descrição do Código

### Função setup()

1. **Inicialização das Cores**:
   - Define o LED RGB para a cor vermelha (R = 255, G = 0, B = 0).
   - Exibe a mensagem "Sinal está Vermelho!" no monitor serial.
   - Aciona a função neopixelWrite para definir a cor do LED.
   - Aguarda 6 segundos (delay(6000)).

### Função loop()

1. **Transição de Vermelho para Verde**:
   - Verifica se a cor atual é vermelha (R == 255 && G == 0).
   - Muda a cor para verde (R = 0, G = 255).
   - Exibe a mensagem "Sinal ficou Verde!" no monitor serial.
   - Aguarda 6 segundos.

2. **Transição de Verde para Amarelo**:
   - Verifica se a cor atual é verde (R == 0 && G == 255).
   - Muda a cor para amarelo (R = 255).
   - Exibe a mensagem "Sinal ficou Amarelo!" no monitor serial.
   - Aguarda 6 segundos.

3. **Transição de Amarelo para Vermelho**:
   - Verifica se a cor atual é amarelo (R == 255 && G == 255).
   - Muda a cor para vermelha (G = 0).
   - Exibe a mensagem "Sinal ficou Vermelho!" no monitor serial.
   - Aguarda 6 segundos.

## Dependências

- neopixelWrite: Função para definir a cor do LED. Certifique-se de que a biblioteca necessária para essa função esteja incluída em seu projeto.

## Uso

1. Conecte o LED RGB ao pino definido por RGB_BUILTIN no microcontrolador.
2. Compile e carregue o código no microcontrolador.
3. Observe as transições de cores no LED e as mensagens no monitor serial.



## Contribuições

Sinta-se à vontade para fazer pull requests ou abrir issues para melhorias e correções.
