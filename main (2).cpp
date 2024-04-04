#include <iostream>
using namespace std;

int main()
{
    int escolha;
    int doar;
    
    cout<<"APHUREF-Apoio aos humanos no Reino das Fadas";
    cout<<"\nO que você deseja visualizar sobre a entidade assistencial APHUREF: ";
    cout<<"\n1- Apresentação da idealizadora da APHUREF";
    cout<<"\n2- Apresentação da entidade assistencial APHUREF";
    cout<<"\n3- Participação atualmente da idealizadora do projeto" << endl;
    cin>> escolha;
    
       switch(escolha){
        case 1:
        cout<<"\nJude Duarte, Rainha de Elfhame \nVeio para o mundo das fadas ainda quando criança com sua duas irmãs, sendo adotado pelo General Madoc. Por ser mortal sofria extremo preconceito do Povo das Fadas que acreditavam que os humanos deveriam servir. Pelos desafios que sofreu Jude Duarte resolveu criar uma entidade assistencial voltada aos humanos que vivem no Reino das Fadas" << endl;
        break;
        
        case 2:
        cout<<"\nA 'APHUREF-Apoio aos humanos no Reino das Fadas' tem como objetivo prestar apoio aos humanos no Reino das Fadas que se encontram em situações precárias de vida, por serem marginalizados pelo fato de serem mortais. Idealizado pela atual Rainha de Elfhame, Jude Duarte, uma mortal no Reino das Fadas que sofreu na pele esses preconceitos, implementou esse projeto para que os humanos ganhem condições dignas de vida no Reino das Fadas. 'Muitos desses humanos eram tidos como escravos, por serem facilmente sucetíveis aos encantos do Povo das Fadas. Crio essa organização para que quem sofra esses problemas tenha uma ajuda a quem recorrer ao entrar em Elfhame para que não seja facilmente ludibriado'"<< endl;
        break;
        
        case 3:
        cout<<"\nAtualmete a Rainha de Elfhame, Jude Duarte, participa ativamente como administradora da APHUREF, fazendo doações todos os meses para o projeto. Não somente isso, mas durante seu governo, juntamente com seu marido, o Rei de Elfhame, Cardan Greenbriar, criou políticas públicas de apoio aos humanos e valorização do projeto.\nFaça uma doação para a organização, e veja se Jude está em reunião no momento: "<< endl;
        cin>> doar;
        
        while (true){
            if (10000 >= doar){
                cout<<"Jude Duarte não pode comparecer a reunião na ONG";
            }
            else if (1000 > doar > 1 ){
                cout<<"Jude Duarte compareceu a reunião na ONG";
            }
            else{
                cout<<"Jude Duarte está resolvendo questões de Estado";
            }
            break;
        }
       }
   
    return 0;
}