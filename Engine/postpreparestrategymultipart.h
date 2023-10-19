#ifndef POSTPREPARESTRATEGYMULTIPART_H
#define POSTPREPARESTRATEGYMULTIPART_H
#include "engine_global.h"
#include "ipostpreparestrategy.h"

namespace BrowserAutomationStudioFramework
{
    class ENGINESHARED_EXPORT PostPrepareStrategyMultipart : public IPostPrepareStrategy
    {
        Q_OBJECT
        QString Boundary;
    public:
        explicit PostPrepareStrategyMultipart(QObject *parent = 0);
        virtual QByteArray GenerateData(const QHash<QString,ContentData> & params);
        virtual QByteArray GetContentType();
    signals:

    public slots:

    };
}

#endif // POSTPREPARESTRATEGYMULTIPART_H
