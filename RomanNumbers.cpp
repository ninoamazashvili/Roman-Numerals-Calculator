using namespace std; 

    int roman_to_integer(string R) {
        int n = int(R.length());
        if (0 == n) {
            return 0;
        }

        int result = 0;
        for (int i = 0; i < n; i++) {
            switch (R[i]) {
                case 'I':
                    result += 1;
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'X':
                    result += 10;
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    result += 100;
                    break;
            }
        }

        for (int i = 1; i < n; i++) {
            if ((R[i] == 'V' || R[i] == 'X') && R[i - 1] == 'I') {
                result -= 1 + 1;
            }

            if ((R[i] == 'L' || R[i] == 'C') && R[i - 1] == 'X') {
                result -= 10 + 10;
            }

        }
        return result;
    }

  
int main()  
{  
    string R = "";
	cout << "Roman " << R << " -> Integer " << roman_to_integer(R) << endl;
    R = "XIX";
	cout << "Roman " << R << " -> Integer " << roman_to_integer(R) << endl;  


    return 0;  
}  