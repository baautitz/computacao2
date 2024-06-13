from models.Peca import Peca


class ConsoleInterface:
    def __init__(self) -> None:
        pass

    def mensagem_boas_vindas(self) -> None:
        print(
            "\nBem-vindo ao controle de estoque da bicicletaria do Vinicius Bautitz Tengaten!"
        )

    def mensagem_peca_adicionada(self, peca: Peca) -> None:
        print(f"\nPeça [{peca.codigo}] {peca.descricao} adicionada com sucesso!")

    def mensagem_peca_removida(self, peca: Peca) -> None:
        print(f"\nPeça [{peca.codigo}] {peca.descricao} removida com sucesso!")

    def mensagem_consulta_fabricante_nao_econtrado(self) -> None:
        print("\nFabricante não encontrado.")

    def mensagem_consulta_peca_nenhuma_encontrada(self) -> None:
        print("\nNenhuma peça encontrada.")

    def imprimir_pecas(self, peca_lista: list[Peca]) -> None:
        print(f"\nListando {len(peca_lista)} peça(s):")
        for peca in peca_lista:
            print(f"\n - Código: {peca.codigo}")
            print(f" - Descrição: {peca.descricao}")
            print(f" - Fabricante: {peca.fabricante.nome}")
            print(f" - Valor (R$): {peca.valor:05.2f}")

    def solicitar_opcao(self, opcoes) -> int:
        while True:
            try:
                opcao = int(input("\nDigite a opção desejada: "))

                if opcao < 0:
                    raise ValueError()

                if opcao not in opcoes:
                    print("Opção inválida.")
                    continue

                return opcao
            except ValueError:
                print("Opção deve ser um número inteiro e positivo.")
                continue

    def solicitar_opcao_inicial(self) -> int:
        print("\n1. Cadastrar peça")
        print("2. Consultar peça")
        print("3. Remover peça")
        print("4. Sair")
        return self.solicitar_opcao([1, 2, 3, 4])

    def solicitar_opcao_consultar_peca(self) -> int:
        print("\n1. Consultar todas as peças")
        print("2. Consultar peça por código")
        print("3. Consultar peças por fabricante")
        print("4. Retornar")
        return self.solicitar_opcao([1, 2, 3, 4])

    def solicitar_peca_descricao(self) -> str:
        return input("Digite a descrição da peça: ").upper()

    def solicitar_peca_codigo(self) -> int:
        while True:
            try:
                codigo = int(input("Digite o código da peça: "))
                return codigo
            except ValueError:
                print("Código deve ser um número inteiro.")
                continue

    def solicitar_peca_valor(self) -> int:
        while True:
            try:
                valor = float(input("Digite o valor da peça (R$): "))

                if valor <= 0:
                    raise ValueError()

                return valor
            except ValueError:
                print("Código deve ser um número positivo.")
                continue

    def solicitar_fabricante_nome(self) -> str:
        return input("Digite o nome do fabricante: ").upper()
