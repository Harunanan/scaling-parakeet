#include<ctype.h>

int main()
{
    int icf = 0;
    /* パスワード */
    char cps[128];
    int iLen; //文字数判定
    int ilc;  //英字小文字判定
    int iuc;  //英字大文字判定
    int inc;  //数字判定
    while (icf == 0){
        ilc = 0;
        iuc = 0;
        inc = 0;
        printf("Input PassWord * StopWord // * >> ");
        scanf("%s", &cps);
        if (strcmp(cps, "//") == 0) {
            icf = 1;
        }
        else
        {
            iLen = strlen(cps);
            printf("Length of \"%s\" is %d.\n", cps, iLen);
            if (iLen < 8){
                printf("Please enter at least 8 characters\n");
            } else {
                printf("OKOK");
                for(int i = 0; i < iLen; i++)
                {
                    //printf("%d番目の文字は%c\n", i + 1, cps[i]);
                    
                    if(isalnum(cps[i]))  //cps[i]が英字または数字の場合
                    {
                        if(isalpha(cps[i]))  // cps[i]が英字または数字の場合
                        {
                            if(islower(cps[i]))  //cps[i]が小文字の場合
                            {
                                ++ilc;
                            }
                            if(isupper(cps[i]))  //cps[i]が大文字の場合
                            {
                                ++iuc;
                            }
                        }
                    }
                    if(isdigit(cps[i]))  //cps[i]が英字または数字の場合
                    {
                        ++inc;
                    }
                }
                if (ilc == 0) {
                    printf("Does not contain lowercase letters ￥n");
                }
                if (iuc == 0) {
                    printf("Does not contain uppercase English characters ￥n");
                }
                if (inc == 0) {
                    printf("Does not contain a number \n");
                }
                if (ilc > 0 && iuc > 0 && inc > 0){
                    printf("Password requirements met\￥n");
                    printf("Thank you \n");
                    icf = 1;
                }
            }
        }
    }
    return 0;
}
