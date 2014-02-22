#ifndef POOLMANAGER_H
#define POOLMANAGER_H

#include <QObject>
#include<QList>
#include "escrowpool.h"

class PoolManager : QObject
{
public:
    PoolManager();

    void AddPool(EscrowPoolPtr pool);

    void RemovePool(EscrowPoolPtr poolToRemove);

    QList<EscrowPoolPtr> escrowPools;   // available pools

private:
};

#ifndef OT_USE_TR1
    typedef std::shared_ptr<PoolManager> PoolManagerPtr;
#else
    typedef std::tr1::shared_ptr<PoolManager> PoolManagerPtr;
#endif // OT_USE_TR1

#endif // POOLMANAGER_H