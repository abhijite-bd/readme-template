#include <iostream>

#include <vector>



using namespace std;







    int main()

    {

            int t;

            cin >> t;

            while(t--)

            {

                int N;

                cin >> N;

                vector <char> str(N,'0');

                vector <char> zeros(N,'0');

                if( N%2 == 1)

                {

                    cout << "YES" << endl;

                    for(int i=0;i<N;i++)

                    {

                        int wins = (N-1)/2;

                        for(int j=1;j<=(N-1)/2;j++)

                        {

                            if (i + j < N)

                            {

                                str[i + j] = '1';

                                wins--;

                            }

                            else{

                                for(int l=0;l<wins;l++)

                                str[l] = '1';

                                break;

                            }

                        }

                        for(int k=0;k<N;k++)

                        cout << str[k];

                        cout << endl;

                        str = zeros;

                    }

                }

                else 

                {

                    cout << "NO" << endl;

                }



            }

    }