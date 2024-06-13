from models.Fabricante import Fabricante


class Peca:
    def __init__(
        self, codigo: int, descricao: str, fabricante: Fabricante, valor: float
    ) -> None:
        self.__codigo: int = codigo
        self.__descricao: str = descricao.upper()
        self.__fabricante: Fabricante = fabricante
        self.__valor: float = valor

    @property
    def codigo(self) -> int:
        return self.__codigo

    @property
    def descricao(self) -> str:
        return self.__descricao.upper()

    @property
    def fabricante(self) -> Fabricante:
        return self.__fabricante

    @property
    def valor(self) -> float:
        return self.__valor
