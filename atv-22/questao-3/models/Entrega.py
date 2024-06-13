from models.Objeto import Objeto
from models.Rota import Rota


class Entrega:
    def __init__(self, objeto: Objeto, rota: Rota) -> None:
        self.__objeto = objeto
        self.__rota = rota

    def get_objeto(self) -> Objeto:
        return self.__objeto

    def get_rota(self) -> Rota:
        return self.__rota

    def get_valor_dimensoes(self) -> float:
        volume = self.__objeto.get_dimensoes().get_volume()
        if volume < 1000:
            return 10
        elif volume >= 1000 and volume < 10000:
            return 20
        elif volume >= 10000 and volume < 30000:
            return 30
        elif volume >= 30000 and volume < 100000:
            return 50
        else:
            raise Exception("Volume não aceito!")

    def get_multiplicador_peso(self) -> float:
        peso = self.__objeto.get_peso()
        if peso <= 0.1:
            return 1
        elif peso > 0.1 and peso <= 1:
            return 1.5
        elif peso > 1 and peso <= 10:
            return 2
        elif peso > 10 and peso <= 30:
            return 3
        else:
            raise Exception("Peso não aceito!")

    def get_valor_entrega(self) -> float:
        return (
            self.get_valor_dimensoes()
            * self.get_multiplicador_peso()
            * self.__rota.get_multiplicador()
        )
