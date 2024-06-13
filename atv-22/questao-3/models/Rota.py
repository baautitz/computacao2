class Rota:
    def __init__(self, descricao: str, sigla: str, multiplicador: float) -> None:
        self.__descricao = descricao
        self.__sigla = sigla
        self.__multiplicador = multiplicador

    def get_descricao(self) -> str:
        return self.__descricao

    def get_sigla(self) -> str:
        return self.__sigla

    def get_multiplicador(self) -> float:
        return self.__multiplicador
