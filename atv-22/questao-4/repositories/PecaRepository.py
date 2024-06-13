from models.Peca import Peca
from models.Fabricante import Fabricante


class PecaRepository:
    __counter = 1

    def __init__(self) -> None:
        self.__list: list[Peca] = []

    def get_all(self) -> list[Peca]:
        return self.__list

    def get_by_codigo(self, codigo: int) -> Peca:
        peca_encontrada = None

        for peca in self.get_all():
            if peca.codigo != codigo:
                continue

            peca_encontrada = peca

        return peca_encontrada

    def get_by_fabricante(self, fabricante: Fabricante) -> list[Peca]:
        resultado = []

        for peca in self.get_all():
            if peca.fabricante != fabricante:
                continue

            resultado.append(peca)

        return resultado

    def get_by_descricao(self, descricao: str) -> list[Peca]:
        descricao = descricao.upper()
        resultado = []

        for peca in self.get_all():
            if descricao not in peca.descricao:
                continue

            resultado.append(peca)

        return resultado

    def add(self, descricao: str, fabricante: Fabricante, valor: float) -> Peca:
        codigo = PecaRepository.__counter

        PecaRepository.__counter += 1

        nova_peca = Peca(codigo, descricao, fabricante, valor)

        self.__list.append(nova_peca)
        return nova_peca

    def remove_by_codigo(self, codigo: int) -> bool:
        peca = self.get_by_codigo(codigo)
        if peca is None:
            return False

        self.__list = [p for p in self.__list if p.codigo != codigo]
        return True
