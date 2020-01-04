# plutestplugin
qt plugin

必须区分qt的编译版本和vs的版本， vs是32位，qt最好也是32位，否则在qt designer 中使用插件时，不显示自定义的插件。

dll文件分别放置到 Qt\Qt_version\Tools\QtCreator\bin\plugins\designer 和 Qt\Qt_version\version\vsversion\plugins\designer 下
如：C:\QT\Tools\QtCreator\bin\plugins\designer\plutestplugin.dll 和C:\QT\5.7\msvc2013_64\plugins\designer\plutestplugin.dll 

针对QT 已有的插件但是在designer中没有，一种是自己编译qt对应插件的源码，将生成的dll放置上述位置，在设计ui界面是就会见到新增的插件，当然，这块还可以通过界面的 QWidget或者控件，选择正确的class name进行提升。
