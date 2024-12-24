import QtQuick
import Felgo
import QtQuick.Controls
Rectangle{
    id:butrect
    color:"#000000"
    property alias buttext:innerrect.text
    signal buttonClicked()
    radius:10
    Rectangle{
        id:colinrect
        Text{
            id:innerrect
            anchors.centerIn:parent
            font.bold: true

        }
        width:parent.width-2
        height:parent.height-2
        anchors.centerIn: parent
        color:"#FAC85B"
        radius:10
    }
    MouseArea{
        anchors.fill:parent
        onPressed: {
            colinrect.color="#FCE1A7"
        }
        onReleased: {
            colinrect.color="#FAC85B"
        }

        onClicked: {
            butrect.buttonClicked()
        }
    }
}
