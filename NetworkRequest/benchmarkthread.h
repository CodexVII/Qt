#ifndef BENCHMARKTHREAD_H
#define BENCHMARKTHREAD_H


class BenchmarkWorker
{
public:
    BenchmarkWorker();

    void createUser(QString username);
    void deleteUser(QString username);
    void getUser();
    void searchUsers();
    void pay();
    void getTransactionHistory();
    void login();
    void updatePassword();
    void expressBenchmark();
    void targettedBenchmark();
    void delay(int ms);
    void updateNetworkSlot();
};

#endif // BENCHMARKTHREAD_H
