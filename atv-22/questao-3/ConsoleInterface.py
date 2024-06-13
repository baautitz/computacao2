from tabulate import tabulate

from models.Objeto import ObjetoDimensoes
from models.Rota import Rota
from models.Entrega import Entrega


class ConsoleInterface:
    @staticmethod
    def peca_objeto_descricao() -> str:
        return input("\nDigite uma descrição para o objeto: ")

    @staticmethod
    def peca_objeto_peso() -> float:
        while True:
            try:
                peso = float(input("\nDigite o peso do objeto (em kg): "))
                return peso
            except ValueError:
                print("Por favor, digite um valor numérico.")

    @staticmethod
    def peca_objeto_altura() -> float:
        while True:
            try:
                largura = float(input("Digite a altura do objeto (em cm): "))
                return largura
            except ValueError:
                print("Por favor, digite um valor numérico.")

    @staticmethod
    def peca_objeto_largura() -> float:
        while True:
            try:
                largura = float(input("Digite a largura do objeto (em cm): "))
                return largura
            except ValueError:
                print("Por favor, digite um valor numérico.")

    @staticmethod
    def peca_objeto_comprimento() -> float:
        while True:
            try:
                comprimento = float(input("Digite o comprimento do objeto (em cm): "))
                return comprimento
            except ValueError:
                print("Por favor, digite um valor numérico.")

    @staticmethod
    def peca_objeto_dimensoes() -> ObjetoDimensoes:
        altura = ConsoleInterface.peca_objeto_altura()
        largura = ConsoleInterface.peca_objeto_largura()
        comprimento = ConsoleInterface.peca_objeto_comprimento()

        return ObjetoDimensoes(altura, largura, comprimento)

    @staticmethod
    def peca_rota(rotas_disponiveis: list[Rota]) -> Rota:
        headers = ["Sigla", "Descrição", "Multiplicador"]
        routes_info = [
            [rota.get_sigla(), rota.get_descricao(), rota.get_multiplicador()]
            for rota in rotas_disponiveis
        ]
        print("\n" + tabulate(routes_info, headers=headers, tablefmt="fancy_grid"))

        while True:
            rota_digitada = input("Digite a sigla da rota desejada: ").upper()
            for rota in rotas_disponiveis:
                if rota.get_sigla().upper() == rota_digitada:
                    return rota
            print("Rota não encontrada. Por favor, digite uma rota válida.")

    @staticmethod
    def imprimir_detalhes_entrega(entrega: Entrega) -> None:
        headers = ["Detalhes da Entrega", ""]
        details = [
            ["Produto:", entrega.get_objeto().get_descricao()],
            [
                "Dimensões:",
                f"{entrega.get_objeto().get_dimensoes().get_altura()} x {entrega.get_objeto().get_dimensoes().get_largura()} x {entrega.get_objeto().get_dimensoes().get_comprimento()} cm",
            ],
            ["Peso:", f"{entrega.get_objeto().get_peso()} kg"],
            [
                "Rota:",
                f"{entrega.get_rota().get_descricao()} ({entrega.get_rota().get_sigla()})",
            ],
            ["Custo do Frete:", f"R${entrega.get_valor_entrega():05.2f}"],
        ]

        print("\n" + tabulate(details, headers=headers, tablefmt="fancy_grid"))
