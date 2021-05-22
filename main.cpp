#include <iostream>

using namespace std;

int main()
{
    int cont = 1, casos, vencedor;
    string sheldon, raj;
    cin >> casos;
    while (cont <= casos){
        cin >> sheldon;
        cin >> raj;
        if (sheldon[0] == 'S'){
            if (raj[0] == 'S'){
                vencedor = 0;
            }else{
                if (raj[0] == 't'){
                    vencedor = 1;
                }else{
                    if (raj[0] == 'l'){
                        vencedor = 2;
                    }else{
                        if (raj[1] == 'e'){
                            vencedor = 1;
                        }else{
                            vencedor = 2;
                        }
                    }
                }
            }
        }else{
            if (sheldon[0] == 't'){
                if (raj[0] == 'S'){
                    vencedor = 2;
                }else{
                    if (raj[0] == 't'){
                        vencedor = 0;
                    }else{
                        if (raj[0] == 'l'){
                            vencedor = 1;
                        }else{
                            if (raj[1] == 'e'){
                                vencedor = 2;
                            }else{
                                vencedor = 1;
                            }
                        }
                    }
                }
            }else{
                if (sheldon[0] == 'l'){
                    if (raj[0] == 'S'){
                        vencedor = 1;
                    }else{
                        if (raj[0] == 't'){
                            vencedor = 2;
                        }else{
                            if (raj[0] == 'l'){
                                vencedor = 0;
                            }else{
                                if (raj[1] == 'e'){
                                    vencedor = 2;
                                }else{
                                    vencedor = 1;
                                }
                            }
                        }
                    }
                }else{
                    if (sheldon[1] == 'e'){
                        if (raj[0] == 'S'){
                            vencedor = 2;
                        }else{
                            if (raj[0] == 't'){
                                vencedor = 1;
                            }else{
                                if (raj[0] == 'l'){
                                    vencedor = 1;
                                }else{
                                    if (raj[1] == 'e'){
                                        vencedor = 0;
                                    }else{
                                        vencedor = 2;
                                    }
                                }
                            }
                        }
                    }else{
                        if (raj[0] == 'S'){
                            vencedor = 1;
                        }else{
                            if (raj[0] == 't'){
                                vencedor = 2;
                            }else{
                                if (raj[0] == 'l'){
                                    vencedor = 2;
                                }else{
                                    if (raj[1] == 'e'){
                                        vencedor = 1;
                                    }else{
                                        vencedor = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << "Caso #" << cont << ": ";
        if (vencedor == 0){
            cout << "De novo!" <<endl;
        }else{
            if (vencedor == 1){
                cout << "Bazinga!" <<endl;
            }else{
                cout << "Raj trapaceou!" <<endl;
            }
        }
        cont++;
    }
    return 0;
}
