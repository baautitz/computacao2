# Imagina-se que você está desenvolvendo um software de controle de
# estoque para uma bicicletaria. Este software deve ter o seguinte menu e opções:
#
# 1. CadastrarPeça
# 2. Consultar Peça
#   1- Consultar Todas as Peças
#   2- ConsultaPeças por Código
#   3- Consulta Peças porFabricante
#   4- Retornar
# 3. Remover Peça
# 4. Sair
#
# Elabore um programa em Python que:
#
# 1. Deve-se codificar uma função cadastrarPeca(código) (EXIGÊNCIA 1);
#   - Essa função recebe como parâmetro um código exclusivo para cada peça
#     cadastrado (DICA: utilize um contador como parâmetro)
#   - Dentro da função perguntar o nome da peça;
#   - Dentro da função perguntar o fabricante da peça;
#   - Dentro da função perguntar o valor da peça
#   - Cada peça cadastrada deve ter os seus dados armazenados num DICIONÁRIO
#
# 2. Deve-se codificar uma função consultarPeca(EXIGÊNCIA 2);
# o Dentro da função ter um menu com as seguintes opções:
#   - Consultar Todas as Peças
#   - Consultar Peças por Código
#   - Consultar Peças por Fabricante
#   - Retornar
#
# 3. Deve-se codificar uma função chamada removerPeca (EXIGÊNCIA 3);
#   - Dentro da função perguntar qual o código do produto que se deseja remover
#     do cadastro (da lista de dicionário)
#
# 4. Colocar um exemplo de SAIDA DO CONSOLEcom o cadastro de 3 (ou mais) peças.
#    Sendo que 2 delas do mesmo fabricante
#
# 5. Colocar um exemplo de SAIDA DO CONSOLEcom a consulta a todas as peças
# cadastradas
#
# 6. Colocar um exemplo de SAIDA DO CONSOLE com uma consulta por código
#
# 7. Colocar um exemplo de SAIDA DO CONSOLE com uma consulta por fabricante
#
# 8. Colocar um exemplo de SAIDA DO CONSOLE ao remover um cadastro e mostrando
# depois todos os cadastros


from ConsoleInterface import ConsoleInterface

from repositories.FabricanteRepository import FabricanteRepository
from repositories.PecaRepository import PecaRepository

from models.Fabricante import Fabricante
from models.Peca import Peca


def main() -> None:
    interface = ConsoleInterface()
    fabricante_repository = FabricanteRepository()
    peca_repository = PecaRepository()

    while True:
        interface.mensagem_boas_vindas()
        opcao: int = interface.solicitar_opcao_inicial()

        if opcao == 1:
            peca_descricao: str = interface.solicitar_peca_descricao()
            fabricante_nome: str = interface.solicitar_fabricante_nome()
            peca_valor: float = interface.solicitar_peca_valor()

            if fabricante_repository.get_by_name(fabricante_nome) is None:
                novo_fabricante = Fabricante(fabricante_nome)
                fabricante_repository.add(novo_fabricante)

            fabricante: Fabricante = fabricante_repository.get_by_name(fabricante_nome)
            nova_peca: Peca = peca_repository.add(
                peca_descricao, fabricante, peca_valor
            )

            interface.mensagem_peca_adicionada(nova_peca)

        elif opcao == 2:
            opcao: int = interface.solicitar_opcao_consultar_peca()
            if opcao == 1:
                peca_lista: list[Peca] = peca_repository.get_all()

                if len(peca_lista) == 0:
                    interface.mensagem_consulta_peca_nenhuma_encontrada()
                    continue

                interface.imprimir_pecas(peca_lista)

            elif opcao == 2:
                peca_codigo: int = interface.solicitar_peca_codigo()
                resultado: Peca = peca_repository.get_by_codigo(peca_codigo)

                if resultado is None:
                    interface.mensagem_consulta_peca_nenhuma_encontrada()
                    continue

                interface.imprimir_pecas(peca_lista=[resultado])

            elif opcao == 3:
                peca_fabricante_nome: str = interface.solicitar_fabricante_nome()

                fabricante: Fabricante = fabricante_repository.get_by_name(
                    peca_fabricante_nome
                )

                if fabricante is None:
                    interface.mensagem_consulta_fabricante_nao_econtrado()
                    continue

                peca_lista = peca_repository.get_by_fabricante(fabricante)

                if len(peca_lista) == 0:
                    interface.mensagem_consulta_peca_nenhuma_encontrada()
                    continue

                interface.imprimir_pecas(peca_lista)

            elif opcao == 4:
                continue

        elif opcao == 3:
            codigo = interface.solicitar_peca_codigo()

            peca = peca_repository.get_by_codigo(codigo)
            if peca == None:
                interface.mensagem_consulta_peca_nenhuma_encontrada()
                continue

            peca_repository.remove_by_codigo(peca.codigo)
            interface.mensagem_peca_removida(peca)

        elif opcao == 4:
            break


main()
