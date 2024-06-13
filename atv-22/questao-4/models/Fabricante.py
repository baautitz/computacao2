class Fabricante:
    def __init__(self, nome: str) -> None:
        self.__nome = nome.upper() if nome is not None else None

    @property
    def nome(self) -> str:
        if self.__nome is None:
            return None

        return self.__nome.upper()
