/*
* Implementação da Classe Cliente com os atributos Nome, Endereço e CPF gerando
o objeto Cliente pelo atributo Objeto Cliente criado pelo comando New
*/
package cliente;
import java.util.Scanner;
public class Cliente {
public static void main(String[] args) {//valorar os atributos
java.util.Scanner ObjetoCliente = new Scanner(System.in);
String NomeCliente, EndCliente;//variaveis
int CPF;
System.out.print("Entre com o Nome Cliente \n");//escreva
NomeCliente = ObjetoCliente.nextLine();//leia
System.out.print("Entre com o Endereço Cliente \n");
EndCliente = ObjetoCliente.nextLine();
System.out.print("Entre com o CPF Cliente \n");
CPF = ObjetoCliente.nextInt();
System.out.print("\n O Nome Cliente : " + NomeCliente + " .");
System.out.print("\n O Endereço Cliente : " + EndCliente + ".");
System.out.print("\n O CPF Cliente : " + CPF + "\n\n");
}
}
