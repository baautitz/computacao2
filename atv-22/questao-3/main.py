# Imagina-se que você e sua equipe foram contratados por uma empresa
# de logística que acabou de entrar no ramo. Essa empresa trabalha com
# encomendas de pequeno e médio porte e opera somente entre 3 cidades.
# O valor que a empresa cobra por objeto é dado pela seguinte equação:
#
#                   total = dimensões * peso * rota
#
# Em que cada uma das variáveis que compõe o preço total é quantizada da seguinte
# maneira
#
#       Quadro 1: Dimensões versus Valor
#       +-------------------------------+----------------+
#       |       dimensões (cm³)         |   valor (R$)   |
#       |-------------------------------+----------------+
#       |   volume < 1000               |       10       |
#       |   1000 <= volume < 10000      |       20       |
#       |   10000 <= volume < 30000     |       30       |
#       |   30000 <= volume < 100000    |       50       |
#       |   volume >= 100000            |  Não é aceito  |
#       +-------------------------------+----------------+
#
#       Quadro 2: Peso versus Multiplicador
#       +-----------------------------+--------------+
#       |           peso (kg)         | multiplicador|
#       |-----------------------------+--------------|
#       |       peso <= 0.1           |      1       |
#       |       0.1 < peso <= 1       |      1.5     |
#       |       1 < peso <= 10        |      2       |
#       |       10 < peso <= 30       |      3       |
#       |       peso > 30             | Não é aceito |
#       +-----------------------------+--------------+
#
#       Quadro 3: Rota versus Multiplicador
#       +--------------------------------------------+--------------+
#       |                    rota                    | multiplicador|
#       |--------------------------------------------+--------------|
#       |   RS - De Rio de Janeiro até São Paulo     |      1       |
#       |   SR - De São Paulo até Rio de Janeiro     |      1       |
#       |   BS - De Brasília até São Paulo           |      1.2     |
#       |   SB - De São Paulo até Brasília           |      1.2     |
#       |   BR - De Brasília até Rio de Janeiro      |      1.5     |
#       |   RB - De Rio de Janeiro até Brasília      |      1.5     |
#       +--------------------------------------------+--------------+
#
# Elabore um programa em Python que:
# 1. Pergunte a altura (em cm), comprimento (em cm) e largura (em cm)do objeto.
# Se digitar um valor não numérico e/ou as dimensões passarem do limite
# aceito repetir a pergunta;
#
# 2. Pergunte o peso do objeto (em kg). Se digitar um valor não numérico e/ou o
# peso passar do limite aceito repetir a pergunta;
#
# 3. Pergunte a rota do objeto. Se digitar uma opção que não esteja na
# tabelarepetir a pergunta;
#
# 4. Encerre o total a ser pago com base na equação desse enunciado;
#
# 5. Deve-se codificar uma função dimensoesObjeto (EXIGÊNCIA 1 de 3);
#    - Dentro da função perguntar altura do objeto (em cm);
#    - Dentro da função perguntar o comprimento do objeto (em cm);
#    - Dentro da função perguntar a largura do objeto (em cm)
#    - Calcular o volume (em cm) da caixa p/a objeto (altura*largura*comprimento);
#    - Deve-se ter try/except para o caso do usuário digitar um valor não numérico;
#    - Deve-se retornar o valor em (RS) conforme a Quadro 1
#
# 6. Deve-se codificar uma função pesoObjeto (EXIGÊNCIA 2 de 3);
#    - Dentro da função perguntar peso do objeto (em kg);
#    - Deve-se ter um try/except para o caso de o usuário digitar um valor não
#      numérico;
#    - Deve-se retornar o multiplicador conforme o Quadro 2
#
# 7. Deve-se codificar uma função rotaObjeto (EXIGÊNCIA 3 de 3);
#    - Dentro da função perguntar a rota do objeto desejada (Sugestão: utilize as
#      siglas para facilitar os testes);
#    - OBS: PODE MUDAR O NOME DAS CIDADES E SUAS SIGLAS
#    - Deve-se retornar o multiplicador conforme o Quadro 3
#
# 8. Colocar um exemplo de SAIDA DE CONSOLE uma encomenda com peso,
# dimensões e rota válidos;
#
# 9. Colocar um exemplo de SAIDA DE CONSOLE com o tratamento de erro
# quando digitado um valor não numérico é digitado no campo peso ou
# dimensões)

import carrega_dados

from ConsoleInterface import ConsoleInterface
from models.Objeto import ObjetoDimensoes
from models.Objeto import Objeto
from models.Rota import Rota
from models.Entrega import Entrega


def main():
    rotas_disponiveis = carrega_dados.run()
    print("Bem-vindo à Companhia de Logística Vinicius Bautitz Tengaten!")

    descricao: str = ConsoleInterface.peca_objeto_descricao()

    objeto_dimensoes: ObjetoDimensoes = ConsoleInterface.peca_objeto_dimensoes()
    while objeto_dimensoes.get_volume() >= 100000:
        print("Não aceitamos objetos com dimensões tão grandes.")
        objeto_dimensoes = ConsoleInterface.peca_objeto_dimensoes()

    peso: float = ConsoleInterface.peca_objeto_peso()
    while peso > 30:
        print("Não aceitamos objetos tão pesados.")
        peso = ConsoleInterface.peca_objeto_peso()

    objeto = Objeto(descricao, peso, objeto_dimensoes)
    print(f"\nO volume do objeto é (cm^3): {objeto.get_dimensoes().get_volume()}")

    rota: Rota = ConsoleInterface.peca_rota(rotas_disponiveis)
    entrega: Entrega = Entrega(objeto, rota)

    ConsoleInterface.imprimir_detalhes_entrega(entrega)


main()
