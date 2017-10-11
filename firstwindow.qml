import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtQuick.Window 2.0

import FirstWindowModule 1.0

ApplicationWindow {
    visible: true
    width: 380
    height: 240
    id: firstwindow

    FirstWindow {
        id: obj;
    }

    Button {
       text: "Start"
       onClicked: {
           obj.start();

       var component = Qt.createComponent("main.qml");
           console.log("Component Status:", component.status, component.errorString());
           var window = component.createObject(firstwindow);
           window.show()
       }
    }
}
