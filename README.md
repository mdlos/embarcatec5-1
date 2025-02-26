<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=02A6F4&height=120&section=header"/>
<h1 align="center">Embarcatec | Temporizador Periódico (Semáforo)</h1>

<div align="center">  
  <img width=40% src="http://img.shields.io/static/v1?label=STATUS&message=DESENVOLVIDO&color=02A6F4&style=for-the-badge"/>
</div>

## 🗒️ Objetivo do Projeto

Este repositório contém o código desenvolvido para a atividade de temporização utilizando o microcontrolador Raspberry Pi Pico W para simular um semáforo. 
O objetivo é controlar três LEDs (vermelho, amarelo e verde) a cada 3 segundos, utilizando a função `add_repeating_timer_ms()` do Pico SDK.

Funcionalidades

- O semáforo inicia com o LED vermelho aceso.
- A cada 3 segundos, o semáforo muda de estado para amarelo e, em seguida, verde.
- O temporizador é configurado para 3 segundos de atraso entre as mudanças de estado dos LEDs.
- Mensagens serão enviadas via porta serial a cada 1 segundo (1.000 ms).
- A mudança de estado dos LEDs é controlada por uma função de call-back associada ao temporizador.

🗒️ Lista de requisitos

Neste projeto, você deverá utilizar os seguintes componentes conectados à placa BitDogLab:
- Raspberry Pi Pico W.
- 03 LEDs: vermelho, amarelo, verde.
- 03 Resistores de 330 Ω.
- Ambiente de Desenvolvimento: VS Code.
- Ferramenta de Simulação: Wokwi.
- Pico SDK.

## 🛠 Tecnologias

1. **Git e Github**;
2. **VScode**;
3. **Linguagem C**;
4. **Extensões no VScode do Raspberry Pi Pico Project e CMake**

## 💻 Instruções para Importar, Compilar e Rodar o Código Localmente

Siga os passos abaixo para clonar o repositório, importar no VS Code usando a extensão do **Raspberry Pi Pico Project**, compilar e executar o código.

1. **Clone o repositório para sua máquina local**Abra o terminal e execute os comandos abaixo:
   ```bash
   git clone https://github.com/usuario/projeto.git
   cd projeto

   ```
2. **Abra o VS Code e instale a extensão "Raspberry Pi Pico Project" (caso não já a tenha instalada)**

- No VS Code, vá até "Extensões" (Ctrl+Shift+X)
- Pesquise por "Raspberry Pi Pico Project"
- Instale a extensão oficial

4. **Compile o projeto**
5. **Rode o código no Raspberry Pi Pico**

- Conecte o Raspberry Pi Pico ao PC segurando o botão "BOOTSEL".
- Arraste e solte o arquivo `.uf2`, localizado dentro da pasta "build" do seu projeto, gerado na unidade USB montada.
- O código será carregado automaticamente e o Pico será reiniciado.

## 💻 Desenvolvedor

<table>
  <tr>
    <td align="center"><img style="" src="https://avatars.githubusercontent.com/u/72825281?v=4" width="100px;" alt=""/><br /><sub><b> Marcio Fonseca </b></sub></a><br />👨‍💻</a></td>
  </tr>
</table>

</div>
