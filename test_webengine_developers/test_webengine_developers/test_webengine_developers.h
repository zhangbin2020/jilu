#ifndef TEST_WEBENGINE_DEVELOPERS_H
#define TEST_WEBENGINE_DEVELOPERS_H

#include <QtWidgets/%BASECLASS%>
#include "%UI_HDR%"

class test_webengine_developers : public %BASECLASS%
{
    Q_OBJECT

public:
    test_webengine_developers(QWidget *parent = 0);
    ~test_webengine_developers();

private:
    Ui::test_webengine_developersClass ui;
};

#endif // TEST_WEBENGINE_DEVELOPERS_H
