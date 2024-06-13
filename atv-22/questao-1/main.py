# Imagina-se que você é um dos programadores responsáveis pela construção
# de app de vendas para uma determinada empresa X que vende em atacado. Uma
# das estratégias de vendas dessa empresa X é dar desconto maiores por unidade
# conforme a tabela abaixo:
#
#   x------------------------------------x
#   |  Quantidades      |   Desconto     |
#   |------------------------------------|
#   | Até 9             | 0% na unidade  |
#   | Entre 10 e 99     | 5% na unidade  |
#   | Entre 100 e 999   | 10% na unidade |
#   | De 1000 para mais | 15% na unidade |
#   x------------------------------------x
#
# Elabore um programa em Python que:
#
# 1. Entre com o valor unitário do produto;
# 2. Entre com a quantidade desse produto;
# 3. O programa deve retornar o valor total sem desconto;
# 4. O programa deve retornar o valor total após o desconto;
# 5. Deve-se utilizar estruturas if, elif e else;
# 6. Colocar um exemplo de SAIDA DE CONSOLE de compra de mais de 10 und.

from Venda import Venda


def error_message_number(name):
    print(f"{name} deve ser um número e maior que 0.")


def main():
    valor_produto = 0
    qtde_produto = 0

    print("Bem-vindo a loja do Vinicius Bautitz Tengaten!\n")

    try:
        valor_produto = float(input("Entre com o valor do produto: "))
        if valor_produto < 0:
            error_message_number("Valor do produto")
            return

        qtde_produto = float(input("Entre com a quantidade do produto: "))
        if qtde_produto < 0:
            error_message_number("Quantidade do produto")
            return
    except ValueError:
        error_message_number("Valor ou Quantidade do produto")
        return

    venda = Venda(valor_produto, qtde_produto)

    print(f"\nO valor sem desconto foi: R${venda.get_total_bruto():.2f}")
    print(
        f"O valor com desconto foi: R${venda.get_total_liquido():.2f} - (desconto {venda.get_porcentagem_desconto() * 100}%)"
    )


main()
