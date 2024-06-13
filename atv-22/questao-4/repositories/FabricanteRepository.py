from models.Fabricante import Fabricante


class FabricanteRepository:
    def __init__(self) -> None:
        self.__list: list[Fabricante] = []

    def get_all(self) -> list[Fabricante]:
        return self.__list

    def get_by_name(self, nome: str) -> Fabricante:
        nome = nome.upper()

        for fabricante in self.get_all():
            if fabricante.nome != nome:
                continue

            return fabricante

        return None

    def add(self, fabricante: Fabricante) -> bool:
        if self.get_by_name(fabricante.nome) is not None:
            return False

        self.__list.append(fabricante)
        return True

    def remove(self, nome_fabricante: str) -> bool:
        if self.get_by_name(nome_fabricante) is None:
            return False

        new_list = []
        for fabricante in self.get_all():
            if fabricante.nome == nome_fabricante:
                continue

            new_list.append(fabricante)

        self.__list = new_list
        return True
