import QtQuick
import Felgo

Rectangle{
    signal buttonClicked()
    property alias buttext:innerrect.text
    property alias textsize:innerrect.font.pixelSize
    property string maincolor:"#FAC85B"
    id:colinrect
    Text{
        id:innerrect
        anchors.centerIn:parent
        font.bold: true
        color:"white"
    }
    color:maincolor
    radius:10
    MouseArea{
        anchors.fill:parent
        onPressed: {
            colinrect.color="#FCE1A7"
        }
        onReleased: {
            colinrect.color=maincolor
        }

        onClicked: {
            butrect.buttonClicked()
        }
    }
}
