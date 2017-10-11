import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import QtQuick.Window 2.0

import NameModule 1.0

ApplicationWindow {
    visible: true
    width: 380
    height: 240

    Rectangle {
        id: content

        TypeName {
            id: obj
        }

        ColumnLayout {
            height: parent.height
            anchors.horizontalCenter: content.horizontalCenter
            Rectangle {
                Layout.fillHeight: true
                Text {
                    anchors.centerIn: parent
                    id: firstNumber
                    text: "f = " + obj.firstNumber
                    font.bold: true

                    onTextChanged: {
                        console.log("firstNumberChanged");
                    }

                }
            }
        }
    }
}

