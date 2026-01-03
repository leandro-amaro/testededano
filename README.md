# 🎲 D20 Combat Logic

Este é um projeto desenvolvido em **C** para simular a lógica de cálculo de dano de um RPG de mesa/digital. O objetivo foi praticar a estruturação de código, uso de funções e manipulação de aleatoriedade (RNG).

## ⚔️ Funcionalidades Implementadas

O sistema simula um turno de ataque com as seguintes regras:

- **Rolagem de Dados (RNG):** Utiliza a biblioteca `time.h` para gerar números pseudoaleatórios simulando um dado de 20 faces (D20).
- **Sistema de Crítico:** Se o dado tirar **20**, o ataque base é dobrado.
- **Bônus de Sorte:** Se o dado não for crítico, o valor do dado é somado ao ataque.
- **Cálculo de Dano Real:** O dano final é a subtração entre o Ataque Total e a Defesa do inimigo.
- **Validação:** Impede que o dano seja negativo (se a defesa for maior que o ataque, o dano é 0).

## 🛠️ Tecnologias e Conceitos

* **Linguagem C** (Padrão ANSI/ISO)
* **Estruturas Condicionais:** `if/else` para lógica de crítico e mitigação de dano.
* **Modularização:** Uso de funções separadas (`calcularDano`, `rolarDado`) para manter o código limpo.
* **Loops:** `for` para testes de consistência do gerador de números.

## 💻 Exemplo de Lógica

Abaixo, um trecho de como o sistema decide se o jogador causou um dano crítico ou apenas recebeu um bônus:

```c
// O 'sorte' é o resultado do D20
if (sorte == 20) {
    printf("[CRÍTICO!] Dano dobrado pela sorte máxima!");
    ataque *= 2; // Multiplica o ataque base
} else {
    ataque += sorte; // Apenas soma o valor do dado
}
```

## 📦 Como Compilar e Rodar

Certifique-se de ter um compilador C (como GCC) instalado.

1. Clone o repositório.
2. No terminal, compile o arquivo:
   ```bash
   gcc main.c -o combate
   ```
3. Execute o programa:
   ```bash
   ./combate
   ```

---
<p align="center">
  Desenvolvido por <strong>Leandro</strong> como prática de Algoritmos e Lógica.
</p>
