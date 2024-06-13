# Você e sua equipe de programadores foram contratados para
# desenvolver um app de vendas para uma lanchonete. Você ficou com a parte de
# desenvolver a interface do cliente para retirada do produto.
# A lanchonete possui seguinte tabela de produtos listados comsua descrição,
# códigos e valores:
#
#       +--------------------------------------------------+
#       | Código |     Descrição           |   Valor(R$)   |
#       +--------+-------------------------+---------------+
#       |  100   |  Cachorro-Quente        |     09,00     |
#       |  101   |  Cachorro-Quente Duplo  |     11,00     |
#       |  102   |  X-Egg                  |     12,00     |
#       |  103   |  X-Salada               |     13,00     |
#       |  104   |  X-Bacon                |     14,00     |
#       |  105   |  X-Tudo                 |     17,00     |
#       |  200   |  Refrigerante Lata      |     05,00     |
#       |  201   |  Chá Gelado             |     04,00     |
#       +--------+-------------------------+---------------+
#
# Elabore um programa em Python que:
#   1. Entre com o código do produto desejado;
#   2. Pergunte se o cliente quer pedir mais alguma coisa (se sim repetir o passo item 2. Caso contrário ir para próximo passo);
#   3. Encerre a conta do cliente com o valor total;
#   4. Deve-se utilizar estruturas if, elif e else (EXIGÊNCIA 1 de 3);
#   5. Se a pessoa digitar um NÚMERO diferente dos da tabela printar na tela: "opção inválida" e voltar para o menu (EXIGÊNCIA 2 de 3);
#   6. Deve-se utilizar while, break, continue (EXIGÊNCIA 3 de 3);
#   7. Colocar um exemplo de SAIDA DE CONSOLE com dois pedidos
#   8. Colocar um exemplo de SAIDA DE CONSOLE com erro ao digitar no pedido

import carrega_cardapio

from models.Cardapio import Cardapio
from models.Pedido import Pedido


def main():
    cardapio = Cardapio()
    carrega_cardapio.run(cardapio)

    pedido = Pedido()

    print("Bem-vindo(a) à lanchonete do Vinicius Bautitz Tengaten!")

    while True:
        solicitar_pedido(cardapio, pedido)
        if continuar_pedido():
            continue
        else:
            break

    print(f"O total a ser pago é: R${pedido.get_total_pedido():05.2f}")


def continuar_pedido():
    while True:
        resposta = 0
        try:
            resposta = int(
                input("\nDeseja pedir mais alguma coisa?\n1 - Sim\n2 - Não\n\nR: ")
            )
            if resposta != 1 and resposta != 2:
                print("Responda 1 ou 2.")
                continue

            return True if resposta == 1 else False

        except:
            print("Responda 1 ou 2.")
            continue


def solicitar_pedido(cardapio, pedido):
    print("")
    imprime_tabela(converter_cardapio_tabela(cardapio))
    codigo_produto = 0
    produto = None
    while True:
        try:
            codigo_produto = int(input("Entre com o código desejado: "))
            produto = cardapio.get_produto_por_codigo(codigo_produto)
            if produto == None:
                print("Produto não encontrado.")
                continue
            break

        except:
            print("Código deve ser um número.")
            continue

    pedido.add_produto(produto)
    print(
        f"\nVocê pediu um {produto.get_descricao()} no valor de R${produto.get_valor():05.2f}!"
    )


def converter_cardapio_tabela(cardapio):
    tabela = [["Código", "Descrição", "Valor"]]

    for produto in cardapio.get_produtos():
        tabela.append(
            [
                f"{produto.get_codigo()}",
                produto.get_descricao(),
                f"R${produto.get_valor():05.2f}",
            ]
        )

    return tabela


def imprime_tabela(tabela):
    colunas_larguras = []
    espaco = 5

    for lin in range(len(tabela)):
        for col in range(len(tabela[lin])):
            if len(colunas_larguras) <= col:
                colunas_larguras.append(len(tabela[lin][col]))
            elif colunas_larguras[col] < len(tabela[lin][col]):
                colunas_larguras[col] = len(tabela[lin][col])

    linhas_formatadas = ""
    for lin in range(len(tabela)):
        for col in range(len(tabela[lin])):
            tamanho = colunas_larguras[col] - len(tabela[lin][col])
            celula = tabela[lin][col]
            if tamanho < 0:
                linhas_formatadas += f"{celula}{" "*espaco}"
            else:
                linhas_formatadas += f"{celula}{" "*tamanho}{" "*espaco}"
        linhas_formatadas += "\n"

    print(linhas_formatadas)


main()
