#include "plutest.h"
#include "plutestplugin.h"

#include <QtPlugin>

PluTestPlugin::PluTestPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void PluTestPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool PluTestPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *PluTestPlugin::createWidget(QWidget *parent)
{
    return new PluTest(parent);
}

QString PluTestPlugin::name() const
{
    return QLatin1String("PluTest");
}

QString PluTestPlugin::group() const
{
    return QLatin1String("");
}

QIcon PluTestPlugin::icon() const
{
    return QIcon();
}

QString PluTestPlugin::toolTip() const
{
    return QLatin1String("");
}

QString PluTestPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool PluTestPlugin::isContainer() const
{
    return false;
}

QString PluTestPlugin::domXml() const
{
    return QLatin1String("<widget class=\"PluTest\" name=\"pluTest\">\n</widget>\n");
}

QString PluTestPlugin::includeFile() const
{
    return QLatin1String("plutest.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(plutestplugin, PluTestPlugin)
#endif // QT_VERSION < 0x050000
