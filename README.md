# QtUnitTestingTest

I'm trying to add unit tests to a project of mine for the first time. 
This is a mock project MWE with a similar structure as my real project.

On that mock example, I'm testing the HelloWorld class. I'm testing the function `returnsTrue` that it returns `true` indeed.
Buildling that project creates the `HelloWorld.lib`, althought I'm not sure if that's needed for the unit testing since the 
sources are there anyway.

I can run mock tests alright (without using my project's classes) and run the application alright.
But if I instantiate objects from the project I get an unresolved external symbol of the `QMetaObject`. 
If I recall correctly, this means the moc of the object isn't being included on the project.

How do I fix this? I have the same issue using googletests. 
The guide also doesn't help on this. I've tried installing the qt unit testing plugin, same result.

I'm using a static build of qt on windows, but I guess that's irrellevant. Using QtCreator as IDE and NMAke build.

I've also tried add the HelloWorld.lib, but taking a look at the Makefile.release it isn't used.

Somebody has an idea of what I'm doing wrong?

#### Build

You can build the project with `qmake` and then `jom` or whatever you prefer. You can also load it on `QtCreator` and build it there.

#### An Extract

Here's the unit testing .pro:

    QT       += widgets network testlib
    
    TARGET = tst_someunittesttest
    CONFIG   += console
    CONFIG   -= app_bundle
    
    TEMPLATE = app
    
    INCLUDEPATH += $$PWD/../HelloWorld
    
    include($$PWD/../HelloWorld/helloworldCommon.pri)
    
    LIBS += -L"$$OUT_PWD/../HelloWorld/release"
    LIBS += -lHelloWorld
    
    message("Searching libs here $$LIBS")
    
    SOURCES += tst_someunittesttest.cpp
    DEFINES += SRCDIR=\\\"$$PWD/\\\"

The first error's complete message:

    tst_someunittesttest.obj : error LNK2001: unresolved external symbol "public: virtual struct QMetaObject const * __cdecl HelloWorld::metaObject(void)const " (?metaObject@HelloWorld@@UEBAPEBUQMetaObject@@XZ)
