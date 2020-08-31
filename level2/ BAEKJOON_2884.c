//알람시간을 입력 받고 그것 보다 45분 빠른 시간을 구하기

int main()
{
    int H, M;
    scanf("%d %d", &H, &M );

    if(M < 45)
    {
        M += 60;
        H--;
        if(H < 0)
            H = 23;
    }
    printf("%d %d",H, M-45);
    return 0;
}
