#include <QString>
#include <QtTest>

#include <helloworld.h>

class SomeUnitTestTest : public QObject
{
    Q_OBJECT

public:
    SomeUnitTestTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1_data();
    void testCase1();
};

SomeUnitTestTest::SomeUnitTestTest()
{
}

void SomeUnitTestTest::initTestCase()
{
}

void SomeUnitTestTest::cleanupTestCase()
{
}

void SomeUnitTestTest::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void SomeUnitTestTest::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");

    HelloWorld w;

    QVERIFY(w.returnTrue());
}

QTEST_APPLESS_MAIN(SomeUnitTestTest)

#include "tst_someunittesttest.moc"
