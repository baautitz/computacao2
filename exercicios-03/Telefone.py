class Tela:

    def __init__(self, tamanho: str, tipo: str) -> None:
        self.tamanho = tamanho
        self.tipo = tipo

    def getTamanho(self) -> str:
        return self.tamanho

    def getTipo(self) -> str:
        return self.tamanho


class Telefone:

    def __init__(self, marca: str, modelo: str, tela: Tela, camera: str) -> None:
        self.marca = marca
        self.modelo = modelo
        self.tela = tela
        self.camera = camera

    def tirarFoto(self) -> None:
        print(f"xiiissss, com {self.camera}")

    def fazerLigacao(self) -> None:
        print("alo!!")

    def tocaAlarme(self) -> None:
        print("acordaaaaa")

    def acessaRedeSocial(self) -> None:
        print("fala galerinha")


tela = Tela("6.7\"", "OLED")
telefone = Telefone("Apple", "iPhone 15", tela, "48 MP")

telefone.tirarFoto()
telefone.fazerLigacao()
telefone.tocaAlarme()
telefone.acessaRedeSocial()
