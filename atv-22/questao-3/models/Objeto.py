class ObjetoDimensoes:
    def __init__(self, altura: float, largura: float, comprimento: float) -> None:
        self.__altura = altura
        self.__largura = largura
        self.__comprimento = comprimento

    def get_altura(self) -> float:
        return self.__altura

    def get_largura(self) -> float:
        return self.__largura

    def get_comprimento(self) -> float:
        return self.__comprimento

    def get_volume(self) -> float:
        return self.get_altura() * self.get_largura() * self.get_comprimento()


class Objeto:
    def __init__(self, descricao: str, peso: float, dimensoes: ObjetoDimensoes) -> None:
        self.__descricao = descricao
        self.__peso = peso
        self.__dimensoes = dimensoes

    def get_descricao(self) -> str:
        return self.__descricao

    def get_peso(self) -> float:
        return self.__peso

    def get_dimensoes(self) -> ObjetoDimensoes:
        return self.__dimensoes
